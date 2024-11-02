// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter.h"
#include "GameFramework/GameMode.h"
#include "MultiplayerGameMode.generated.h"

class APlayerCharacter;
/**
 * 
 */
UCLASS()
class AGP_API AMultiplayerGameMode : public AGameMode
{
	GENERATED_BODY()

public:

	void RespawnPlayer(AController* Controller);
	void RespawnNPC(AEnemyCharacter* DeadEnemy);
	void SpawnNPCAtLocation(TSubclassOf<AEnemyCharacter> NPCClass, FVector SpawnLocation, FRotator SpawnRotation);

protected:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<APlayerCharacter> PlayerCharacterClass;
	
};
