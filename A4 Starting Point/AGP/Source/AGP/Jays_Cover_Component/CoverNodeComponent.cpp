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

    // Draw the debug sphere only if needed
    // DrawDebugCoverNode();

    // Call the function to check for enemies
    CheckForEnemy();
}

void UCoverNodeComponent::DrawDebugCoverNode()
{
    FColor DebugColor = bIsOccupied ? FColor::Red : FColor::Green;
    DrawDebugSphere(GetWorld(), GetComponentLocation(), 50.0f, 12, DebugColor, false, -1, 0, 2.0f);
}

void UCoverNodeComponent::CheckForEnemy()
{
    // Define the start and end points for the raycast
    FVector Start = GetComponentLocation();
    FVector End = Start + FVector(0, 0, -100); // Adjust direction as needed

    FHitResult HitResult;
    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(GetOwner()); // Ignore the owner of this component

    // Perform the raycast
    if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams))
    {
        // Check if the hit actor is an enemy character
        if (AEnemyCharacter* HitEnemy = Cast<AEnemyCharacter>(HitResult.GetActor()))
        {
            // Log a message when an enemy character is touched
            UE_LOG(LogTemp, Warning, TEXT("Touched EnemyCharacter: %s"), *HitEnemy->GetName());
        }
    }
}