// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "HealthWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UHealthWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Health", meta = (BindWidget))
	TObjectPtr<UProgressBar> HealthProgressBar;
	//UProgressBar* HealthProgressBar = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> HealthTextBlock;

	UFUNCTION(BlueprintCallable)
	void SetHealth(float newValue);

	UFUNCTION(BlueprintCallable)
	void SetHealthText(FText newText);
	
};
