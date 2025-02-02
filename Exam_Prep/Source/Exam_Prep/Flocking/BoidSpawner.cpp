// Fill out your copyright notice in the Description page of Project Settings.


#include "BoidSpawner.h"

//Includes Internal
#include "BoidCharacter.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ABoidSpawner::ABoidSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABoidSpawner::BeginPlay()
{
	Super::BeginPlay();

	FVector SpawnLocation = GetActorLocation();
	if (SubBoid) //Flag: does a spawner exist
	{
		GetActorBounds(true, SpawnOrigin, SwimLimits); //Get bounds of actor = box

		for (int i = 0; i < NumBoids; i++) //Iterate over spawn objects in spawn array
		{
			SpawnLocation = UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SwimLimits); //Set spawn as random points inside box
			TObjectPtr<ABoidCharacter> boid = Cast<ABoidCharacter>(GetWorld()->SpawnActor(SubBoid, &SpawnLocation)); //Retrieve single  spawned object
			boid->SetSpeed(FMath::RandRange(MinSpeed, MaxSpeed)); //Set random speed
			boid->spawner = this; // Get pointer reference
		}
	}
}

// Called every frame
void ABoidSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

