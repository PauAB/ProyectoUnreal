// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/SlotStruct__pf697489738.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotStruct__pf697489738() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct__pf697489738();
// End Cross Module References
class UScriptStruct* FSlotStruct__pf697489738::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("SlotStruct")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotStruct__pf697489738, StructPackage, TEXT("SlotStruct"), sizeof(FSlotStruct__pf697489738), Get_Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FSlotStruct__pf697489738>()
{
	return FSlotStruct__pf697489738::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlotStruct__pf697489738(FSlotStruct__pf697489738::StaticStruct, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct"), TEXT("SlotStruct"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct.SlotStruct"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFSlotStruct__pf697489738
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFSlotStruct__pf697489738()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlotStruct")),new UScriptStruct::TCppStructOps<FSlotStruct__pf697489738>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFSlotStruct__pf697489738;
	struct Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SlotStruct__pf697489738.h" },
		{ "OverrideNativeName", "SlotStruct" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct.SlotStruct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotStruct__pf697489738>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf_MetaData[] = {
		{ "Category", "SlotStruct__pf697489738" },
		{ "DisplayName", "Quantity" },
		{ "ModuleRelativePath", "Public/SlotStruct__pf697489738.h" },
		{ "OverrideNativeName", "Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf = { "Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FSlotStruct__pf697489738, bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf_MetaData[] = {
		{ "Category", "SlotStruct__pf697489738" },
		{ "DisplayName", "Item" },
		{ "ModuleRelativePath", "Public/SlotStruct__pf697489738.h" },
		{ "OverrideNativeName", "Item_2_62BAB36C42C7C677530F17B8E558FF3A" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf = { "Item_2_62BAB36C42C7C677530F17B8E558FF3A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FSlotStruct__pf697489738, bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf), Z_Construct_UScriptStruct_FItemStruct__pf697489738, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Quantity_5_0523A9EE43EB25B1CD4325BF1F14AE32__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::NewProp_bpv__Item_2_62BAB36C42C7C677530F17B8E558FF3A__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"SlotStruct",
		sizeof(FSlotStruct__pf697489738),
		alignof(FSlotStruct__pf697489738),
		Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Structs/SlotStruct"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotStruct"), sizeof(FSlotStruct__pf697489738), Get_Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotStruct__pf697489738_Hash() { return 3030786043U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
