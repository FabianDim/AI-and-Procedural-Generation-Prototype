#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CoverNodeComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AGP_API UCoverNodeComponent : public USceneComponent
{
	GENERATED_BODY()
	friend class AEnemyCharacter;
	friend class UMoveToCoverAction;
	friend class UEvadeAction;
    
public:
	UCoverNodeComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Whether the cover is occupied or available
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cover")
	bool bIsOccupied = false;

	// Whether this cover node is valid for AI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cover")
	bool bIsValidCover = true;

private:
	void DrawDebugCoverNode();
	UCoverNodeComponent* /*void */CheckForEnemy();
	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;
};
