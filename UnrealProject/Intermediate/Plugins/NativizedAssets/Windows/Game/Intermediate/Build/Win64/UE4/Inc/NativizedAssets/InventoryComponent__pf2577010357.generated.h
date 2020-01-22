// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlotStruct__pf697489738;
#ifdef NATIVIZEDASSETS_InventoryComponent__pf2577010357_generated_h
#error "InventoryComponent__pf2577010357.generated.h already included, missing '#pragma once' in InventoryComponent__pf2577010357.h"
#endif
#define NATIVIZEDASSETS_InventoryComponent__pf2577010357_generated_h

#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__AddToStack__pf) \
	{ \
		P_GET_STRUCT(FSlotStruct__pf697489738,Z_Param_bpp__SlotStruct__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__SlotIndex__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__AddToStack__pf(Z_Param_bpp__SlotStruct__pf,Z_Param_bpp__SlotIndex__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CreateStack__pf) \
	{ \
		P_GET_STRUCT(FSlotStruct__pf697489738,Z_Param_bpp__ContentToAdd__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__CreateStack__pf(Z_Param_bpp__ContentToAdd__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PrepareInventory__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__PrepareInventory__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__AddToInventory__pf) \
	{ \
		P_GET_STRUCT(FSlotStruct__pf697489738,Z_Param_bpp__ContentToAdd__pf); \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Success__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__AddToInventory__pf(Z_Param_bpp__ContentToAdd__pf,Z_Param_Out_bpp__Success__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ToggleInventory__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ToggleInventory__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__AddToStack__pf) \
	{ \
		P_GET_STRUCT(FSlotStruct__pf697489738,Z_Param_bpp__SlotStruct__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__SlotIndex__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__AddToStack__pf(Z_Param_bpp__SlotStruct__pf,Z_Param_bpp__SlotIndex__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CreateStack__pf) \
	{ \
		P_GET_STRUCT(FSlotStruct__pf697489738,Z_Param_bpp__ContentToAdd__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__CreateStack__pf(Z_Param_bpp__ContentToAdd__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PrepareInventory__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__PrepareInventory__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__AddToInventory__pf) \
	{ \
		P_GET_STRUCT(FSlotStruct__pf697489738,Z_Param_bpp__ContentToAdd__pf); \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Success__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__AddToInventory__pf(Z_Param_bpp__ContentToAdd__pf,Z_Param_Out_bpp__Success__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ToggleInventory__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ToggleInventory__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_EVENT_PARMS
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent_C__pf2577010357(); \
	friend struct Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent_C__pf2577010357, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent_C__pf2577010357)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent_C__pf2577010357(); \
	friend struct Z_Construct_UClass_UInventoryComponent_C__pf2577010357_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent_C__pf2577010357, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/InventoryComponent"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent_C__pf2577010357)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent_C__pf2577010357(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent_C__pf2577010357) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent_C__pf2577010357); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent_C__pf2577010357); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent_C__pf2577010357(UInventoryComponent_C__pf2577010357&&); \
	NO_API UInventoryComponent_C__pf2577010357(const UInventoryComponent_C__pf2577010357&); \
public:


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent_C__pf2577010357(UInventoryComponent_C__pf2577010357&&); \
	NO_API UInventoryComponent_C__pf2577010357(const UInventoryComponent_C__pf2577010357&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent_C__pf2577010357); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent_C__pf2577010357); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent_C__pf2577010357)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_9_PROLOG \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_EVENT_PARMS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_RPC_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_INCLASS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_INCLASS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UInventoryComponent_C__pf2577010357>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_InventoryComponent__pf2577010357_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
