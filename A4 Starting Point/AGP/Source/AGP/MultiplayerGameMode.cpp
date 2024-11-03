#include "MultiplayerGameMode.h"
<<<<<<< HEAD
=======

#include "Characters/EnemyCharacter.h"
>>>>>>> MapDevelopment
#include "Characters/PlayerCharacter.h"
#include "Characters/EnemyCharacter.h" // Include your enemy character header
#include "Characters/HealthComponent.h"

void AMultiplayerGameMode::RespawnPlayer(AController* Controller)
{
	if (Controller)
	{
		if (APlayerCharacter* CurrentlyPossessedCharacter = Cast<APlayerCharacter>(Controller->GetPawn()))
		{
			Controller->UnPossess();
			CurrentlyPossessedCharacter->Destroy();
			RestartPlayer(Controller);
			if (APlayerCharacter* NewPossessedCharacter = Cast<APlayerCharacter>(Controller->GetPawn()))
			{
				NewPossessedCharacter->ChooseCharacterMesh();
				NewPossessedCharacter->DrawUI();
			}
		}
	}
}

<<<<<<< HEAD
void AMultiplayerGameMode::RespawnEnemy(AEnemyCharacter* Enemy)
{
	if (Enemy)
	{
		// Store the location and rotation of the enemy
		FVector SpawnLocation = Enemy->GetActorLocation();
		FRotator SpawnRotation = Enemy->GetActorRotation();

		// Play the death sound
		if (Enemy->DeathSound) 
		{
			UGameplayStatics::PlaySoundAtLocation(this, Enemy->DeathSound, SpawnLocation);
		}

		// Destroy the current enemy
		Enemy->Destroy();
	}
}
=======
/*void AMultiplayerGameMode::RespawnNPC(AEnemyCharacter* DeadEnemy)
{
	if (DeadEnemy)
	{
		// Get the class of the NPC to respawn
		TSubclassOf<AEnemyCharacter> NPCClass = DeadEnemy->GetClass();

		// Determine spawn location and rotation
		FVector SpawnLocation = DeadEnemy->GetActorLocation();
		FRotator SpawnRotation = DeadEnemy->GetActorRotation();

		// Optional: Adjust spawn location if necessary

		// Set a timer to respawn the NPC after a delay
		float RespawnDelay = 5.0f; // Adjust the delay as needed
		FTimerHandle RespawnTimerHandle;
		FTimerDelegate RespawnDelegate = FTimerDelegate::CreateUObject(
			this, &AMultiplayerGameMode::SpawnNPCAtLocation, NPCClass, SpawnLocation, SpawnRotation
		);
		GetWorld()->GetTimerManager().SetTimer(RespawnTimerHandle, RespawnDelegate, RespawnDelay, false);
	}
}
void AEnemyCharacter::OnDeath()
{
	// Optional: Play death animations or effects here

	// Call the respawn function in the GameMode
	if (AMultiplayerGameMode* GM = GetWorld()->GetAuthGameMode<AMultiplayerGameMode>())
	{
		GM->RespawnNPC(this);
	}

	// Destroy the NPC actor
	Destroy();
}
void AMultiplayerGameMode::SpawnNPCAtLocation(TSubclassOf<AEnemyCharacter> NPCClass, FVector SpawnLocation, FRotator SpawnRotation)
{
	if (NPCClass)
	{
		FActorSpawnParameters SpawnParams;
		// Configure spawn parameters if needed

		// Spawn the new NPC
		AEnemyCharacter* NewEnemy = GetWorld()->SpawnActor<AEnemyCharacter>(NPCClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (NewEnemy)
		{
			// Optional: Initialize the new NPC
			// Assign an AIController if necessary
			if (!NewEnemy->GetController())
			{
				AAIController* AIController = GetWorld()->SpawnActor<AAIController>(AAIController::StaticClass());
				if (AIController)
				{
					AIController->Possess(NewEnemy);
				}
			}
		}
	}
}*/
>>>>>>> MapDevelopment
