// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoldenEgg/GoldenEggGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoldenEggGameModeBase() {}
// Cross Module References
	GOLDENEGG_API UClass* Z_Construct_UClass_AGoldenEggGameModeBase_NoRegister();
	GOLDENEGG_API UClass* Z_Construct_UClass_AGoldenEggGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GoldenEgg();
// End Cross Module References
	void AGoldenEggGameModeBase::StaticRegisterNativesAGoldenEggGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGoldenEggGameModeBase_NoRegister()
	{
		return AGoldenEggGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGoldenEggGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoldenEggGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoldenEgg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoldenEggGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GoldenEggGameModeBase.h" },
		{ "ModuleRelativePath", "GoldenEggGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoldenEggGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoldenEggGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoldenEggGameModeBase_Statics::ClassParams = {
		&AGoldenEggGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGoldenEggGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGoldenEggGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoldenEggGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoldenEggGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoldenEggGameModeBase, 3739610148);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoldenEggGameModeBase(Z_Construct_UClass_AGoldenEggGameModeBase, &AGoldenEggGameModeBase::StaticClass, TEXT("/Script/GoldenEgg"), TEXT("AGoldenEggGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoldenEggGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
