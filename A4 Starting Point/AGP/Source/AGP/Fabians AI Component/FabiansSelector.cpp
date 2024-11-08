﻿#include "FabiansSelector.h"

void UFabiansSelector::OnInitialise()
{
}

EStatus UFabiansSelector::update()
{
	while(true)
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

UFabiansSelector::UFabiansSelector() : CurrentChildIndex(0)
{
}



