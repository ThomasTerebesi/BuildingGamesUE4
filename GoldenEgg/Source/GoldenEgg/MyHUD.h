// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "Kismet/GameplayStatics.h"
#include "Avatar.h"
#include "MyHUD.generated.h"


struct Message
{
	FString message;
	float time;
	FColor color;
	UTexture2D* tex;
	
	Message()
	{
		time = 5.0f;
		color = FColor::White;
		tex = nullptr;
	}

	Message(FString iMessage, float iTime, FColor iColor, UTexture2D* iTexture)
	{
		message = iMessage;
		time = iTime;
		color = iColor;
		tex = iTexture;
	}
};


/**
 * 
 */
UCLASS()
class GOLDENEGG_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
		UFont* hudFont;

	TArray<Message> messages;

	virtual void DrawHUD() override;
	void DrawMessages();
	void AddMessage(Message msg);
	void DrawHealthBar();

protected:
	virtual void BeginPlay() override;

private:
	int32 sizeX;
	bool doOnce = false;
};
