// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/TopDownCharacter__pf3669546605.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownCharacter__pf3669546605() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATopDownCharacter_C__pf3669546605();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UI_Interact_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct__pf697489738();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister();
// End Cross Module References
	static FName NAME_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ATopDownCharacter_C__pf3669546605::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ATopDownCharacter_C__pf3669546605::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		TopDownCharacter_C__pf3669546605_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf),&Parms);
	}
	void ATopDownCharacter_C__pf3669546605::StaticRegisterNativesATopDownCharacter_C__pf3669546605()
	{
		UClass* Class = ATopDownCharacter_C__pf3669546605::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_TopDownCharacter_1", &ATopDownCharacter_C__pf3669546605::execbpf__ExecuteUbergraph_TopDownCharacter__pf_1 },
			{ "InpActEvt_Action_K2Node_InputActionEvent_1", &ATopDownCharacter_C__pf3669546605::execbpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf },
			{ "InpActEvt_Next_K2Node_InputActionEvent_0", &ATopDownCharacter_C__pf3669546605::execbpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf },
			{ "ReceiveBeginPlay", &ATopDownCharacter_C__pf3669546605::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ATopDownCharacter_C__pf3669546605::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics
	{
		struct TopDownCharacter_C__pf3669546605_eventbpf__ExecuteUbergraph_TopDownCharacter__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TopDownCharacter_C__pf3669546605_eventbpf__ExecuteUbergraph_TopDownCharacter__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_TopDownCharacter_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownCharacter_C__pf3669546605, nullptr, "ExecuteUbergraph_TopDownCharacter_1", sizeof(TopDownCharacter_C__pf3669546605_eventbpf__ExecuteUbergraph_TopDownCharacter__pf_1_Parms), Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_ATopDownCharacter_C__pf3669546605();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_TopDownCharacter_1") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics
	{
		struct TopDownCharacter_C__pf3669546605_eventbpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TopDownCharacter_C__pf3669546605_eventbpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "InpActEvt_Action_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownCharacter_C__pf3669546605, nullptr, "InpActEvt_Action_K2Node_InputActionEvent_1", sizeof(TopDownCharacter_C__pf3669546605_eventbpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATopDownCharacter_C__pf3669546605();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Action_K2Node_InputActionEvent_1") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics
	{
		struct TopDownCharacter_C__pf3669546605_eventbpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TopDownCharacter_C__pf3669546605_eventbpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "InpActEvt_Next_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownCharacter_C__pf3669546605, nullptr, "InpActEvt_Next_K2Node_InputActionEvent_0", sizeof(TopDownCharacter_C__pf3669546605_eventbpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATopDownCharacter_C__pf3669546605();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Next_K2Node_InputActionEvent_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownCharacter_C__pf3669546605, nullptr, "ReceiveBeginPlay", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATopDownCharacter_C__pf3669546605();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TopDownCharacter_C__pf3669546605_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownCharacter_C__pf3669546605, nullptr, "ReceiveTick", sizeof(TopDownCharacter_C__pf3669546605_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATopDownCharacter_C__pf3669546605();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister()
	{
		return ATopDownCharacter_C__pf3669546605::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Interact_self_CastInput__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_b0l__CallFunc_Interact_self_CastInput__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsI_Interact__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_b0l__K2Node_DynamicCast_AsI_Interact__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Normal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Distance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FishingPlace__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FishingPlace__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FishingRodStruct__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__FishingRodStruct__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlotIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__SlotIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpringArm1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SpringArm1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Camera1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Camera1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CursorToWorld__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CursorToWorld__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InventoryComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__InventoryComponent__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ExecuteUbergraph_TopDownCharacter__pf_1, "ExecuteUbergraph_TopDownCharacter_1" }, // 2181350202
		{ &Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf, "InpActEvt_Action_K2Node_InputActionEvent_1" }, // 1411201842
		{ &Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf, "InpActEvt_Next_K2Node_InputActionEvent_0" }, // 1749032313
		{ &Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 348683343
		{ &Z_Construct_UFunction_ATopDownCharacter_C__pf3669546605_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2961728944
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownCharacter__pf3669546605.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "TopDownCharacter_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/Default/TopDownCharacter.TopDownCharacter_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Interact_self_CastInput__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_Interact_self_CastInput" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Interact_self_CastInput__pf = { "CallFunc_Interact_self_CastInput", nullptr, (EPropertyFlags)0x0014000000202000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_Interact_self_CastInput__pf), Z_Construct_UClass_UI_Interact_C_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Interact_self_CastInput__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Interact_self_CastInput__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
	};
#endif
	void Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit(void* Obj)
	{
		((ATopDownCharacter_C__pf3669546605*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { "K2Node_DynamicCast_bSuccess2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ATopDownCharacter_C__pf3669546605), &Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsDialogue_Trigger1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf = { "K2Node_DynamicCast_AsDialogue_Trigger1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf), Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item1__pf = { "CallFunc_Array_Get_Item1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_Array_Get_Item1__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_GetOverlappingActors_OverlappingActors1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf = { "CallFunc_GetOverlappingActors_OverlappingActors1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf_Inner = { "b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
	};
#endif
	void Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit(void* Obj)
	{
		((ATopDownCharacter_C__pf3669546605*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { "K2Node_DynamicCast_bSuccess1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ATopDownCharacter_C__pf3669546605), &Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsDialogue_Trigger" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf = { "K2Node_DynamicCast_AsDialogue_Trigger", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf), Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ATopDownCharacter_C__pf3669546605*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ATopDownCharacter_C__pf3669546605), &Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsI_Interact__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsI_Interact" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsI_Interact__pf = { "K2Node_DynamicCast_AsI_Interact", nullptr, (EPropertyFlags)0x0014000000202000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__K2Node_DynamicCast_AsI_Interact__pf), Z_Construct_UClass_UI_Interact_C_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsI_Interact__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsI_Interact__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable1__pf = { "Temp_int_Array_Index_Variable1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__Temp_int_Array_Index_Variable1__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key1__pf = { "K2Node_InputActionEvent_Key1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__K2Node_InputActionEvent_Key1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf = { "CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_GetOverlappingActors_OverlappingActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf = { "CallFunc_GetOverlappingActors_OverlappingActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner = { "b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceEnd" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf = { "CallFunc_BreakHitResult_TraceEnd", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_TraceEnd__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceStart" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf = { "CallFunc_BreakHitResult_TraceStart", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_TraceStart__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_FaceIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf = { "CallFunc_BreakHitResult_FaceIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_FaceIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitItem" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf = { "CallFunc_BreakHitResult_HitItem", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_HitItem__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitBoneName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf = { "CallFunc_BreakHitResult_HitBoneName", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_HitBoneName__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf = { "CallFunc_BreakHitResult_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf = { "CallFunc_BreakHitResult_HitActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_HitActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_PhysMat" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf = { "CallFunc_BreakHitResult_PhysMat", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_PhysMat__pf), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf = { "CallFunc_BreakHitResult_ImpactNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_ImpactNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Normal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf = { "CallFunc_BreakHitResult_Normal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_Normal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf = { "CallFunc_BreakHitResult_ImpactPoint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_ImpactPoint__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf = { "CallFunc_BreakHitResult_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf = { "CallFunc_BreakHitResult_Distance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_Distance__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf = { "CallFunc_BreakHitResult_Time", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_BreakHitResult_Time__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bInitialOverlap" },
	};
#endif
	void Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj)
	{
		((ATopDownCharacter_C__pf3669546605*)Obj)->b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = { "CallFunc_BreakHitResult_bInitialOverlap", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ATopDownCharacter_C__pf3669546605), &Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bBlockingHit" },
	};
#endif
	void Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj)
	{
		((ATopDownCharacter_C__pf3669546605*)Obj)->b0l__CallFunc_BreakHitResult_bBlockingHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf = { "CallFunc_BreakHitResult_bBlockingHit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ATopDownCharacter_C__pf3669546605), &Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CallFunc_GetHitResultUnderCursorByChannel_HitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf = { "CallFunc_GetHitResultUnderCursorByChannel_HitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "Temp_bool_True_if_break_was_hit_Variable1" },
	};
#endif
	void Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf_SetBit(void* Obj)
	{
		((ATopDownCharacter_C__pf3669546605*)Obj)->b0l__Temp_bool_True_if_break_was_hit_Variable1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf = { "Temp_bool_True_if_break_was_hit_Variable1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ATopDownCharacter_C__pf3669546605), &Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable1__pf = { "Temp_int_Loop_Counter_Variable1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__Temp_int_Loop_Counter_Variable1__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "Temp_bool_True_if_break_was_hit_Variable" },
	};
#endif
	void Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit(void* Obj)
	{
		((ATopDownCharacter_C__pf3669546605*)Obj)->b0l__Temp_bool_True_if_break_was_hit_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf = { "Temp_bool_True_if_break_was_hit_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ATopDownCharacter_C__pf3669546605), &Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingPlace__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fishing Place" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FishingPlace" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingPlace__pf = { "FishingPlace", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, bpv__FishingPlace__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingPlace__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingPlace__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingRodStruct__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fishing Rod Struct" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FishingRodStruct" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingRodStruct__pf = { "FishingRodStruct", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, bpv__FishingRodStruct__pf), Z_Construct_UScriptStruct_FSlotStruct__pf697489738, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingRodStruct__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingRodStruct__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SlotIndex__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slot Index" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SlotIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SlotIndex__pf = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, bpv__SlotIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SlotIndex__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SlotIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SpringArm1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "SpringArm1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SpringArm1__pf = { "SpringArm1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, bpv__SpringArm1__pf), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SpringArm1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SpringArm1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__Camera1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "Camera1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__Camera1__pf = { "Camera1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, bpv__Camera1__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__Camera1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__Camera1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__CursorToWorld__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "CursorToWorld" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__CursorToWorld__pf = { "CursorToWorld", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, bpv__CursorToWorld__pf), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__CursorToWorld__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__CursorToWorld__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__InventoryComponent__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TopDownCharacter__pf3669546605.h" },
		{ "OverrideNativeName", "InventoryComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__InventoryComponent__pf = { "InventoryComponent", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ATopDownCharacter_C__pf3669546605, bpv__InventoryComponent__pf), Z_Construct_UClass_UInventoryComponent_C__pf2577010357_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__InventoryComponent__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__InventoryComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Interact_self_CastInput__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsDialogue_Trigger__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_DynamicCast_AsI_Interact__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_InputActionEvent_Key1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingPlace__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__FishingRodStruct__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SlotIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__SpringArm1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__Camera1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__CursorToWorld__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::NewProp_bpv__InventoryComponent__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownCharacter_C__pf3669546605>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::ClassParams = {
		&ATopDownCharacter_C__pf3669546605::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownCharacter_C__pf3669546605()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/Default/TopDownCharacter"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TopDownCharacter_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATopDownCharacter_C__pf3669546605, TEXT("TopDownCharacter_C"), 3986470046);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ATopDownCharacter_C__pf3669546605>()
	{
		return ATopDownCharacter_C__pf3669546605::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownCharacter_C__pf3669546605(Z_Construct_UClass_ATopDownCharacter_C__pf3669546605, &ATopDownCharacter_C__pf3669546605::StaticClass, TEXT("/Game/TopDownBP/Blueprints/Default/TopDownCharacter"), TEXT("TopDownCharacter_C"), true, TEXT("/Game/TopDownBP/Blueprints/Default/TopDownCharacter"), TEXT("/Game/TopDownBP/Blueprints/Default/TopDownCharacter.TopDownCharacter_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownCharacter_C__pf3669546605);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
