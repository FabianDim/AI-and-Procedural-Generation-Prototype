// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansComposite.h"
#include "NegateNode.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UNegateNode : public UFabiansComposite
{
	GENERATED_BODY()
	friend class UFabiansComposite;

	virtual EStatus update() override;

	EStatus NegateFunction(EStatus Status);

	virtual void OnInitialise() override;
	
	
};
