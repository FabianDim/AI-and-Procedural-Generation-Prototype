// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansComposite.h"


void UFabiansComposite::AddChild(UFabiansBehaviourTree* Child)
{
	if (!Child)
	{
		UE_LOG(LogTemp, Error, TEXT("Attempted to add a null child to a composite node"));
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("Adding child of type %s to composite node"), *Child->GetClass()->GetName());
	Children.Add(Child);
}