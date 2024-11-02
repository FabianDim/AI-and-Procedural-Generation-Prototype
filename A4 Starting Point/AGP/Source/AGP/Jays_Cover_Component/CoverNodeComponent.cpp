#include "CoverNodeComponent.h"
#include "DrawDebugHelpers.h"

UCoverNodeComponent::UCoverNodeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UCoverNodeComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UCoverNodeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	DrawDebugCoverNode();
}

void UCoverNodeComponent::DrawDebugCoverNode()
{
	FColor DebugColor = bIsOccupied ? FColor::Red : FColor::Green;
	DrawDebugSphere(GetWorld(), GetComponentLocation(), 50.0f, 12, DebugColor, false, -1, 0, 2.0f);
}
