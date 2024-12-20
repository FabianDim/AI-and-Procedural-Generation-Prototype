#include "EnemySpawner.h"
#include "Engine/World.h"
#include "Characters/EnemyCharacter.h" // Include your enemy character header
#include "TimerManager.h"
#include "AIController.h" // Include AIController

// Sets default values
AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = false; // We don't need to tick every frame for spawning
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

	// Start the timer to spawn enemies at intervals
	if (SpawnInterval > 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AEnemySpawner::SpawnEnemy, SpawnInterval, true);
	}
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemySpawner::SpawnEnemy()
{
	// Check for the number of currently active enemies
	TArray<AActor*> ActiveEnemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), EnemyCharacterClass, ActiveEnemies);

	if (ActiveEnemies.Num() >= MaxActiveEnemies)
	{
		return; // Don't spawn more if we hit the limit
	}

	if (EnemyCharacterClass)
	{
		FVector SpawnLocation = GetActorLocation(); // Spawn at the spawner's location
		FRotator SpawnRotation = FRotator::ZeroRotator; // Use a default rotation

		// Spawn the enemy character
		AEnemyCharacter* SpawnedEnemy = GetWorld()->SpawnActor<AEnemyCharacter>(EnemyCharacterClass, SpawnLocation, SpawnRotation);
		if (SpawnedEnemy)
		{
			// Ensure the enemy has an AI controller
			if (!SpawnedEnemy->GetController())
			{
				SpawnedEnemy->SpawnDefaultController();
			}
		}
	}
}
