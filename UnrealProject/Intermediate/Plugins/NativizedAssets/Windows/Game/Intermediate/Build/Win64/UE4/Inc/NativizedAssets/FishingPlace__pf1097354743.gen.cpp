// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/FishingPlace__pf1097354743.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishingPlace__pf1097354743() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFishingPlace_C__pf1097354743_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFishingPlace_C__pf1097354743();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABuild_C__pf1097354743();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATopDownController_C__pf3669546605_NoRegister();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister();
// End Cross Module References
	void AFishingPlace_C__pf1097354743::StaticRegisterNativesAFishingPlace_C__pf1097354743()
	{
		UClass* Class = AFishingPlace_C__pf1097354743::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_FishingPlace_0", &AFishingPlace_C__pf1097354743::execbpf__ExecuteUbergraph_FishingPlace__pf_0 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics
	{
		struct FishingPlace_C__pf1097354743_eventbpf__ExecuteUbergraph_FishingPlace__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FishingPlace_C__pf1097354743_eventbpf__ExecuteUbergraph_FishingPlace__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_FishingPlace_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFishingPlace_C__pf1097354743, nullptr, "ExecuteUbergraph_FishingPlace_0", sizeof(FishingPlace_C__pf1097354743_eventbpf__ExecuteUbergraph_FishingPlace__pf_0_Parms), Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_AFishingPlace_C__pf1097354743();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_FishingPlace_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFishingPlace_C__pf1097354743_NoRegister()
	{
		return AFishingPlace_C__pf1097354743::StaticClass();
	}
	struct Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_AddToInventory_Success__pf_MetaData[];
#endif
		static void NewProp_b1l__CallFunc_AddToInventory_Success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__CallFunc_AddToInventory_Success__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Character__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_Interactor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_Event_Interactor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FishStruct__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__FishStruct__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CharRef__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CharRef__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CharController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CharController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InventoryComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__InventoryComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FishingRodStruct__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__FishingRodStruct__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Inventory__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Inventory__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Inventory__pf_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABuild_C__pf1097354743,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFishingPlace_C__pf1097354743_bpf__ExecuteUbergraph_FishingPlace__pf_0, "ExecuteUbergraph_FishingPlace_0" }, // 2559110223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FishingPlace__pf1097354743.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "FishingPlace_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/Builds/FishingPlace.FishingPlace_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__CallFunc_AddToInventory_Success__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "CallFunc_AddToInventory_Success" },
	};
#endif
	void Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__CallFunc_AddToInventory_Success__pf_SetBit(void* Obj)
	{
		((AFishingPlace_C__pf1097354743*)Obj)->b1l__CallFunc_AddToInventory_Success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__CallFunc_AddToInventory_Success__pf = { "CallFunc_AddToInventory_Success", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AFishingPlace_C__pf1097354743), &Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__CallFunc_AddToInventory_Success__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__CallFunc_AddToInventory_Success__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__CallFunc_AddToInventory_Success__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
	};
#endif
	void Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_SetBit(void* Obj)
	{
		((AFishingPlace_C__pf1097354743*)Obj)->b1l__K2Node_DynamicCast_bSuccess2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf = { "K2Node_DynamicCast_bSuccess2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AFishingPlace_C__pf1097354743), &Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTop_Down_Character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Character__pf = { "K2Node_DynamicCast_AsTop_Down_Character", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, b1l__K2Node_DynamicCast_AsTop_Down_Character__pf), Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_Event_Interactor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "K2Node_Event_Interactor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_Event_Interactor__pf = { "K2Node_Event_Interactor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, b1l__K2Node_Event_Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_Event_Interactor__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_Event_Interactor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
	};
#endif
	void Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_SetBit(void* Obj)
	{
		((AFishingPlace_C__pf1097354743*)Obj)->b1l__K2Node_DynamicCast_bSuccess1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf = { "K2Node_DynamicCast_bSuccess1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AFishingPlace_C__pf1097354743), &Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTop_Down_Controller1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf = { "K2Node_DynamicCast_AsTop_Down_Controller1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf), Z_Construct_UClass_ATopDownController_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AFishingPlace_C__pf1097354743*)Obj)->b1l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AFishingPlace_C__pf1097354743), &Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTop_Down_Controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf = { "K2Node_DynamicCast_AsTop_Down_Controller", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf), Z_Construct_UClass_ATopDownController_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishStruct__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fish Struct" },
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FishStruct" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishStruct__pf = { "FishStruct", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, bpv__FishStruct__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishStruct__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishStruct__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharRef__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Char Ref" },
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CharRef" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharRef__pf = { "CharRef", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, bpv__CharRef__pf), Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharRef__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharRef__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Char Controller" },
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CharController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharController__pf = { "CharController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, bpv__CharController__pf), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharController__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__InventoryComp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Inventory Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "InventoryComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__InventoryComp__pf = { "InventoryComp", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, bpv__InventoryComp__pf), Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__InventoryComp__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__InventoryComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishingRodStruct__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fishing Rod Struct" },
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FishingRodStruct" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishingRodStruct__pf = { "FishingRodStruct", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, bpv__FishingRodStruct__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishingRodStruct__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishingRodStruct__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__Inventory__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Inventory" },
		{ "ModuleRelativePath", "Public/FishingPlace__pf1097354743.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__Inventory__pf = { "Inventory", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AFishingPlace_C__pf1097354743, bpv__Inventory__pf), METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__Inventory__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__Inventory__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__Inventory__pf_Inner = { "bpv__Inventory__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__CallFunc_AddToInventory_Success__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Character__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_Event_Interactor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_b1l__K2Node_DynamicCast_AsTop_Down_Controller__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishStruct__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharRef__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__CharController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__InventoryComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__FishingRodStruct__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__Inventory__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::NewProp_bpv__Inventory__pf_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFishingPlace_C__pf1097354743>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::ClassParams = {
		&AFishingPlace_C__pf1097354743::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFishingPlace_C__pf1097354743()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/FishingPlace"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("FishingPlace_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFishingPlace_C__pf1097354743_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFishingPlace_C__pf1097354743, TEXT("FishingPlace_C"), 791996662);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFishingPlace_C__pf1097354743>()
	{
		return AFishingPlace_C__pf1097354743::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFishingPlace_C__pf1097354743(Z_Construct_UClass_AFishingPlace_C__pf1097354743, &AFishingPlace_C__pf1097354743::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/FishingPlace"), TEXT("FishingPlace_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/FishingPlace"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/FishingPlace.FishingPlace_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishingPlace_C__pf1097354743);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
