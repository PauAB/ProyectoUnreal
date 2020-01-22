// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NATIVIZEDASSETS_DialogueTrigger__pf3696423911_generated_h
#error "DialogueTrigger__pf3696423911.generated.h already included, missing '#pragma once' in DialogueTrigger__pf3696423911.h"
#endif
#define NATIVIZEDASSETS_DialogueTrigger__pf3696423911_generated_h

#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetDialogueLine__pf) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_bpp__Line__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetDialogueLine__pf(Z_Param_Out_bpp__Line__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CreateDialogue__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__Interactor__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__CreateDialogue__pf(Z_Param_bpp__Interactor__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Interact__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__Interactor__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Interact__pf(Z_Param_bpp__Interactor__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_DialogueTrigger__pf_0) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_DialogueTrigger__pf_0(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetDialogueLine__pf) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_bpp__Line__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__GetDialogueLine__pf(Z_Param_Out_bpp__Line__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CreateDialogue__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__Interactor__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__CreateDialogue__pf(Z_Param_bpp__Interactor__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Interact__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__Interactor__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Interact__pf(Z_Param_bpp__Interactor__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_DialogueTrigger__pf_0) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_DialogueTrigger__pf_0(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_EVENT_PARMS \
	struct DialogueTrigger_C__pf3696423911_eventbpf__Interact__pf_Parms \
	{ \
		AActor* bpp__Interactor__pf; \
	};


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_CALLBACK_WRAPPERS \
	void eventbpf__Interact__pf(AActor* bpp__Interactor__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADialogueTrigger_C__pf3696423911(); \
	friend struct Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics; \
public: \
	DECLARE_CLASS(ADialogueTrigger_C__pf3696423911, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger"), NO_API) \
	DECLARE_SERIALIZER(ADialogueTrigger_C__pf3696423911) \
	virtual UObject* _getUObject() const override { return const_cast<ADialogueTrigger_C__pf3696423911*>(this); }


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_INCLASS \
private: \
	static void StaticRegisterNativesADialogueTrigger_C__pf3696423911(); \
	friend struct Z_Construct_UClass_ADialogueTrigger_C__pf3696423911_Statics; \
public: \
	DECLARE_CLASS(ADialogueTrigger_C__pf3696423911, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/DialogueLogic/DialogueTrigger"), NO_API) \
	DECLARE_SERIALIZER(ADialogueTrigger_C__pf3696423911) \
	virtual UObject* _getUObject() const override { return const_cast<ADialogueTrigger_C__pf3696423911*>(this); }


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADialogueTrigger_C__pf3696423911(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADialogueTrigger_C__pf3696423911) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueTrigger_C__pf3696423911); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueTrigger_C__pf3696423911); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogueTrigger_C__pf3696423911(ADialogueTrigger_C__pf3696423911&&); \
	NO_API ADialogueTrigger_C__pf3696423911(const ADialogueTrigger_C__pf3696423911&); \
public:


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogueTrigger_C__pf3696423911(ADialogueTrigger_C__pf3696423911&&); \
	NO_API ADialogueTrigger_C__pf3696423911(const ADialogueTrigger_C__pf3696423911&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueTrigger_C__pf3696423911); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueTrigger_C__pf3696423911); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADialogueTrigger_C__pf3696423911)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_15_PROLOG \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_EVENT_PARMS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_RPC_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_INCLASS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_INCLASS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ADialogueTrigger_C__pf3696423911>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_DialogueTrigger__pf3696423911_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
