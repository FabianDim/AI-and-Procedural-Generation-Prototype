// Fill out your copyright notice in the Description page of Project Settings.


#include "NegateNode.h"

EStatus UNegateNode::update()
{
	for (FBehaviors::TIterator It(Children); It; ++It)
	{
		// Use the iterator to call Tick() on each child
		EStatus Status = (*It)->Tick();

		if (Status != EStatus::Failure)
		{
			return Status; // Return if the child status is not Failure
		}
	}
	// If all children fail, return Failure
	return EStatus::Failure;	
}
}

EStatus UNegateNode::NegateFunction(EStatus Status)
{
	
}
