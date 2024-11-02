#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CoverNodeComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AGP_API UCoverNodeComponent : public USceneComponent
{
	GENERATED_BODY()
    
public:
	UCoverNodeComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Whether the cover is occupied or available
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cover")
	bool bIsOccupied = false;

	

private:
	void DrawDebugCoverNode();
};
