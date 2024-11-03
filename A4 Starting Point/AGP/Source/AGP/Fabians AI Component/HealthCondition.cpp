#include "HealthCondition.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "AGP/Characters/HealthComponent.h"

UHealthCondition::UHealthCondition()
	: EnemyCharacter(nullptr)
{
}

EStatus UHealthCondition::update()
{
	if (!EnemyCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("HealthCondition: EnemyCharacter is null"));
		return EStatus::Failure;
	}

	float CurrentHealth = EnemyCharacter->HealthComponent->GetCurrentHealth(); // Gets the current health
	if (CurrentHealth <= HealthThreshold) //compares to threshold.
	{
		return EStatus::Success;
	}
	else
	{
		return EStatus::Failure;
	}

}