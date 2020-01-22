// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Cube__pf199495785.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCube__pf199495785() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ACube_C__pf199495785_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ACube_C__pf199495785();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_C__pf199495785();
// End Cross Module References
	void ACube_C__pf199495785::StaticRegisterNativesACube_C__pf199495785()
	{
	}
	UClass* Z_Construct_UClass_ACube_C__pf199495785_NoRegister()
	{
		return ACube_C__pf199495785::StaticClass();
	}
	struct Z_Construct_UClass_ACube_C__pf199495785_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACube_C__pf199495785_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem_C__pf199495785,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_C__pf199495785_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Cube__pf199495785.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cube__pf199495785.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Cube_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Cube.Cube_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACube_C__pf199495785_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACube_C__pf199495785>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACube_C__pf199495785_Statics::ClassParams = {
		&ACube_C__pf199495785::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACube_C__pf199495785_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACube_C__pf199495785_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACube_C__pf199495785()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Cube"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Cube_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACube_C__pf199495785_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ACube_C__pf199495785, TEXT("Cube_C"), 2367633900);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ACube_C__pf199495785>()
	{
		return ACube_C__pf199495785::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACube_C__pf199495785(Z_Construct_UClass_ACube_C__pf199495785, &ACube_C__pf199495785::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Cube"), TEXT("Cube_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Cube"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Cube.Cube_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACube_C__pf199495785);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
