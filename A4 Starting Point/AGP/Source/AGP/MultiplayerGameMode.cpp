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