// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATopDownCharacter_C__pf3669546605;
class AActor;
#ifdef NATIVIZEDASSETS_Item__pf199495785_generated_h
#error "Item__pf199495785.generated.h already included, missing '#pragma once' in Item__pf199495785.h"
#endif
#define NATIVIZEDASSETS_Item__pf199495785_generated_h

#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__DestroyItem__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DestroyItem__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InventoryFull__pf) \
	{ \
		P_GET_OBJECT(ATopDownCharacter_C__pf3669546605,Z_Param_bpp__CharRef__pf); \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Full__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InventoryFull__pf(Z_Param_bpp__CharRef__pf,Z_Param_Out_bpp__Full__pf); \
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
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Item__pf_0) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_Item__pf_0(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__DestroyItem__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__DestroyItem__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InventoryFull__pf) \
	{ \
		P_GET_OBJECT(ATopDownCharacter_C__pf3669546605,Z_Param_bpp__CharRef__pf); \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Full__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InventoryFull__pf(Z_Param_bpp__CharRef__pf,Z_Param_Out_bpp__Full__pf); \
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
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Item__pf_0) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ExecuteUbergraph_Item__pf_0(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_EVENT_PARMS \
	struct Item_C__pf199495785_eventbpf__Interact__pf_Parms \
	{ \
		AActor* bpp__Interactor__pf; \
	};


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_CALLBACK_WRAPPERS \
	void eventbpf__Interact__pf(AActor* bpp__Interactor__pf); \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem_C__pf199495785(); \
	friend struct Z_Construct_UClass_AItem_C__pf199495785_Statics; \
public: \
	DECLARE_CLASS(AItem_C__pf199495785, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item"), NO_API) \
	DECLARE_SERIALIZER(AItem_C__pf199495785) \
	virtual UObject* _getUObject() const override { return const_cast<AItem_C__pf199495785*>(this); }


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAItem_C__pf199495785(); \
	friend struct Z_Construct_UClass_AItem_C__pf199495785_Statics; \
public: \
	DECLARE_CLASS(AItem_C__pf199495785, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Selectable/Item"), NO_API) \
	DECLARE_SERIALIZER(AItem_C__pf199495785) \
	virtual UObject* _getUObject() const override { return const_cast<AItem_C__pf199495785*>(this); }


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem_C__pf199495785(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem_C__pf199495785) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem_C__pf199495785); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem_C__pf199495785); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem_C__pf199495785(AItem_C__pf199495785&&); \
	NO_API AItem_C__pf199495785(const AItem_C__pf199495785&); \
public:


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem_C__pf199495785(AItem_C__pf199495785&&); \
	NO_API AItem_C__pf199495785(const AItem_C__pf199495785&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem_C__pf199495785); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem_C__pf199495785); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem_C__pf199495785)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_14_PROLOG \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_EVENT_PARMS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_RPC_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_INCLASS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_INCLASS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AItem_C__pf199495785>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Item__pf199495785_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
