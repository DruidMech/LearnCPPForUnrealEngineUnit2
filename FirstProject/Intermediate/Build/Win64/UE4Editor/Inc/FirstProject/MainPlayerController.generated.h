// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define FIRSTPROJECT_MainPlayerController_generated_h

#define FirstProject_Source_FirstProject_MainPlayerController_h_15_SPARSE_DATA
#define FirstProject_Source_FirstProject_MainPlayerController_h_15_RPC_WRAPPERS \
	virtual void RemovePauseMenu_Implementation(); \
	virtual void DisplayPauseMenu_Implementation(); \
 \
	DECLARE_FUNCTION(execTogglePauseMenu); \
	DECLARE_FUNCTION(execRemovePauseMenu); \
	DECLARE_FUNCTION(execDisplayPauseMenu);


#define FirstProject_Source_FirstProject_MainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemovePauseMenu_Implementation(); \
	virtual void DisplayPauseMenu_Implementation(); \
 \
	DECLARE_FUNCTION(execTogglePauseMenu); \
	DECLARE_FUNCTION(execRemovePauseMenu); \
	DECLARE_FUNCTION(execDisplayPauseMenu);


#define FirstProject_Source_FirstProject_MainPlayerController_h_15_EVENT_PARMS
#define FirstProject_Source_FirstProject_MainPlayerController_h_15_CALLBACK_WRAPPERS
#define FirstProject_Source_FirstProject_MainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FirstProject_Source_FirstProject_MainPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FirstProject_Source_FirstProject_MainPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public:


#define FirstProject_Source_FirstProject_MainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayerController)


#define FirstProject_Source_FirstProject_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define FirstProject_Source_FirstProject_MainPlayerController_h_12_PROLOG \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_EVENT_PARMS


#define FirstProject_Source_FirstProject_MainPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_SPARSE_DATA \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_RPC_WRAPPERS \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_CALLBACK_WRAPPERS \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_INCLASS \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstProject_Source_FirstProject_MainPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_SPARSE_DATA \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_CALLBACK_WRAPPERS \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_MainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstProject_Source_FirstProject_MainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
