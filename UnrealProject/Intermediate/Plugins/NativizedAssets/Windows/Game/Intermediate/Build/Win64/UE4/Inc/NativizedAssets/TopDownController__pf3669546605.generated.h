// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FKey;
#ifdef NATIVIZEDASSETS_TopDownController__pf3669546605_generated_h
#error "TopDownController__pf3669546605.generated.h already included, missing '#pragma once' in TopDownController__pf3669546605.h"
#endif
#define NATIVIZEDASSETS_TopDownController__pf3669546605_generated_h

#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__CastRef__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__CastRef__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__MoveToHitLocation__pf) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_bpp__Hit__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__MoveToHitLocation__pf(Z_Param_bpp__Hit__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_SetDestination_K2Node_InputActionEvent_8__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_SetDestination_K2Node_InputActionEvent_8__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_SetDestination_K2Node_InputActionEvent_7__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_SetDestination_K2Node_InputActionEvent_7__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Pan_K2Node_InputActionEvent_6__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Pan_K2Node_InputActionEvent_6__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Pan_K2Node_InputActionEvent_5__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Pan_K2Node_InputActionEvent_5__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Pan_K2Node_InputActionEvent_4__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Pan_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Pan_K2Node_InputActionEvent_3__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Pan_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_2__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_ZoomOut_K2Node_InputActionEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_ZoomOut_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_NumericKey_K2Node_InputActionEvent_0__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_NumericKey_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf); \
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
	DECLARE_FUNCTION(execbpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_TopDownController__pf_5) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_TopDownController__pf_5(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__CastRef__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__CastRef__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__MoveToHitLocation__pf) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_bpp__Hit__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__MoveToHitLocation__pf(Z_Param_bpp__Hit__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_SetDestination_K2Node_InputActionEvent_8__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_SetDestination_K2Node_InputActionEvent_8__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_SetDestination_K2Node_InputActionEvent_7__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_SetDestination_K2Node_InputActionEvent_7__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Pan_K2Node_InputActionEvent_6__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Pan_K2Node_InputActionEvent_6__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Pan_K2Node_InputActionEvent_5__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Pan_K2Node_InputActionEvent_5__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Pan_K2Node_InputActionEvent_4__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Pan_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Pan_K2Node_InputActionEvent_3__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_Pan_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_2__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_ZoomOut_K2Node_InputActionEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_ZoomOut_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_NumericKey_K2Node_InputActionEvent_0__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_NumericKey_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf); \
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
	DECLARE_FUNCTION(execbpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_TopDownController__pf_5) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_TopDownController__pf_5(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_EVENT_PARMS \
	struct TopDownController_C__pf3669546605_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownController_C__pf3669546605(); \
	friend struct Z_Construct_UClass_ATopDownController_C__pf3669546605_Statics; \
public: \
	DECLARE_CLASS(ATopDownController_C__pf3669546605, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/Default/TopDownController"), NO_API) \
	DECLARE_SERIALIZER(ATopDownController_C__pf3669546605)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_INCLASS \
private: \
	static void StaticRegisterNativesATopDownController_C__pf3669546605(); \
	friend struct Z_Construct_UClass_ATopDownController_C__pf3669546605_Statics; \
public: \
	DECLARE_CLASS(ATopDownController_C__pf3669546605, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/Default/TopDownController"), NO_API) \
	DECLARE_SERIALIZER(ATopDownController_C__pf3669546605)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownController_C__pf3669546605(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownController_C__pf3669546605) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownController_C__pf3669546605); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownController_C__pf3669546605); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownController_C__pf3669546605(ATopDownController_C__pf3669546605&&); \
	NO_API ATopDownController_C__pf3669546605(const ATopDownController_C__pf3669546605&); \
public:


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownController_C__pf3669546605(ATopDownController_C__pf3669546605&&); \
	NO_API ATopDownController_C__pf3669546605(const ATopDownController_C__pf3669546605&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownController_C__pf3669546605); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownController_C__pf3669546605); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownController_C__pf3669546605)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_19_PROLOG \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_EVENT_PARMS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_RPC_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_INCLASS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_INCLASS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ATopDownController_C__pf3669546605>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_TopDownController__pf3669546605_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
