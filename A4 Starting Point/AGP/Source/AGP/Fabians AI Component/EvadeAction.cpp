// Fill out your copyright notice in the Description page of Project Settings.


#include "EvadeAction.h"

#include "AGP/Jays_Cover_Component/CoverNodeComponent.h"

EStatus UEvadeAction::update()
{
	EnemyCharacter->TickEvade();
	UE_LOG(LogTemp, Error, TEXT("Evade Action is Running"));
	return EStatus::Running; // Return Running to indicate ongoing action
}

