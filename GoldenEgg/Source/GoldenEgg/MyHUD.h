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


struct Icon
{
	FString name;
	UTexture2D* tex;

	Icon()
	{
		name = "UNKNOWN ICON"; tex = nullptr;
	}

	Icon(FString& iName, UTexture2D* iTex)
	{
		name = iName;
		tex = iTex;
	}
};


struct Widget
{
	Icon icon;
	FVector2D pos, size;

	Widget(Icon iIcon)
	{
		icon = iIcon;
	}

	float left() { return pos.X; }
	float right() { return pos.X + size.X; }
	float top() { return pos.Y; }
	float bottom() { return pos.Y + size.Y; }

	bool hit(FVector2D p)
	{
		return p.X > left() && p.X < right() && p.Y > top() && p.Y < bottom();
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

	TArray<Widget> widgets;

	FVector2D dimensions;

	Widget* heldWidget;

	virtual void DrawHUD() override;
	void DrawMessages();
	void AddMessage(Message msg);
	void DrawHealthBar();
	void DrawWidgets();

	void ClearWidgets();
	void AddWidget(Widget widget);

	void MouseClicked();
	void MouseMoved();

protected:
	virtual void BeginPlay() override;

private:
	int32 sizeX;
	bool doOnce = false;
};
