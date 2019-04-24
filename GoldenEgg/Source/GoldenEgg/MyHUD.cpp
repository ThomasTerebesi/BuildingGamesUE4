// Fill out your copyright notice in the Description page of Project Settings.

#include "MyHUD.h"

void AMyHUD::DrawHUD()
{
	// call superclass DrawHUD() function first
	Super::DrawHUD();

	sizeX = Canvas->SizeX;
	
	DrawMessages();
}

void AMyHUD::DrawMessages()
{
	// Iterate from back to front through the list, so if we remove
	// an item while iterating, there won't be any problems.
	for (int c = messages.Num() - 1; c >= 0; c--)
	{
		// Draw the background box the right size for the message.
		float outputWidth, outputHeight, pad = 10.0f;
		GetTextSize(messages[c].message, outputWidth, outputHeight, hudFont, 1.0f);

		float messageH = outputHeight + 2.0f * pad;
		float x = 0.0f, y = c * messageH;

		// Black background.
		DrawRect(FLinearColor::Black, x, y, sizeX, messageH);

		// Draw our message using the 'hudFont'.
		DrawText(messages[c].message, messages[c].color, x + pad, y + pad, hudFont);

		// Reduce lifetime by the time that passed since last frame.
		messages[c].time -= GetWorld()->GetDeltaSeconds();

		// If the message's time is up, remove it.
		if (messages[c].time < 0)
		{
			messages.RemoveAt(c);
		}
	}
}

void AMyHUD::AddMessage(Message msg)
{
	messages.Add(msg);
}

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	Message testMsg("Printing to the HUD...", 12.0f, FColor::White);
	AddMessage(testMsg);
}

