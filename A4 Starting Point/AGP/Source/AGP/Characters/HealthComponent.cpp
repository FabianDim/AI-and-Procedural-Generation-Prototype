// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

#include "EnemyCharacter.h"
#include "PlayerCharacter.h"
#include "AGP/MultiplayerGameMode.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
	// ...
}

bool UHealthComponent::IsDead()
{
	return bIsDead;
}

float UHealthComponent::GetCurrentHealth() const
{
	return CurrentHealth;
}

float UHealthComponent::GetCurrentHealthPercentage() const
{
	return CurrentHealth / MaxHealth;
}

void UHealthComponent::ApplyDamage(float DamageAmount)
{
	if (bIsDead) return;
	CurrentHealth -= DamageAmount;
	if (CurrentHealth <= 0.0f)
	{
		OnDeath();
		CurrentHealth = 0.0f;
	}
	UpdateHealthBar();
}

void UHealthComponent::ApplyHealing(float HealingAmount)
{
	if (bIsDead) return;
	CurrentHealth += HealingAmount;
	if (CurrentHealth > 100.0f)
	{
		CurrentHealth = 100.0f;
	}
	UpdateHealthBar();
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UHealthComponent, MaxHealth);
	DOREPLIFETIME(UHealthComponent, CurrentHealth);
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	CurrentHealth = MaxHealth;
}


void UHealthComponent::OnDeath()
{
	UE_LOG(LogTemp, Display, TEXT("The character has died."));
	bIsDead = true;

	// Notify the owning character that they have died.
	if (GetOwnerRole() == ROLE_Authority) // Only run this on the server
	{
		if (ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner()))
		{
			Character->OnDeath();

			// Get the game mode and respawn the enemy
			if (AMultiplayerGameMode* GameMode = Cast<AMultiplayerGameMode>(GetWorld()->GetAuthGameMode()))
			{
				GameMode->RespawnEnemy(Cast<AEnemyCharacter>(Character));
			}
		}
	}
	/*else if(AEnemyCharacter* EnemyCharacter = Cast<AEnemyCharacter>(GetOwner()))
	{
		EnemyCharacter->OnDeath();
	}*/
}

void UHealthComponent::UpdateHealthBar()
{
	if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetOwner()))
	{
		PlayerCharacter->UpdateHealthBar(GetCurrentHealthPercentage());
	}
}

void UHealthComponent::ResetHealth()
{
	UE_LOG(LogTemp, Display, TEXT("MAX HEALTH: %f"), MaxHealth)
	CurrentHealth = MaxHealth;
	bIsDead = false;
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

