#include "CoverNode.h"
#include "DrawDebugHelpers.h"

// Sets default values
ACoverNode::ACoverNode()
{
	PrimaryActorTick.bCanEverTick = true;
	bIsOccupied = false; // Initialize as not occupied
}

// Called when the game starts or when spawned
void ACoverNode::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACoverNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Visualize the cover node as a sphere in the world
	FColor DebugColor = bIsOccupied ? FColor::Red : FColor::Green; // Red if occupied, green if available
	DrawDebugSphere(GetWorld(), GetActorLocation(), 50.0f, 12, DebugColor, false, -1, 0, 2.0f);
}

// Checks if the cover node is available
bool ACoverNode::IsAvailableForCover() const
{
	return !bIsOccupied;
}

// Sets the cover node as occupied or free
void ACoverNode::SetOccupied(bool bOccupied)
{
	bIsOccupied = bOccupied;
}
