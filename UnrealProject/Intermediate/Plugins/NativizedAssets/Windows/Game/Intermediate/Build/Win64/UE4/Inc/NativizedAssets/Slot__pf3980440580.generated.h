// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlotStruct__pf697489738;
#ifdef NATIVIZEDASSETS_Slot__pf3980440580_generated_h
#error "Slot__pf3980440580.generated.h already included, missing '#pragma once' in Slot__pf3980440580.h"
#endif
#define NATIVIZEDASSETS_Slot__pf3980440580_generated_h

#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UpdateSlot__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__SlotxIndex__pfT); \
		P_GET_STRUCT(FSlotStruct__pf697489738,Z_Param_bpp__Slot__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateSlot__pf(Z_Param_bpp__SlotxIndex__pfT,Z_Param_bpp__Slot__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Construct__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Construct__pf(); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UpdateSlot__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__SlotxIndex__pfT); \
		P_GET_STRUCT(FSlotStruct__pf697489738,Z_Param_bpp__Slot__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateSlot__pf(Z_Param_bpp__SlotxIndex__pfT,Z_Param_bpp__Slot__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Construct__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Construct__pf(); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_EVENT_PARMS
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_CALLBACK_WRAPPERS \
	void eventbpf__Construct__pf(); \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlot_C__pf3980440580(); \
	friend struct Z_Construct_UClass_USlot_C__pf3980440580_Statics; \
public: \
	DECLARE_CLASS(USlot_C__pf3980440580, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/Slot"), NO_API) \
	DECLARE_SERIALIZER(USlot_C__pf3980440580) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSlot_C__pf3980440580(); \
	friend struct Z_Construct_UClass_USlot_C__pf3980440580_Statics; \
public: \
	DECLARE_CLASS(USlot_C__pf3980440580, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/Slot"), NO_API) \
	DECLARE_SERIALIZER(USlot_C__pf3980440580) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlot_C__pf3980440580(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlot_C__pf3980440580) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlot_C__pf3980440580); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlot_C__pf3980440580); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlot_C__pf3980440580(USlot_C__pf3980440580&&); \
	NO_API USlot_C__pf3980440580(const USlot_C__pf3980440580&); \
public:


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlot_C__pf3980440580(USlot_C__pf3980440580&&); \
	NO_API USlot_C__pf3980440580(const USlot_C__pf3980440580&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlot_C__pf3980440580); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlot_C__pf3980440580); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlot_C__pf3980440580)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_10_PROLOG \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_EVENT_PARMS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_RPC_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_INCLASS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_INCLASS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class USlot_C__pf3980440580>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Slot__pf3980440580_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
