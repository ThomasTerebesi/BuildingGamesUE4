// Fill out your copyright notice in the Description page of Project Settings.

#include "MyHUD.h"

void AMyHUD::DrawHUD()
{
	// call superclass DrawHUD() function first
	Super::DrawHUD();

	// Then proceed to draw your own stuff.
	// We can draw text:
	const FVector2D VIEWPORT_SIZE = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());
	const FString message("Greetings from Unreal!");
	
	float messageWidth = 0.0f;
	float messageHeight = 0.0f;
	
	GetTextSize(message, messageWidth, messageHeight, hudFont);
	
	DrawText(message, FLinearColor::White, (VIEWPORT_SIZE.X - messageWidth) / 2, (VIEWPORT_SIZE.Y - messageHeight) / 2, hudFont);

	// We can draw lines:
	DrawLine(0.0f, 0.0f, VIEWPORT_SIZE.X, VIEWPORT_SIZE.Y, FLinearColor::Red);
}
