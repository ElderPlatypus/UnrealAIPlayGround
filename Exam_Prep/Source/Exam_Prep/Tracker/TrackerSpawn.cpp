// Fill out your copyright notice in the Description page of Project Settings.


#include "TrackerSpawn.h"

//Includes Internal
#include "Tracker_Character.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

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
    Spawn();
}

// Called every frame
void ATrackerSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    Follow(DeltaTime);
    Turning(DeltaTime);

}

void ATrackerSpawn::Spawn()
{

    TObjectPtr<UWorld> World = GetWorld();

    if (!World || !TrackerToSpawn) return;

    for (int i = 0; i < NumTrackers; i++)
    {
        FVector RandomOffset = FVector(
            FMath::RandRange(-SpawnOffset.X, SpawnOffset.X),
            FMath::RandRange(-SpawnOffset.Y, SpawnOffset.Y),
            0.f
        );

        //FVector SpawnLocation = SpawnOrigin + RandomOffset;
        FVector SpawnLocation = GetActorLocation() + SpawnOffset;
        FRotator SpawnRotation = FRotator::ZeroRotator;

        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;

        TObjectPtr<AActor> SpawnedActor = World->SpawnActor<AActor>(TrackerToSpawn, SpawnLocation, SpawnRotation, SpawnParams);

        if (SpawnedActor)
        {
            TrackerSpawn.Add(SpawnedActor);
            UE_LOG(LogTemp, Warning, TEXT("Spawned Actor: %s"), *SpawnedActor->GetName());
        }
       
    }
}

void ATrackerSpawn::Follow(float _deltaTime)
{

    if (!Tracker)  // Check if casting failed
    {
    	// Find the first available Tracker in the world
        TArray<AActor*> FoundActors;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATracker_Character::StaticClass(), FoundActors);

        if (FoundActors.Num() > 0)
        {
            Tracker = Cast<ATracker_Character>(FoundActors[0]);
            UE_LOG(LogTemp, Warning, TEXT("Tracker found: %s"), *Tracker->GetName());
        }
    }

    if (Tracker->isFollowing)
    {
        //isFollowing = false;
        // Move forward
        for (const auto& spawn : TrackerSpawn)
        {

            if (!spawn) continue;

            FVector direction = Tracker->GetActorLocation() - spawn->GetActorLocation();
            direction.Normalize();
            float distance = direction.Size();

            if (distance < 10.f)
            {
                FVector OrbitOffset = FVector(0, 50.f, 0).RotateAngleAxis(FMath::RandRange(0.f, 360.f), FVector::UpVector);
                direction = (Tracker->GetActorLocation() + OrbitOffset - spawn->GetActorLocation()).GetSafeNormal();
            }

            UKismetSystemLibrary::DrawDebugArrow(GetWorld(), GetActorLocation(), direction, 2.f, FLinearColor::Black, 1.0f, 2);
            UE_LOG(LogTemp, Error, TEXT("Direction: %s"), *direction.ToString());

        	spawn->AddActorWorldOffset(direction * Speed * _deltaTime, true);
            FQuat rotateWhileTurning = FQuat::Slerp(GetActorRotation().Quaternion(), Tracker->LookAt(direction, GetActorUpVector()), 0.01f);
            SetActorRotation(rotateWhileTurning);
        }

    }
}

void ATrackerSpawn::Turning(float _deltaTime)
{
    if (!Tracker)  // Check if casting failed
    {
        UE_LOG(LogTemp, Error, TEXT("Follow: Tracker is null! Check casting logic."));
        return;
    }

    // Check if out of bounds
    if (!UKismetMathLibrary::IsPointInBox(GetActorLocation(), SpawnOrigin, SpawnOffset))
    {
        Tracker->isTurning = true;
    }

    // Turning logic
    if (Tracker->isTurning)
    {
        Tracker->isTurning = false;
        for (const auto& spawn : TrackerSpawn)
        {
            FVector direction = spawn->GetActorLocation() - GetActorLocation();
            FQuat rotateWhileTurning = FQuat::Slerp(GetActorRotation().Quaternion(), Tracker->LookAt(direction, GetActorUpVector()), 0.01f);
            SetActorRotation(rotateWhileTurning);
        }

    }
}

