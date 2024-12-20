// MoveToPlayerAction.h

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansSequence.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "MoveToPlayerAction.generated.h"

UCLASS()
class AGP_API UMoveToPlayerAction : public UFabiansSequence
{

	friend class AEnemyCharacter;
	friend class UPatrolAction;
	GENERATED_BODY()
	class UPlayerNotDetectedCondition;
public:
	UMoveToPlayerAction();

	virtual EStatus update() override;

	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;
	UPROPERTY()
	APlayerCharacter* PlayerCharacter;

protected:
	UPROPERTY()
	UPlayerDetectedCondition* PlayerDetectedCondition;
};