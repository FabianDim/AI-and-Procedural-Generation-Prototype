#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter.h"
#include "GameFramework/GameMode.h"
#include "MultiplayerGameMode.generated.h"

class APlayerCharacter;
class AEnemyCharacter; // Forward declaration of the enemy character class

/**
 * 
 */
UCLASS()
class AGP_API AMultiplayerGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	void RespawnPlayer(AController* Controller);
<<<<<<< HEAD
	void RespawnEnemy(AEnemyCharacter* Enemy); // Add this line for enemy respawn
=======
	void RespawnNPC(AEnemyCharacter* DeadEnemy);
	void SpawnNPCAtLocation(TSubclassOf<AEnemyCharacter> NPCClass, FVector SpawnLocation, FRotator SpawnRotation);
>>>>>>> MapDevelopment

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<APlayerCharacter> PlayerCharacterClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEnemyCharacter> EnemyCharacterClass; // Add this line for the enemy class
};
