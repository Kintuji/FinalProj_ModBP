// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "W_Health.generated.h"
/**
 * 
 */
UCLASS()
class MYPROJECT_API UW_Health : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(editAnywhere,BlueprintReadWrite, Category = "Health", meta = (BindWidget))
	TObjectPtr<UProgressBar> HealthProgressBar;
	//UProgressBar* HealthProgressBar = nullptr;
};

