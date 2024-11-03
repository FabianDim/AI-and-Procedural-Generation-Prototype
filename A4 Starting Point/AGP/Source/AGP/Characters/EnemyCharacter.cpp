// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "EngineUtils.h"
#include "HealthComponent.h"
#include "PlayerCharacter.h"
#include "AGP/Fabians AI Component/EvadeAction.h"
#include "AGP/Fabians AI Component/FabiansActiveSelector.h"
#include "AGP/Fabians AI Component/FabiansSelector.h"
#include "AGP/Fabians AI Component/FabiansSequence.h"
#include "AGP/Fabians AI Component/HealthCondition.h"
#include "AGP/Fabians AI Component/MoveToPlayerAction.h"
#include "AGP/Fabians AI Component/NegateNode.h"
#include "AGP/Fabians AI Component/NoGunCondition.h"
#include "AGP/Fabians AI Component/PatrolAction.h"
#include "AGP/Fabians AI Component/PlayerDetectedCondition.h"
#include "AGP/Jays_Cover_Component/CoverNodeComponent.h"
#include "AGP/Pathfinding/PathfindingSubsystem.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CoverNodeComponent = CreateDefaultSubobject<UCoverNodeComponent>(TEXT("CoverNodeComponent"));
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>("Pawn Sensing Component");
}
void AEnemyCharacter::GetTickPatrol()
{
	TickPatrol();
}

void AEnemyCharacter::GetTickEngage()
{
	TickEngage();
}
// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	PickupManagerSubsystem = GetWorld()->GetSubsystem<UPickupManagerSubsystem>();
	// DO NOTHING IF NOT ON THE SERVER
	if (GetLocalRole() != ROLE_Authority) return;
	
	PathfindingSubsystem = GetWorld()->GetSubsystem<UPathfindingSubsystem>();
	if (PathfindingSubsystem)
	{
		CurrentPath = PathfindingSubsystem->GetRandomPath(GetActorLocation());
	} else
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to find the PathfindingSubsystem"))
	}
	if (PawnSensingComponent)
	{
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemyCharacter::OnSensedPawn);
	}
	BehaviourTreeRoot = NewObject<UFabiansActiveSelector>(this);
	if (!BehaviourTreeRoot)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create BehaviourTreeRoot as UFabiansActiveSelector"));
		return;
	}
    
	UFabiansActiveSelector* RootSelector = Cast<UFabiansActiveSelector>(BehaviourTreeRoot); //selects the root.
	if (!RootSelector)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to cast BehaviourTreeRoot to UFabiansActiveSelector"));
		return;
	}

	UFabiansSelector* Selector = NewObject<UFabiansSelector>(this);
	if (!Selector)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed Selector"));
		return;
	}
	// Create sequences
	UFabiansSequence* EvadeSequence = NewObject<UFabiansSequence>(this);
	UFabiansSequence* EngageSequence = NewObject<UFabiansSequence>(this);
	UFabiansSequence* PatrolSequence	 = NewObject<UFabiansSequence>(this);

	if (!EvadeSequence || !EngageSequence || !PatrolSequence)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create one of the sequences"));
		return;
	}

	// Create conditions and actions
	UHealthCondition* HealthCondition = NewObject<UHealthCondition>(this);
	if (!HealthCondition)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create HealthCondition"));
		return;
	}
	HealthCondition->EnemyCharacter = this;
	//HealthCondition->SetHealthThreshold(40.0f);
	UEvadeAction* EvadeAction = NewObject<UEvadeAction>(this);
	if (!EvadeAction)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create EvadeAction"));
		return;
	}
	EvadeAction->EnemyCharacter = this;
	/*EvadeAction->CoverNodeComponent = CoverNodeComponent->CheckForEnemy();*/

	UPlayerDetectedCondition* PlayerDetected = NewObject<UPlayerDetectedCondition>(this);
	if (!PlayerDetected)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create PlayerDetected"));
		return;
	}
	PlayerDetected->EnemyCharacter = this;

	UMoveToPlayerAction* MoveToPlayerAction = NewObject<UMoveToPlayerAction>(this);
	if (!MoveToPlayerAction)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create MoveToPlayerAction"));
		return;
	}
	MoveToPlayerAction->EnemyCharacter = this;

	UPlayerNotDetectedCondition* PlayerNotDetected = NewObject<UPlayerNotDetectedCondition>(this);
	if (!PlayerNotDetected)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create PlayerNotDetected"));
		return;
	}
	PlayerNotDetected->EnemyCharacter = this;

	UPatrolAction* PatrolAction = NewObject<UPatrolAction>(this);
	if (!PatrolAction)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create PatrolAction"));
		return;
	}
	PatrolAction->EnemyCharacter = this;

	UFabiansSelector* PatrolConditionSelector = NewObject<UFabiansSelector>(this); //to check whether one of the condition fails. run
	if (!PatrolConditionSelector)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create PatrolConditionSelector "));
		return;
	}

	UNoGunCondition* NoGunCondition = NewObject<UNoGunCondition>(this);
	if (!NoGunCondition)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create NoGunCondition "));
		return;
	}
	NoGunCondition->EnemyCharacter = this;
	UNegateNode* NoGunNegate = NewObject<UNegateNode>(this);
	if (!NoGunNegate)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create NegateNode "));
		return;
	}

	NoGunNegate->AddChild(NoGunCondition);
	UHasGunCondition* HasGunCondition = NewObject<UHasGunCondition>(this);
	if (!HasGunCondition)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create NoGunCondition "));
		return;
	}
	HasGunCondition->EnemyCharacter = this;
	
	PatrolConditionSelector->AddChild(NoGunCondition); //patrol selector
	PatrolConditionSelector->AddChild(PlayerNotDetected);

	// Build sequences
	EvadeSequence->AddChild(HealthCondition);
	EvadeSequence->AddChild(EvadeAction);

	EngageSequence->AddChild(HasGunCondition);
	EngageSequence->AddChild(PlayerDetected);
	EngageSequence->AddChild(MoveToPlayerAction);

	PatrolSequence->AddChild(PatrolConditionSelector); //the patrol action has two conditions that if one is successful
	// we return success. Therefore I used a new selector.
	PatrolSequence->AddChild(PatrolAction);


	Selector->AddChild(EvadeSequence);
	UE_LOG(LogTemp, Error, TEXT("Adding Evade Sequence"));
	Selector->AddChild(EngageSequence);
	UE_LOG(LogTemp, Error, TEXT("Adding Engage Sequence"));
	Selector->AddChild(PatrolSequence);
	UE_LOG(LogTemp, Error, TEXT("Adding Patrol Sequence"));
	// Add selector to root selector
	RootSelector->AddChild(Selector); //selects the selector that needs to be used.
}

void AEnemyCharacter::MoveAlongPath()
{
	// Execute the path. Should be called each tick.

	// If the path is empty do nothing.
	if (CurrentPath.IsEmpty()) return;
	
	// 1. Move towards the current stage of the path.
	//		a. Calculate the direction from the current position to the target of the current stage of the path.
	FVector MovementDirection = CurrentPath[CurrentPath.Num()-1] - GetActorLocation();
	MovementDirection.Normalize();
	//		b. Apply movement in that direction.
	AddMovementInput(MovementDirection);
	// 2. Check if it is close to the current stage of the path then pop it off.
	if (FVector::Distance(GetActorLocation(), CurrentPath[CurrentPath.Num() - 1]) < PathfindingError)
	{
		CurrentPath.Pop();
	}
}
UCoverNodeComponent* AEnemyCharacter::FindNearestCoverNode()
{
	UCoverNodeComponent* NearestCoverNode = nullptr;
	float NearestDistanceSq = FLT_MAX;

	for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AActor* Actor = *ActorItr;
		UCoverNodeComponent* CurrentCoverNode = Actor->FindComponentByClass<UCoverNodeComponent>();
		if (CurrentCoverNode && !CurrentCoverNode->bIsOccupied)
		{
			float DistanceSq = FVector::DistSquared(GetActorLocation(), CurrentCoverNode->GetComponentLocation()); //essentially a maximum pattern 
			if (DistanceSq < NearestDistanceSq) //attempts to find the closest cover node
			{
				NearestDistanceSq = DistanceSq;
				NearestCoverNode = CurrentCoverNode;//maximum pattern finding closest node
			}
		}
	}

	return NearestCoverNode;
}

void AEnemyCharacter::MoveToCover()
{
	UCoverNodeComponent* CoverNode = FindNearestCoverNode();
	if (!CoverNode)
	{
		UE_LOG(LogTemp, Error, TEXT("No available cover nodes"));
		return;
	}

	FVector CoverLocation = CoverNode->GetComponentLocation();

	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetPath(GetActorLocation(), CoverLocation);
	}

	CoverNode->bIsOccupied = true;

	MoveAlongPath();
}

void AEnemyCharacter::TickPatrol()
{
	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetRandomPath(GetActorLocation());
	}
	MoveAlongPath();

	
}

void AEnemyCharacter::TickEngage()
{
	if (!SensedCharacter) return;
	
	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetPath(GetActorLocation(), SensedCharacter->GetActorLocation());
	}
	MoveAlongPath();
	if (HasWeapon())
	{
		if (WeaponComponent->IsMagazineEmpty())
		{
			Reload();
		}
		Fire(SensedCharacter->GetActorLocation());
	}
}



void AEnemyCharacter::TickEvade()
{
	// Find the player and return if it can't find it.
	if (!SensedCharacter) return;

	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetPathAway(GetActorLocation(), SensedCharacter->GetActorLocation());
	}
	MoveAlongPath();
}

void AEnemyCharacter::TickFindWeapon()
{
    // Log each condition separately to verify where it might be exiting.

    if (!PickupManagerSubsystem)
    {
        UE_LOG(LogTemp, Warning, TEXT("PickupManagerSubsystem is null, exiting TickFindWeapon"));
        return;
    }

    if (!PathfindingSubsystem)
    {
        UE_LOG(LogTemp, Warning, TEXT("PathfindingSubsystem is null, exiting TickFindWeapon"));
        return;
    }

    if (PickupManagerSubsystem->WeaponSpawns.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No WeaponSpawns found, exiting TickFindWeapon"));
        return;
    }

    ANavigationNode* NearestNode = nullptr;
    UE_LOG(LogTemp, Display, TEXT("Starting search for nearest weapon spawn node"));

    for (const FVector& WeaponSpawn : PickupManagerSubsystem->WeaponSpawns)
    {
        if (WeaponSpawn == FVector::ZeroVector)
        {
            UE_LOG(LogTemp, Warning, TEXT("Skipping uninitialized WeaponSpawn"));
            continue;
        }

        ANavigationNode* Node = PathfindingSubsystem->FindNearestNode(WeaponSpawn);
        if (Node)
        {
            NearestNode = PathfindingSubsystem->MinDistNode(NearestNode, Node, GetActorLocation());
            UE_LOG(LogTemp, Display, TEXT("Updating NearestNode to a closer node"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FindNearestNode returned nullptr for WeaponSpawn at %s"), *WeaponSpawn.ToString());
        }
    }
    if (CurrentPath.IsEmpty())
    {
        CurrentPath = PathfindingSubsystem->GetPath(PathfindingSubsystem->FindNearestNode(GetActorLocation()), NearestNode);
        UE_LOG(LogTemp, Display, TEXT("CurrentPath updated with path to nearest weapon node"));
    }
    MoveAlongPath();
}

void AEnemyCharacter::OnSensedPawn(APawn* SensedActor)
{
	if (APlayerCharacter* Player = Cast<APlayerCharacter>(SensedActor))
	{
		SensedCharacter = Player;
		//UE_LOG(LogTemp, Display, TEXT("Sensed Player"))
	}
}

void AEnemyCharacter::UpdateSight()
{
	if (!SensedCharacter) return;
	if (PawnSensingComponent)
	{
		if (!PawnSensingComponent->HasLineOfSightTo(SensedCharacter))
		{
			SensedCharacter = nullptr;
			//UE_LOG(LogTemp, Display, TEXT("Lost Player"))
		}
	}
}


// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// DO NOTHING UNLESS IT IS ON THE SERVER
	if (GetLocalRole() != ROLE_Authority) return;
	
	UpdateSight();

	if (BehaviourTreeRoot)
	{
		BehaviourTreeRoot->Tick();
	}
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

APlayerCharacter* AEnemyCharacter::FindPlayer() const
{
	APlayerCharacter* Player = nullptr;
	for (TActorIterator<APlayerCharacter> It(GetWorld()); It; ++It)
	{
		Player = *It;
		break;
	}
	if (!Player)
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to find the Player Character in the world."))
	}
	return Player;
}

