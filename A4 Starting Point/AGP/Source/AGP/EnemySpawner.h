// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fabians AI Component/FabiansBehaviourTree.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class AGP_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
friend class AEnemyCharacter;
public:
	AEnemySpawner();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Function to spawn an enemy
	void SpawnEnemy();

	// Blueprint class of the enemy to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	TSubclassOf<class AEnemyCharacter> EnemyCharacterClass;

	//Max enemies 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Spawner")
	int32 MaxActiveEnemies = 5; // Set default to 5


	// Timer handle for the spawn interval
	FTimerHandle SpawnTimerHandle;

	// Time interval for spawning enemies
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnInterval = 20.0f; // 20 seconds

	UFabiansBehaviourTree* BehaviourTree;
};