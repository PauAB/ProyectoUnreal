// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Item__pf199495785.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem__pf199495785() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_C__pf199495785_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AItem_C__pf199495785();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATopDownController_C__pf3669546605_NoRegister();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct__pf697489738();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UI_Interact_C_NoRegister();
// End Cross Module References
	static FName NAME_AItem_C__pf199495785_bpf__Interact__pf = FName(TEXT("Interact"));
	void AItem_C__pf199495785::eventbpf__Interact__pf(AActor* bpp__Interactor__pf)
	{
		Item_C__pf199495785_eventbpf__Interact__pf_Parms Parms;
		Parms.bpp__Interactor__pf=bpp__Interactor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AItem_C__pf199495785_bpf__Interact__pf),&Parms);
	}
	void AItem_C__pf199495785::StaticRegisterNativesAItem_C__pf199495785()
	{
		UClass* Class = AItem_C__pf199495785::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyItem", &AItem_C__pf199495785::execbpf__DestroyItem__pf },
			{ "ExecuteUbergraph_Item_0", &AItem_C__pf199495785::execbpf__ExecuteUbergraph_Item__pf_0 },
			{ "Interact", &AItem_C__pf199495785::execbpf__Interact__pf },
			{ "InventoryFull", &AItem_C__pf199495785::execbpf__InventoryFull__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "DestroyItem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_C__pf199495785, nullptr, "DestroyItem", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf()
	{
		UObject* Outer = Z_Construct_UClass_AItem_C__pf199495785();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("DestroyItem") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics
	{
		struct Item_C__pf199495785_eventbpf__ExecuteUbergraph_Item__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Item_C__pf199495785_eventbpf__ExecuteUbergraph_Item__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Item_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_C__pf199495785, nullptr, "ExecuteUbergraph_Item_0", sizeof(Item_C__pf199495785_eventbpf__ExecuteUbergraph_Item__pf_0_Parms), Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_AItem_C__pf199495785();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Item_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Interactor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::NewProp_bpp__Interactor__pf = { "bpp__Interactor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Item_C__pf199495785_eventbpf__Interact__pf_Parms, bpp__Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::NewProp_bpp__Interactor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "Interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_C__pf199495785, nullptr, "Interact", sizeof(Item_C__pf199495785_eventbpf__Interact__pf_Parms), Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf()
	{
		UObject* Outer = Z_Construct_UClass_AItem_C__pf199495785();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Interact") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics
	{
		struct Item_C__pf199495785_eventbpf__InventoryFull__pf_Parms
		{
			ATopDownCharacter_C__pf3669546605* bpp__CharRef__pf;
			bool bpp__Full__pf;
		};
		static void NewProp_bpp__Full__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Full__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__CharRef__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::NewProp_bpp__Full__pf_SetBit(void* Obj)
	{
		((Item_C__pf199495785_eventbpf__InventoryFull__pf_Parms*)Obj)->bpp__Full__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::NewProp_bpp__Full__pf = { "bpp__Full__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(Item_C__pf199495785_eventbpf__InventoryFull__pf_Parms), &Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::NewProp_bpp__Full__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::NewProp_bpp__CharRef__pf = { "bpp__CharRef__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Item_C__pf199495785_eventbpf__InventoryFull__pf_Parms, bpp__CharRef__pf), Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::NewProp_bpp__Full__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::NewProp_bpp__CharRef__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "InventoryFull" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_C__pf199495785, nullptr, "InventoryFull", sizeof(Item_C__pf199495785_eventbpf__InventoryFull__pf_Parms), Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf()
	{
		UObject* Outer = Z_Construct_UClass_AItem_C__pf199495785();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InventoryFull") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItem_C__pf199495785_NoRegister()
	{
		return AItem_C__pf199495785::StaticClass();
	}
	struct Z_Construct_UClass_AItem_C__pf199495785_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_AddToInventory_Success__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_AddToInventory_Success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_AddToInventory_Success__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_InventoryFull_Full__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_InventoryFull_Full__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_InventoryFull_Full__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlotStruct__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlotStruct__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Interactor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Interactor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Counter__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Counter__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ContentToAdd__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__ContentToAdd__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Quantity__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Quantity__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ItemStruct__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__ItemStruct__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sphere__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_C__pf199495785_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_C__pf199495785_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_C__pf199495785_bpf__DestroyItem__pf, "DestroyItem" }, // 365987835
		{ &Z_Construct_UFunction_AItem_C__pf199495785_bpf__ExecuteUbergraph_Item__pf_0, "ExecuteUbergraph_Item_0" }, // 3305907927
		{ &Z_Construct_UFunction_AItem_C__pf199495785_bpf__Interact__pf, "Interact" }, // 2610634431
		{ &Z_Construct_UFunction_AItem_C__pf199495785_bpf__InventoryFull__pf, "InventoryFull" }, // 3232047913
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Item__pf199495785.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Item_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item.Item_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_AddToInventory_Success__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "CallFunc_AddToInventory_Success" },
	};
#endif
	void Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_AddToInventory_Success__pf_SetBit(void* Obj)
	{
		((AItem_C__pf199495785*)Obj)->b0l__CallFunc_AddToInventory_Success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_AddToInventory_Success__pf = { "CallFunc_AddToInventory_Success", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AItem_C__pf199495785), &Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_AddToInventory_Success__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_AddToInventory_Success__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_AddToInventory_Success__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
	};
#endif
	void Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit(void* Obj)
	{
		((AItem_C__pf199495785*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { "K2Node_DynamicCast_bSuccess1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AItem_C__pf199495785), &Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTop_Down_Controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf = { "K2Node_DynamicCast_AsTop_Down_Controller", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf), Z_Construct_UClass_ATopDownController_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_InventoryFull_Full__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "CallFunc_InventoryFull_Full" },
	};
#endif
	void Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_InventoryFull_Full__pf_SetBit(void* Obj)
	{
		((AItem_C__pf199495785*)Obj)->b0l__CallFunc_InventoryFull_Full__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_InventoryFull_Full__pf = { "CallFunc_InventoryFull_Full", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AItem_C__pf199495785), &Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_InventoryFull_Full__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_InventoryFull_Full__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_InventoryFull_Full__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_MakeStruct_SlotStruct__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlotStruct" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_MakeStruct_SlotStruct__pf = { "K2Node_MakeStruct_SlotStruct", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, b0l__K2Node_MakeStruct_SlotStruct__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_MakeStruct_SlotStruct__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_MakeStruct_SlotStruct__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AItem_C__pf199495785*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AItem_C__pf199495785), &Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTop_Down_Character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = { "K2Node_DynamicCast_AsTop_Down_Character", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, b0l__K2Node_DynamicCast_AsTop_Down_Character__pf), Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "K2Node_Event_Interactor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_Event_Interactor__pf = { "K2Node_Event_Interactor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, b0l__K2Node_Event_Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Counter__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Counter" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Counter" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Counter__pf = { "Counter", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, bpv__Counter__pf), METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Counter__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Counter__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ContentToAdd__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Content to Add" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ContentToAdd" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ContentToAdd__pf = { "ContentToAdd", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, bpv__ContentToAdd__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ContentToAdd__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ContentToAdd__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Quantity__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Quantity" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Quantity" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Quantity__pf = { "Quantity", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, bpv__Quantity__pf), METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Quantity__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Quantity__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ItemStruct__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Item Struct" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ItemStruct" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ItemStruct__pf = { "ItemStruct", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, bpv__ItemStruct__pf), Z_Construct_UScriptStruct_FItemStruct__pf697489738, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ItemStruct__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ItemStruct__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Sphere__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Sphere__pf = { "Sphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, bpv__Sphere__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Sphere__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Sphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__StaticMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__StaticMesh__pf = { "StaticMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__StaticMesh__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Scene__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item__pf199495785.h" },
		{ "OverrideNativeName", "Scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Scene__pf = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AItem_C__pf199495785, bpv__Scene__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Scene__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Scene__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_C__pf199495785_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_AddToInventory_Success__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__CallFunc_InventoryFull_Full__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_MakeStruct_SlotStruct__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_b0l__K2Node_Event_Interactor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Counter__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ContentToAdd__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Quantity__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__ItemStruct__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Sphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__StaticMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_C__pf199495785_Statics::NewProp_bpv__Scene__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AItem_C__pf199495785_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UI_Interact_C_NoRegister, (int32)VTABLE_OFFSET(AItem_C__pf199495785, II_Interact_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_C__pf199495785_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_C__pf199495785>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem_C__pf199495785_Statics::ClassParams = {
		&AItem_C__pf199495785::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_C__pf199495785_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_C__pf199495785_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AItem_C__pf199495785_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem_C__pf199495785()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Item_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem_C__pf199495785_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AItem_C__pf199495785, TEXT("Item_C"), 3179907798);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AItem_C__pf199495785>()
	{
		return AItem_C__pf199495785::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem_C__pf199495785(Z_Construct_UClass_AItem_C__pf199495785, &AItem_C__pf199495785::StaticClass, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item"), TEXT("Item_C"), true, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item"), TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item.Item_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_C__pf199495785);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
