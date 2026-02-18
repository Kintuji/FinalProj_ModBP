// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerAttack.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UPlayerAttack : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerAttack();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	DECLARE_DYNAMIC_DELEGATE(FOnAttackTriggeredSignature);
	

	UPROPERTY(EditAnywhere)
	FOnAttackTriggeredSignature OnAttackTriggered;
	
	UFUNCTION(BlueprintCallable)
	void Raycast(UClass* DetectableCharacterClass);

	void FireEffects();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FireVFX;

private:
	
};
