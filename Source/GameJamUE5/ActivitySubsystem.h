// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Widgets/MyMainMenu.h"
#include "ActivitySubsystem.generated.h"

/**
 * 
 */


UCLASS()
class GAMEJAMUE5_API UActivitySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	

public:
	FString CurrentActivity;

	UFUNCTION()
	void OpenCurrentActivityLevel();

	FActivityData CurrentActivityData;
};
