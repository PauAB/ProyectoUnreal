// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_GameHUD__pf3980440580_generated_h
#error "GameHUD__pf3980440580.generated.h already included, missing '#pragma once' in GameHUD__pf3980440580.h"
#endif
#define NATIVIZEDASSETS_GameHUD__pf3980440580_generated_h

#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__RemoveDialogue__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RemoveDialogue__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetDialogue__pf) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_bpp__Text__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetDialogue__pf(Z_Param_Out_bpp__Text__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateDay__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__Days__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__Temp__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateDay__pf(Z_Param_bpp__Days__pf,Z_Param_bpp__Temp__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RemoveText__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RemoveText__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetText__pf) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_bpp__Text__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetText__pf(Z_Param_Out_bpp__Text__pf__const); \
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


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__RemoveDialogue__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RemoveDialogue__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetDialogue__pf) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_bpp__Text__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetDialogue__pf(Z_Param_Out_bpp__Text__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdateDay__pf) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__Days__pf); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__Temp__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__UpdateDay__pf(Z_Param_bpp__Days__pf,Z_Param_bpp__Temp__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__RemoveText__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__RemoveText__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetText__pf) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_bpp__Text__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__SetText__pf(Z_Param_Out_bpp__Text__pf__const); \
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


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_EVENT_PARMS
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_CALLBACK_WRAPPERS \
	void eventbpf__Construct__pf(); \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameHUD_C__pf3980440580(); \
	friend struct Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics; \
public: \
	DECLARE_CLASS(UGameHUD_C__pf3980440580, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD_C__pf3980440580) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGameHUD_C__pf3980440580(); \
	friend struct Z_Construct_UClass_UGameHUD_C__pf3980440580_Statics; \
public: \
	DECLARE_CLASS(UGameHUD_C__pf3980440580, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/UI/GameHUD"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD_C__pf3980440580) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHUD_C__pf3980440580(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHUD_C__pf3980440580) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHUD_C__pf3980440580); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHUD_C__pf3980440580); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHUD_C__pf3980440580(UGameHUD_C__pf3980440580&&); \
	NO_API UGameHUD_C__pf3980440580(const UGameHUD_C__pf3980440580&); \
public:


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHUD_C__pf3980440580(UGameHUD_C__pf3980440580&&); \
	NO_API UGameHUD_C__pf3980440580(const UGameHUD_C__pf3980440580&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHUD_C__pf3980440580); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHUD_C__pf3980440580); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHUD_C__pf3980440580)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_8_PROLOG \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_EVENT_PARMS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_RPC_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_INCLASS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_INCLASS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UGameHUD_C__pf3980440580>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_GameHUD__pf3980440580_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
