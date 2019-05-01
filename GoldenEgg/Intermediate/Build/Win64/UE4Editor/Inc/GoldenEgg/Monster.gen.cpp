// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoldenEgg/Monster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster() {}
// Cross Module References
	GOLDENEGG_API UClass* Z_Construct_UClass_AMonster_NoRegister();
	GOLDENEGG_API UClass* Z_Construct_UClass_AMonster();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GoldenEgg();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void AMonster::StaticRegisterNativesAMonster()
	{
	}
	UClass* Z_Construct_UClass_AMonster_NoRegister()
	{
		return AMonster::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRangeSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackRangeSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastStrike_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastStrike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseAttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPLoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BPLoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Experience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GoldenEgg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Monster.h" },
		{ "ModuleRelativePath", "Monster.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_AttackRangeSphere_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_AttackRangeSphere = { UE4CodeGen_Private::EPropertyClass::Object, "AttackRangeSphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AMonster, AttackRangeSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_AttackRangeSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_AttackRangeSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_SightSphere_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_SightSphere = { UE4CodeGen_Private::EPropertyClass::Object, "SightSphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AMonster, SightSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_SightSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_SightSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_TimeSinceLastStrike_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_TimeSinceLastStrike = { UE4CodeGen_Private::EPropertyClass::Float, "TimeSinceLastStrike", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMonster, TimeSinceLastStrike), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_TimeSinceLastStrike_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_TimeSinceLastStrike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_AttackTimeout_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_AttackTimeout = { UE4CodeGen_Private::EPropertyClass::Float, "AttackTimeout", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMonster, AttackTimeout), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_AttackTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_AttackTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_BaseAttackDamage_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_BaseAttackDamage = { UE4CodeGen_Private::EPropertyClass::Float, "BaseAttackDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMonster, BaseAttackDamage), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_BaseAttackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_BaseAttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_BPLoot_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_BPLoot = { UE4CodeGen_Private::EPropertyClass::Class, "BPLoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMonster, BPLoot), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_BPLoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_BPLoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_Experience_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_Experience = { UE4CodeGen_Private::EPropertyClass::Int, "Experience", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMonster, Experience), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_Experience_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_Experience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_HitPoints_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_HitPoints = { UE4CodeGen_Private::EPropertyClass::Float, "HitPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMonster, HitPoints), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_HitPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_HitPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Monster Properties" },
		{ "ModuleRelativePath", "Monster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMonster, Speed), METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_AttackRangeSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_SightSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_TimeSinceLastStrike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_AttackTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_BaseAttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_BPLoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_Experience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_HitPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_Statics::ClassParams = {
		&AMonster::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMonster_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster, 4220841740);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster(Z_Construct_UClass_AMonster, &AMonster::StaticClass, TEXT("/Script/GoldenEgg"), TEXT("AMonster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
