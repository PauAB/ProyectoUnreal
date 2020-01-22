// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NATIVIZEDASSETS_Build__pf1097354743_generated_h
#error "Build__pf1097354743.generated.h already included, missing '#pragma once' in Build__pf1097354743.h"
#endif
#define NATIVIZEDASSETS_Build__pf1097354743_generated_h

#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__Interact__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__Interactor__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Interact__pf(Z_Param_bpp__Interactor__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__Interact__pf) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_bpp__Interactor__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__Interact__pf(Z_Param_bpp__Interactor__pf); \
		P_NATIVE_END; \
	}


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_EVENT_PARMS \
	struct Build_C__pf1097354743_eventbpf__Interact__pf_Parms \
	{ \
		AActor* bpp__Interactor__pf; \
	};


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_CALLBACK_WRAPPERS \
	void eventbpf__Interact__pf(AActor* bpp__Interactor__pf); \



#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuild_C__pf1097354743(); \
	friend struct Z_Construct_UClass_ABuild_C__pf1097354743_Statics; \
public: \
	DECLARE_CLASS(ABuild_C__pf1097354743, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/Build"), NO_API) \
	DECLARE_SERIALIZER(ABuild_C__pf1097354743) \
	virtual UObject* _getUObject() const override { return const_cast<ABuild_C__pf1097354743*>(this); }


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABuild_C__pf1097354743(); \
	friend struct Z_Construct_UClass_ABuild_C__pf1097354743_Statics; \
public: \
	DECLARE_CLASS(ABuild_C__pf1097354743, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/TopDownBP/Blueprints/InventoryLogic/Builds/Build"), NO_API) \
	DECLARE_SERIALIZER(ABuild_C__pf1097354743) \
	virtual UObject* _getUObject() const override { return const_cast<ABuild_C__pf1097354743*>(this); }


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuild_C__pf1097354743(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuild_C__pf1097354743) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuild_C__pf1097354743); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuild_C__pf1097354743); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuild_C__pf1097354743(ABuild_C__pf1097354743&&); \
	NO_API ABuild_C__pf1097354743(const ABuild_C__pf1097354743&); \
public:


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuild_C__pf1097354743(ABuild_C__pf1097354743&&); \
	NO_API ABuild_C__pf1097354743(const ABuild_C__pf1097354743&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuild_C__pf1097354743); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuild_C__pf1097354743); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuild_C__pf1097354743)


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_10_PROLOG \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_EVENT_PARMS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_RPC_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_INCLASS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_CALLBACK_WRAPPERS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_INCLASS_NO_PURE_DECLS \
	UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABuild_C__pf1097354743>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Build__pf1097354743_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
