// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuPlayerController.h"
#include "Widgets/MenuWidgetSwitch.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

void AMenuPlayerController::BeginPlay()
{
	if (MenuSwitch) {
		MenuSwitchInst = CreateWidget<UMenuWidgetSwitch>(GetWorld(), MenuSwitch);
		MenuSwitchInst->AddToViewport();
		UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(this);
		WidgetSwitcherInst = MenuSwitchInst->WidgetSwitcher;
	}
}