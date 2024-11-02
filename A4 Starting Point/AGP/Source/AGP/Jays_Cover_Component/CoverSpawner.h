#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoverSpawner.generated.h"

UCLASS()
class AGP_API ACoverSpawner : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ACoverSpawner();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Function to spawn cover at random locations
    UFUNCTION(BlueprintCallable, Category = "Cover")
    void SpawnRandomCover();

    // Reference to the cover actor class to spawn
    UPROPERTY(EditAnywhere, Category = "Cover")
    TSubclassOf<AActor> CoverActorClass;

    // Number of cover pieces to spawn
    UPROPERTY(EditAnywhere, Category = "Cover")
    int32 NumCoverPieces;

    // Boundaries for random cover spawn locations
    UPROPERTY(EditAnywhere, Category = "Cover")
    FVector SpawnAreaMin;

    UPROPERTY(EditAnywhere, Category = "Cover")
    FVector SpawnAreaMax;

    // Minimum distance between cover pieces to avoid overlap
    UPROPERTY(EditAnywhere, Category = "Cover")
    float MinDistanceBetweenCoverPieces;

private:
    // Function to generate a random location within the specified area
    FVector GetRandomSpawnLocation() const;

    // Checks if a location is valid (no overlap with existing covers)
    bool IsValidSpawnLocation(const FVector& Location) const;

    // List of spawn locations for already placed cover
    TArray<FVector> SpawnedCoverLocations;
    
};

