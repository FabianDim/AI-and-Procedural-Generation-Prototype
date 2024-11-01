// Fill out your copyright notice in the Description page of Project Settings.


#include "NegateNode.h"

EStatus UNegateNode::update()
{
	for (FBehaviors::TIterator It(Children); It; ++It)
	{
		// Check if the child is not a nullptr before calling Tick
		if (*It == nullptr)
		{
			continue; // Skip this iteration if the child is a nullptr
		}

		// Use the iterator to call Tick() on each child
		EStatus Status = (*It)->Tick();

		if (Status == EStatus::Failure)
		{
			return EStatus::Success; // Return Success if the child status is Failure
		}
		if (Status == EStatus::Success)
		{
			return EStatus::Failure;
		}
		else
		{
			return Status;
		}
	}

	// If all children fail, return Invalid
	return EStatus::Invalid;
}

void UNegateNode::OnInitialise()
{
}


