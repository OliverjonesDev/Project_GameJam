// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMainMenu.h"
#include "Components/Button.h"
#include "../MenuPlayerController.h"

void UMyMainMenu::NativeConstruct()
{
	if (BTN_Cosmetics) {
		BTN_Cosmetics->OnClicked.AddDynamic(this, &UMyMainMenu::onCosmeticsClicked);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("UMyMainMenu::NativeConstruct No cosmetic button bound"));
	}

	if (BTN_Friends) {
		BTN_Friends->OnClicked.AddDynamic(this, &UMyMainMenu::onFriendsClicked);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("UMyMainMenu::NativeConstruct No cosmetic button bound"));
	}
}

void UMyMainMenu::onCosmeticsClicked()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController()) {
		AMenuPlayerController* MenuPlayerController = Cast<AMenuPlayerController>(PlayerController);
		if (MenuPlayerController) {
			MenuPlayerController->SetWidgetIndex(CostmeticsIndex);
		}
	}
}

void UMyMainMenu::onFriendsClicked()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController()) {
		AMenuPlayerController* MenuPlayerController = Cast<AMenuPlayerController>(PlayerController);
		if (MenuPlayerController) {
			MenuPlayerController->SetWidgetIndex(FriendsIndex);
		}
	}
}
