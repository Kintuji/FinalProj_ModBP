// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthWidget.h"

void UHealthWidget::NativeConstruct()
{
    UUserWidget::NativeConstruct();
}

void UHealthWidget::SetHealth(float newValue)
{
    if (!IsValid(HealthProgressBar)) return;
    
    HealthProgressBar->SetPercent(newValue);
}

void UHealthWidget::SetHealthText(FText newText)
{
    if (!IsValid(HealthTextBlock)) return;

    HealthTextBlock->SetText(newText);
}


