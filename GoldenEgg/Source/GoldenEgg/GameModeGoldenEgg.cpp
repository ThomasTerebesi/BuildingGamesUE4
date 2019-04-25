// Fill out your copyright notice in the Description page of Project Settings.

#include "GameModeGoldenEgg.h"

AGameModeGoldenEgg::AGameModeGoldenEgg()
{
	if (GEngine)
	{
		TArray<int> testArray;

		testArray.Add(1);
		testArray.Add(10);
		testArray.Add(4);
		testArray.Add(20);

		testArray.Insert(9, 0);
		testArray.Insert(30, 2);

		for (int i = 0; i < testArray.Num(); i++)
		{
			GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::Red, FString::FromInt(testArray[i]));
		}

		//for (TArray<int>::TIterator iter = testArray.CreateIterator(); iter; ++iter)
		//{
		//	GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::Red, FString::FromInt(*iter));
		//}

		GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::Red, TEXT("Hello!"));

		int found = testArray.Find(20);

		GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::Emerald, FString::FromInt(found));


		TSet<float> testSet;

		testSet.Add(1.2f);
		testSet.Add(4.9f);
		testSet.Add(7.1f);
		testSet.Add(3.3f);
		testSet.Add(4.9f);	// Should not be stored separately, as the value already was stored once before.

		for (TSet<float>::TIterator iter = testSet.CreateIterator(); iter; ++iter)
		{
			GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::Magenta, FString::SanitizeFloat(*iter));
		}


		TSet<int> aSet;
		aSet.Add(1);
		aSet.Add(2);
		aSet.Add(3);

		TSet<int> bSet;
		bSet.Add(2);
		bSet.Add(4);
		bSet.Add(3);

		TSet<int> intersectAandB = aSet.Intersect(bSet);

		for (TSet<int>::TIterator iter = intersectAandB.CreateIterator(); iter; ++iter)
		{
			GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::White, FString::FromInt(*iter));
		}

		
		TSet<int> unionAandB = aSet.Union(bSet);

		for (TSet<int>::TIterator iter = unionAandB.CreateIterator(); iter; ++iter)
		{
			GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::Yellow, FString::FromInt(*iter));
		}

		int* foundInSet = unionAandB.Find(3);

		GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::Cyan, FString::FromInt(*foundInSet));


		TMap<FString, int> items;
		items.Add("Apples", 4);
		items.Add("Donuts", 12);
		items.Add("Swords", 1);
		items.Add("Shields", 2);

		for (TMap<FString, int>::TIterator iter = items.CreateIterator(); iter; ++iter)
		{
			GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::Orange, iter->Key + FString(": ") + FString::FromInt(iter->Value));
		}
	}
}
