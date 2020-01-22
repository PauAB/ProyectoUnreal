// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ItemStruct__pf697489738.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemStruct__pf697489738() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct__pf697489738();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FItemStruct__pf697489738::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("ItemStruct")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FItemStruct__pf697489738_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStruct__pf697489738, StructPackage, TEXT("ItemStruct"), sizeof(FItemStruct__pf697489738), Get_Z_Construct_UScriptStruct_FItemStruct__pf697489738_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FItemStruct__pf697489738>()
{
	return FItemStruct__pf697489738::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemStruct__pf697489738(FItemStruct__pf697489738::StaticStruct, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct"), TEXT("ItemStruct"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct.ItemStruct"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFItemStruct__pf697489738
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFItemStruct__pf697489738()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemStruct")),new UScriptStruct::TCppStructOps<FItemStruct__pf697489738>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFItemStruct__pf697489738;
	struct Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf_MetaData[];
#endif
		static void NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf_MetaData[];
#endif
		static void NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemStruct__pf697489738.h" },
		{ "OverrideNativeName", "ItemStruct" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct.ItemStruct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStruct__pf697489738>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf_MetaData[] = {
		{ "Category", "ItemStruct__pf697489738" },
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Public/ItemStruct__pf697489738.h" },
		{ "OverrideNativeName", "Class_12_33456D674F08300E4B2C238A1C0A44C6" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf = { "Class_12_33456D674F08300E4B2C238A1C0A44C6", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FItemStruct__pf697489738, bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf_MetaData[] = {
		{ "Category", "ItemStruct__pf697489738" },
		{ "DisplayName", "MaxStackSize" },
		{ "ModuleRelativePath", "Public/ItemStruct__pf697489738.h" },
		{ "OverrideNativeName", "MaxStackSize_10_24C692A64198F66E71A52199D20FB35C" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf = { "MaxStackSize_10_24C692A64198F66E71A52199D20FB35C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FItemStruct__pf697489738, bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf_MetaData[] = {
		{ "Category", "ItemStruct__pf697489738" },
		{ "DisplayName", "IsUsable" },
		{ "ModuleRelativePath", "Public/ItemStruct__pf697489738.h" },
		{ "OverrideNativeName", "IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf_SetBit(void* Obj)
	{
		((FItemStruct__pf697489738*)Obj)->bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf = { "IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(FItemStruct__pf697489738), &Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf_MetaData[] = {
		{ "Category", "ItemStruct__pf697489738" },
		{ "DisplayName", "IsStackable" },
		{ "ModuleRelativePath", "Public/ItemStruct__pf697489738.h" },
		{ "OverrideNativeName", "IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf_SetBit(void* Obj)
	{
		((FItemStruct__pf697489738*)Obj)->bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf = { "IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(FItemStruct__pf697489738), &Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf_MetaData[] = {
		{ "Category", "ItemStruct__pf697489738" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Public/ItemStruct__pf697489738.h" },
		{ "OverrideNativeName", "Texture_15_7F6B4FA54855A03EC62974BC9E749329" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf = { "Texture_15_7F6B4FA54855A03EC62974BC9E749329", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FItemStruct__pf697489738, bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf_MetaData[] = {
		{ "Category", "ItemStruct__pf697489738" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/ItemStruct__pf697489738.h" },
		{ "OverrideNativeName", "Name_6_B6AB9EB541573009E7015587D2D24A4C" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf = { "Name_6_B6AB9EB541573009E7015587D2D24A4C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FItemStruct__pf697489738, bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Class_12_33456D674F08300E4B2C238A1C0A44C6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__MaxStackSize_10_24C692A64198F66E71A52199D20FB35C__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsUsable_8_CA2E83F04D8D8896425198AFA4FD0E2B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__IsStackable_7_E19C019846CBEB60B1BF39B47C0FBD2F__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Texture_15_7F6B4FA54855A03EC62974BC9E749329__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::NewProp_bpv__Name_6_B6AB9EB541573009E7015587D2D24A4C__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"ItemStruct",
		sizeof(FItemStruct__pf697489738),
		alignof(FItemStruct__pf697489738),
		Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemStruct__pf697489738()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FItemStruct__pf697489738_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/ItemStruct"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemStruct"), sizeof(FItemStruct__pf697489738), Get_Z_Construct_UScriptStruct_FItemStruct__pf697489738_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemStruct__pf697489738_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemStruct__pf697489738_Hash() { return 1647834062U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
