// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidgetSwitch.generated.h"

/**
 * 
 */
class UWidgetSwitcher;

UCLASS()
class GAMEJAMUE5_API UMenuWidgetSwitch : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UWidgetSwitcher* WidgetSwitcher;
};
