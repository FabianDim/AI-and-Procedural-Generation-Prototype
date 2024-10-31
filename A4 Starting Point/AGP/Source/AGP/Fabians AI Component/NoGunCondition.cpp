// Fill out your copyright notice in the Description page of Project Settings.


#include "NoGunCondition.h"

EStatus UNoGunCondition::update()
{
	if(EnemyCharacter && EnemyCharacter->HasWeapon())
	{
		return EStatus::Failure;
	}
	return EStatus::Success;
}
