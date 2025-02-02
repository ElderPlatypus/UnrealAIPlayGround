// Fill out your copyright notice in the Description page of Project Settings.


#include "BoidCharacter.h"

//Includes Internal
#include "Kismet/KismetMathLibrary.h"

//Includes
#include "BoidSpawner.h"


// Sets default values
ABoidCharacter::ABoidCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoidCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoidCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//World Offset
	AddActorWorldOffset(GetActorForwardVector() * GetSpeed() * DeltaTime);

	//Box Bound
	if (UKismetMathLibrary::IsPointInBox(GetActorLocation(), spawner->SpawnOrigin, spawner->SwimLimits)) //Flag: check if ActorLocation is within bounds of box. Extent is (BoxOrigin - BoxExtent, BoxOrigin + BoxExtent)
	{
		AddActorWorldOffset(GetActorForwardVector() * GetSpeed() * DeltaTime);
	}
	else //Turn if outside or at box extent.
	{
		isTurning = true;
	}

	//Turning Logic
	if (isTurning)
	{
		isTurning = false;
		FVector direction = spawner->GetActorLocation() - GetActorLocation();
		FQuat rotateWhileTurning = FQuat::Slerp(GetActorRotation().Quaternion(), LookAt(direction, GetActorUpVector()),0.01f);
		SetActorRotation(rotateWhileTurning);
	}
	else
	{
		//10% Chance of randomized speed
		if (FMath::RandRange(0, 100) < 10)
		{
			speedControl = speedControl + FMath::RandRange(20, 100);
		}
	}
}

// Called to bind functionality to input
void ABoidCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//_____________Speed_____________
float ABoidCharacter::GetSpeed() const
{
	return speedControl;
}

void ABoidCharacter::SetSpeed(float newSpeed)
{
	speedControl = newSpeed;
}

FQuat ABoidCharacter::LookAt(const FVector& lookAt, const FVector& upDirection)
{

	return FRotationMatrix::MakeFromXZ(lookAt, upDirection).ToQuat();
}
