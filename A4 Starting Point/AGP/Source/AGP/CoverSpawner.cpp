#include "CoverSpawner.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values
ACoverSpawner::ACoverSpawner()
{
    PrimaryActorTick.bCanEverTick = true;

    // Default values
    NumCoverPieces = 5;
    SpawnAreaMin = FVector(-1000, -1000, 0);
    SpawnAreaMax = FVector(1000, 1000, 0);
    MinDistanceBetweenCoverPieces = 200.f;
}

// Called when the game starts or when spawned
void ACoverSpawner::BeginPlay()
{
    Super::BeginPlay();

    // Automatically spawn cover when the game begins
    SpawnRandomCover();
}

// Called every frame
void ACoverSpawner::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Spawns cover at random locations
void ACoverSpawner::SpawnRandomCover()
{
    if (CoverActorClass)
    {
        for (int32 i = 0; i < NumCoverPieces; i++)
        {
            FVector SpawnLocation = GetRandomSpawnLocation();

            // Ensure valid location with no overlap
            int32 MaxAttempts = 10;
            while (!IsValidSpawnLocation(SpawnLocation) && MaxAttempts-- > 0)
            {
                SpawnLocation = GetRandomSpawnLocation();
            }

            if (MaxAttempts > 0)
            {
                FRotator SpawnRotation = FRotator::ZeroRotator;

                // Spawn the cover actor
                AActor* SpawnedCover = GetWorld()->SpawnActor<AActor>(CoverActorClass, SpawnLocation, SpawnRotation);
                if (SpawnedCover)
                {
                    // Store the location of the spawned cover piece
                    SpawnedCoverLocations.Add(SpawnLocation);
                }
            }
        }
    }
}

// Generates a random spawn location within the defined area, relative to the spawner's location
FVector ACoverSpawner::GetRandomSpawnLocation() const
{
    // Calculate the center point based on the spawner's location
    FVector SpawnerLocation = GetActorLocation();

    float RandomX = FMath::FRandRange(SpawnAreaMin.X, SpawnAreaMax.X);
    float RandomY = FMath::FRandRange(SpawnAreaMin.Y, SpawnAreaMax.Y);
    float RandomZ = SpawnerLocation.Z;  // Keep Z constant for ground-level placement

    // Return a random location offset from the spawner's location
    return SpawnerLocation + FVector(RandomX, RandomY, RandomZ);
}

// Check if the spawn location is valid (no overlap with existing cover)
bool ACoverSpawner::IsValidSpawnLocation(const FVector& Location) const
{
    for (const FVector& ExistingLocation : SpawnedCoverLocations)
    {
        if (FVector::Dist(Location, ExistingLocation) < MinDistanceBetweenCoverPieces)
        {
            return false; // Location too close to another cover
        }
    }
    return true;
}


