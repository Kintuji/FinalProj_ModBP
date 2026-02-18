// Fill out your copyright notice in the Description page of Project Settings.


#include "WineComponent.h"

// Sets default values for this component's properties
UWineComponent::UWineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UWineComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	const float DecayRate = 1.f;

    if (CurrentDrunkenness > 0)
    {
        CurrentDrunkenness -= DecayRate * DeltaTime;
        CurrentDrunkenness = FMath::Clamp(CurrentDrunkenness, 0.f, 100.f);
    }
}

void UWineComponent::AddDrunkenness()
{
	const float maxDrunkenness = 100;
	const float drunkennessPerWine = 15;	

	CurrentDrunkenness += drunkennessPerWine;
	CurrentDrunkenness = FMath::Clamp(CurrentDrunkenness, 0, maxDrunkenness);
}
