#pragma once

#include "CoreMinimal.h"
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
	void RespawnEnemy(AEnemyCharacter* Enemy); // Add this line for enemy respawn

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<APlayerCharacter> PlayerCharacterClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEnemyCharacter> EnemyCharacterClass; // Add this line for the enemy class
};
