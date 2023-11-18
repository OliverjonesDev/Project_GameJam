// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActivitySubsystem.generated.h"

/**
 * 
 */

UENUM()
enum EActivityList {

	Platformer,
	Dancing

};





UCLASS()
class GAMEJAMUE5_API UActivitySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	

public:
	EActivityList CurrentActivity;

	UFUNCTION()
	void OpenCurrentActivityLevel();

};
