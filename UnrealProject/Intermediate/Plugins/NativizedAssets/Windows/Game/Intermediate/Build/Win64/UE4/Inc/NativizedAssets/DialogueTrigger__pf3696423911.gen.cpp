// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/DialogueTrigger__pf3696423911.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueTrigger__pf3696423911() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADialogueTrigger_C__pf3696423911();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATopDownController_C__pf3669546605_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGameHUD_C__pf3980440580_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UI_Interact_C_NoRegister();
// End Cross Module References
	static FName NAME_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf = FName(TEXT("Interact"));
	void ADialogueTrigger_C__pf3696423911::eventbpf__Interact__pf(AActor* bpp__Interactor__pf)
	{
		DialogueTrigger_C__pf3696423911_eventbpf__Interact__pf_Parms Parms;
		Parms.bpp__Interactor__pf=bpp__Interactor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf),&Parms);
	}
	static FName NAME_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ADialogueTrigger_C__pf3696423911::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ADialogueTrigger_C__pf3696423911::StaticRegisterNativesADialogueTrigger_C__pf3696423911()
	{
		UClass* Class = ADialogueTrigger_C__pf3696423911::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature", &ADialogueTrigger_C__pf3696423911::execbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "CreateDialogue", &ADialogueTrigger_C__pf3696423911::execbpf__CreateDialogue__pf },
			{ "ExecuteUbergraph_DialogueTrigger_0", &ADialogueTrigger_C__pf3696423911::execbpf__ExecuteUbergraph_DialogueTrigger__pf_0 },
			{ "GetDialogueLine", &ADialogueTrigger_C__pf3696423911::execbpf__GetDialogueLine__pf },
			{ "Interact", &ADialogueTrigger_C__pf3696423911::execbpf__Interact__pf },
			{ "ReceiveBeginPlay", &ADialogueTrigger_C__pf3696423911::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics
	{
		struct DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
			bool bpp__bFromSweep__pf;
			FHitResult bpp__SweepResult__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SweepResult__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SweepResult__pf__const;
		static void NewProp_bpp__bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bFromSweep__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OverlappedComponent__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	void Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADialogueTrigger_C__pf3696423911, nullptr, "BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature", sizeof(DialogueTrigger_C__pf3696423911_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ADialogueTrigger_C__pf3696423911();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics
	{
		struct DialogueTrigger_C__pf3696423911_eventbpf__CreateDialogue__pf_Parms
		{
			AActor* bpp__Interactor__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Interactor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::NewProp_bpp__Interactor__pf = { "bpp__Interactor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__CreateDialogue__pf_Parms, bpp__Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::NewProp_bpp__Interactor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "CreateDialogue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADialogueTrigger_C__pf3696423911, nullptr, "CreateDialogue", sizeof(DialogueTrigger_C__pf3696423911_eventbpf__CreateDialogue__pf_Parms), Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf()
	{
		UObject* Outer = Z_Construct_UClass_ADialogueTrigger_C__pf3696423911();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("CreateDialogue") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics
	{
		struct DialogueTrigger_C__pf3696423911_eventbpf__ExecuteUbergraph_DialogueTrigger__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__ExecuteUbergraph_DialogueTrigger__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_DialogueTrigger_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADialogueTrigger_C__pf3696423911, nullptr, "ExecuteUbergraph_DialogueTrigger_0", sizeof(DialogueTrigger_C__pf3696423911_eventbpf__ExecuteUbergraph_DialogueTrigger__pf_0_Parms), Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_ADialogueTrigger_C__pf3696423911();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_DialogueTrigger_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics
	{
		struct DialogueTrigger_C__pf3696423911_eventbpf__GetDialogueLine__pf_Parms
		{
			FText bpp__Line__pf;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__Line__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::NewProp_bpp__Line__pf = { "bpp__Line__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__GetDialogueLine__pf_Parms, bpp__Line__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::NewProp_bpp__Line__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "GetDialogueLine" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADialogueTrigger_C__pf3696423911, nullptr, "GetDialogueLine", sizeof(DialogueTrigger_C__pf3696423911_eventbpf__GetDialogueLine__pf_Parms), Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf()
	{
		UObject* Outer = Z_Construct_UClass_ADialogueTrigger_C__pf3696423911();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("GetDialogueLine") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Interactor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::NewProp_bpp__Interactor__pf = { "bpp__Interactor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DialogueTrigger_C__pf3696423911_eventbpf__Interact__pf_Parms, bpp__Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::NewProp_bpp__Interactor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "Interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADialogueTrigger_C__pf3696423911, nullptr, "Interact", sizeof(DialogueTrigger_C__pf3696423911_eventbpf__Interact__pf_Parms), Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf()
	{
		UObject* Outer = Z_Construct_UClass_ADialogueTrigger_C__pf3696423911();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Interact") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADialogueTrigger_C__pf3696423911, nullptr, "ReceiveBeginPlay", 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ADialogueTrigger_C__pf3696423911();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_NoRegister()
	{
		return ADialogueTrigger_C__pf3696423911::StaticClass();
	}
	struct Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetDialogueLine_Line__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_b0l__CallFunc_GetDialogueLine_Line__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Interactor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Interactor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Dialogues__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Dialogues__pf;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__Dialogues__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LineCurrent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__LineCurrent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Conversation_ID__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Conversation_ID__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Trigger_ID__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Trigger_ID__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CharController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CharController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DialogueWidget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DialogueWidget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature" }, // 2451678505
		{ &Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__CreateDialogue__pf, "CreateDialogue" }, // 3579687785
		{ &Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ExecuteUbergraph_DialogueTrigger__pf_0, "ExecuteUbergraph_DialogueTrigger_0" }, // 1878670232
		{ &Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__GetDialogueLine__pf, "GetDialogueLine" }, // 1945466192
		{ &Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__Interact__pf, "Interact" }, // 2274711121
		{ &Z_Construct_UFunction_ADialogueTrigger_C__pf3696423911_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2928688954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogueTrigger__pf3696423911.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "DialogueTrigger_C" },
		{ "ReplaceConverted", "/Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger.DialogueTrigger_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDialogueLine_Line__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "CallFunc_GetDialogueLine_Line" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDialogueLine_Line__pf = { "CallFunc_GetDialogueLine_Line", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__CallFunc_GetDialogueLine_Line__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDialogueLine_Line__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDialogueLine_Line__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "Temp_int_Variable1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable1__pf = { "Temp_int_Variable1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__Temp_int_Variable1__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "CallFunc_GetDataTableRowFromName_OutRow" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf = { "CallFunc_GetDataTableRowFromName_OutRow", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__CallFunc_GetDataTableRowFromName_OutRow__pf), Z_Construct_UScriptStruct_FDialogueStruct__pf3696423911, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__CallFunc_Array_Get_Item__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "CallFunc_GetDataTableRowNames_OutRowNames" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf = { "CallFunc_GetDataTableRowNames_OutRowNames", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_Inner = { "b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
	};
#endif
	void Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit(void* Obj)
	{
		((ADialogueTrigger_C__pf3696423911*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { "K2Node_DynamicCast_bSuccess1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ADialogueTrigger_C__pf3696423911), &Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTop_Down_Controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf = { "K2Node_DynamicCast_AsTop_Down_Controller", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf), Z_Construct_UClass_ATopDownController_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ADialogueTrigger_C__pf3696423911*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ADialogueTrigger_C__pf3696423911), &Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTop_Down_Character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf = { "K2Node_DynamicCast_AsTop_Down_Character", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__K2Node_DynamicCast_AsTop_Down_Character__pf), Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((ADialogueTrigger_C__pf3696423911*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ADialogueTrigger_C__pf3696423911), &Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "K2Node_Event_Interactor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_Event_Interactor__pf = { "K2Node_Event_Interactor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__K2Node_Event_Interactor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_Event_Interactor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Dialogues__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Dialogues" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Dialogues" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Dialogues__pf = { "Dialogues", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, bpv__Dialogues__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Dialogues__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Dialogues__pf_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Dialogues__pf_Inner = { "bpv__Dialogues__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__LineCurrent__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Line Current" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LineCurrent" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__LineCurrent__pf = { "LineCurrent", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, bpv__LineCurrent__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__LineCurrent__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__LineCurrent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Conversation_ID__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Conversation ID" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Conversation_ID" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Conversation_ID__pf = { "Conversation_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, bpv__Conversation_ID__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Conversation_ID__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Conversation_ID__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Trigger_ID__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Trigger ID" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Trigger_ID" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Trigger_ID__pf = { "Trigger_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, bpv__Trigger_ID__pf), METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Trigger_ID__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Trigger_ID__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__CharController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Char Controller" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CharController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__CharController__pf = { "CharController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, bpv__CharController__pf), Z_Construct_UClass_ATopDownController_C__pf3669546605_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__CharController__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__CharController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__DialogueWidget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Dialogue Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "DialogueWidget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__DialogueWidget__pf = { "DialogueWidget", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, bpv__DialogueWidget__pf), Z_Construct_UClass_UGameHUD_C__pf3980440580_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__DialogueWidget__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__DialogueWidget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Box__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Box__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Scene__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueTrigger__pf3696423911.h" },
		{ "OverrideNativeName", "Scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Scene__pf = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ADialogueTrigger_C__pf3696423911, bpv__Scene__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Scene__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Scene__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDialogueLine_Line__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Controller__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_DynamicCast_AsTop_Down_Character__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__K2Node_Event_Interactor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Dialogues__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Dialogues__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__LineCurrent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Conversation_ID__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Trigger_ID__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__CharController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__DialogueWidget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Box__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::NewProp_bpv__Scene__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UI_Interact_C_NoRegister, (int32)VTABLE_OFFSET(ADialogueTrigger_C__pf3696423911, II_Interact_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADialogueTrigger_C__pf3696423911>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::ClassParams = {
		&ADialogueTrigger_C__pf3696423911::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADialogueTrigger_C__pf3696423911()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("DialogueTrigger_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ADialogueTrigger_C__pf3696423911, TEXT("DialogueTrigger_C"), 2841686262);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ADialogueTrigger_C__pf3696423911>()
	{
		return ADialogueTrigger_C__pf3696423911::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADialogueTrigger_C__pf3696423911(Z_Construct_UClass_ADialogueTrigger_C__pf3696423911, &ADialogueTrigger_C__pf3696423911::StaticClass, TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger"), TEXT("DialogueTrigger_C"), true, TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger"), TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger.DialogueTrigger_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADialogueTrigger_C__pf3696423911);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
