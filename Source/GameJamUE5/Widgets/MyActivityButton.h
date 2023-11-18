// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyActivityButton.generated.h"

/**
 * 
 */

class UButton;

UCLASS()
class GAMEJAMUE5_API UMyActivityButton : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UButton* BTN_Activity;

	virtual void NativeConstruct() override;

	UFUNCTION()
	void onActivityClicked();
};
