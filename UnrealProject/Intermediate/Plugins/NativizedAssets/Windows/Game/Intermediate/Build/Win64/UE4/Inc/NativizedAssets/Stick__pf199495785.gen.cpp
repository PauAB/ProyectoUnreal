// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Stick__pf199495785.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStick__pf199495785() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AStick_C__pf199495785_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AStick_C__pf199495785();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_C__pf199495785();
// End Cross Module References
	void AStick_C__pf199495785::StaticRegisterNativesAStick_C__pf199495785()
	{
	}
	UClass* Z_Construct_UClass_AStick_C__pf199495785_NoRegister()
	{
		return AStick_C__pf199495785::StaticClass();
	}
	struct Z_Construct_UClass_AStick_C__pf199495785_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStick_C__pf199495785_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem_C__pf199495785,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStick_C__pf199495785_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Stick__pf199495785.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Stick__pf199495785.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Stick_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Stick.Stick_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStick_C__pf199495785_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStick_C__pf199495785>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStick_C__pf199495785_Statics::ClassParams = {
		&AStick_C__pf199495785::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AStick_C__pf199495785_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStick_C__pf199495785_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStick_C__pf199495785()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Stick"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Stick_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStick_C__pf199495785_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AStick_C__pf199495785, TEXT("Stick_C"), 2345709598);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AStick_C__pf199495785>()
	{
		return AStick_C__pf199495785::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStick_C__pf199495785(Z_Construct_UClass_AStick_C__pf199495785, &AStick_C__pf199495785::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Stick"), TEXT("Stick_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Stick"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Stick.Stick_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStick_C__pf199495785);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
