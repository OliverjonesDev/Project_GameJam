// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActivityButton.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UMyActivityButton::NativeConstruct()
{
	BTN_Activity->OnClicked.AddDynamic(this, &UMyActivityButton::onActivityClicked);
}

void UMyActivityButton::onActivityClicked()
{
	//GetGameInstance()->GetSubsystem<UActivitySubsystem>()->CurrentActivity = SpecificActivity;

	UGameplayStatics::OpenLevelBySoftObjectPtr(GetWorld(), ActivityLevel);
}
