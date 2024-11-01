// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "NoGunCondition.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UNoGunCondition : public UFabiansBehaviourTree
{
	GENERATED_BODY()
friend class AEnemyCharacter;

public:
	virtual EStatus update();

protected:
	AEnemyCharacter* EnemyCharacter;
};

UCLASS()
class UHasGunCondition : public UFabiansBehaviourTree
{
	GENERATED_BODY()
	friend class AEnemyCharacter;

public:
	virtual EStatus update();

protected:
	AEnemyCharacter* EnemyCharacter;
};
