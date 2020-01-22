// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef NATIVIZEDASSETS_TopDownCharacter__pf3669546605_generated_h
#error "TopDownCharacter__pf3669546605.generated.h already included, missing '#pragma once' in TopDownCharacter__pf3669546605.h"
#endif
#define NATIVIZEDASSETS_TopDownCharacter__pf3669546605_generated_h

#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
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
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_TopDownCharacter__pf_1) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_TopDownCharacter__pf_1(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Action_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Next_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
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
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_TopDownCharacter__pf_1) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_TopDownCharacter__pf_1(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_EVENT_PARMS \
	struct TopDownCharacter_C__pf3669546605_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownCharacter_C__pf3669546605(); \
	friend struct Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics; \
public: \
	DECLARE_CLASS(ATopDownCharacter_C__pf3669546605, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/Default/TopDownCharacter"), NO_API) \
	DECLARE_SERIALIZER(ATopDownCharacter_C__pf3669546605)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_INCLASS \
private: \
	static void StaticRegisterNativesATopDownCharacter_C__pf3669546605(); \
	friend struct Z_Construct_UClass_ATopDownCharacter_C__pf3669546605_Statics; \
public: \
	DECLARE_CLASS(ATopDownCharacter_C__pf3669546605, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/Default/TopDownCharacter"), NO_API) \
	DECLARE_SERIALIZER(ATopDownCharacter_C__pf3669546605)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownCharacter_C__pf3669546605(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownCharacter_C__pf3669546605) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownCharacter_C__pf3669546605); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownCharacter_C__pf3669546605); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownCharacter_C__pf3669546605(ATopDownCharacter_C__pf3669546605&&); \
	NO_API ATopDownCharacter_C__pf3669546605(const ATopDownCharacter_C__pf3669546605&); \
public:


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownCharacter_C__pf3669546605(ATopDownCharacter_C__pf3669546605&&); \
	NO_API ATopDownCharacter_C__pf3669546605(const ATopDownCharacter_C__pf3669546605&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownCharacter_C__pf3669546605); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownCharacter_C__pf3669546605); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownCharacter_C__pf3669546605)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_18_PROLOG \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_EVENT_PARMS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_RPC_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_INCLASS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_INCLASS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ATopDownCharacter_C__pf3669546605>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownCharacter__pf3669546605_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
