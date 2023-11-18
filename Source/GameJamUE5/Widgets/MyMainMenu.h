// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyMainMenu.generated.h"

/**
 * 
 */

class UButton;

USTRUCT()
struct GAMEJAMUE5_API FActivityData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* Texture;

	UPROPERTY(EditDefaultsOnly)
	FString ActivityName;

	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UWorld> ActivityLevel;
};

UCLASS()
class GAMEJAMUE5_API UMyMainMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))
	UButton* BTN_Cosmetics;

	virtual void NativeConstruct() override;

	UFUNCTION()
	void onCosmeticsClicked();

	TArray<FActivityData> ActivityList;

	UPROPERTY(meta = (BindWidget))
	UButton* BTN_Friends;

	UFUNCTION()
	void onFriendsClicked();

	UPROPERTY(EditAnywhere, Category = "WidgetIndex")
	int CostmeticsIndex = 0;

	UPROPERTY(EditAnywhere, Category = "WidgetIndex")
	int FriendsIndex = 0;
};


