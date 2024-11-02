#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoverNode.generated.h"


UCLASS()
class AGP_API ACoverNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoverNode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Tracks if this cover node is occupied by an AI character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cover")
	bool bIsOccupied;

	// Function to check if the node is available for cover
	UFUNCTION(BlueprintCallable, Category = "Cover")
	bool IsAvailableForCover() const;

	// Function to mark the node as occupied or free
	UFUNCTION(BlueprintCallable, Category = "Cover")
	void SetOccupied(bool bOccupied);
};
