// Fill out your copyright notice in the Description page of Project Settings.


#include "TrackerSpawn.h"

//Includes Internal
#include "Tracker_Character.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATrackerSpawn::ATrackerSpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATrackerSpawn::BeginPlay()
{
	Super::BeginPlay();

	FVector SpawnLocation = GetActorLocation();
	if (SubTracker) //Flag: does a spawner exist
	{
		GetActorBounds(true, SpawnOrigin, SpawnLim); //Get bounds of actor = box

		for (int i = 0; i < NumTrackers; i++) //Iterate over spawn objects in spawn array
		{
			SpawnLocation = UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnLim); //Set spawn as random points inside box
			TObjectPtr<ATracker_Character> tracker = Cast<ATracker_Character>(GetWorld()->SpawnActor(SubTracker, &SpawnLocation)); //Retrieve single  spawned object
			tracker->SetSpeed(FMath::RandRange(MinSpeed, MaxSpeed)); //Set random speed
			tracker->spawner = this; // Get pointer reference
		}
	}
}

// Called every frame
void ATrackerSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

