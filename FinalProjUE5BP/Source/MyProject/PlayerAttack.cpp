// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAttack.h"

#include "Damageable.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"


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

void UPlayerAttack::Raycast(UClass* DetectableCharacterClass)
{
	if (!GetWorld()) return;

	FVector Start = GetOwner()->GetActorLocation();
	FVector Forward = GetOwner()->GetActorForwardVector();
	float Distance = 1000.f;
	Start = Start + Forward * 50;

	FVector End = Start + (Forward * Distance);

	FHitResult Hit;

	bool bActorHit = GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		ECC_Pawn
	);

	// Draw full straight line
	DrawDebugLine(GetWorld(), Start, End, FColor::Purple, false, 1.f, 0, 2.f);

	if (bActorHit && Hit.GetActor())
	{
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, Hit.GetActor()->GetName());

		if (IsValid(DetectableCharacterClass) && Hit.GetActor()->IsA(DetectableCharacterClass))
		{
			AActor* EnemyActor = Hit.GetActor();

			if (EnemyActor->Implements<UDamageable>())
			
			OnAttackTriggered.BindUFunction(this, FName("Raycast"));
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("Enemy Detected"));
		}
	}
}




