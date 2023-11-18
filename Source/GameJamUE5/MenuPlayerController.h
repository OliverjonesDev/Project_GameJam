// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MenuPlayerController.generated.h"

/**
 * 
 */

class UMenuWidgetSwitch;
class UWidgetSwitcher;

UCLASS()
class GAMEJAMUE5_API AMenuPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> MenuSwitch;

	UPROPERTY()
	UMenuWidgetSwitch* MenuSwitchInst;

	UPROPERTY()
	UWidgetSwitcher* WidgetSwitcherInst;

	UFUNCTION()
	void SetWidgetIndex(int Index);
};

