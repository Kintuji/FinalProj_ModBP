// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAttack.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Runtime/AIModule/Classes/AIController.h"

// Sets default values for this component's properties
UPlayerAttack::UPlayerAttack()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerAttack::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerAttack::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerAttack::Raycast()
{
	FVector start = GetOwner()->GetActorLocation();
	FVector forward = GetOwner()->GetActorForwardVector();
	//start = FVector(start.X + (forward.X * 50), start.Y + (forward.Y * 50), start.Z + (forward.Z * 50));	
	FVector end = start + 50;
	
	FHitResult hit;

	//FVector rotation = VectorNormalizeQuaternion(forward.Equals());
	
	if (GetWorld())
	{
		bool actorHit = GetWorld()->LineTraceSingleByChannel(hit, start, end,ECC_Pawn, FCollisionQueryParams(),FCollisionResponseParams());
		DrawDebugLine(GetWorld(), start, hit.Location, FColor(255, 0, 255), false, 1, 0, 1);

		if (actorHit && hit.GetActor())
		{
			GEngine->AddOnScreenDebugMessage(-1,2,FColor::Red,hit.GetActor()->GetName());
		}
	}
}

