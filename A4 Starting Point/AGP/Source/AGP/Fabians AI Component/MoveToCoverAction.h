// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "MoveToCoverAction.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UMoveToCoverAction : public UFabiansBehaviourTree
{
	GENERATED_BODY()
	friend class UCoverNodeComponent;

	virtual EStatus update() override;
UPROPERTY()
	AEnemyCharacter* EnemyCharacter;

protected:
	
	
};
