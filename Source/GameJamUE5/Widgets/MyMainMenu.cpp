// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMainMenu.h"
#include "Components/Button.h"

void UMyMainMenu::NativeConstruct()
{
	if (BTN_Cosmetics) {
		BTN_Cosmetics->OnClicked.AddDynamic(this, &UMyMainMenu::onCosmeticsClicked);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("UMyMainMenu::NativeConstruct No cosmetic button bound"));
	}
}

void UMyMainMenu::onCosmeticsClicked()
{

}
