#include "MultiplayerGameMode.h"
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

void AMultiplayerGameMode::RespawnEnemy(AEnemyCharacter* Enemy)
{
	if (Enemy)
	{
		FVector SpawnLocation = Enemy->GetActorLocation();
		FRotator SpawnRotation = Enemy->GetActorRotation();

		// Store the class type of the enemy
		TSubclassOf<AEnemyCharacter> EnemyClass = Enemy->GetClass();

		// Destroy the current enemy
		Enemy->Destroy();

		// Spawn a new enemy at the original location
		if (EnemyCharacterClass)
		{
			AEnemyCharacter* NewEnemy = GetWorld()->SpawnActor<AEnemyCharacter>(EnemyCharacterClass, SpawnLocation, SpawnRotation);
			if (NewEnemy)
			{
				// Reset the health of the new enemy
				if (UHealthComponent* HealthComp = NewEnemy->FindComponentByClass<UHealthComponent>())
				{
					HealthComp->ResetHealth();
				}
			}
		}
	}
}
