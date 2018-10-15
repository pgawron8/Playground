// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4PLAYGROUND_UE4PlaygroundCharacter_generated_h
#error "UE4PlaygroundCharacter.generated.h already included, missing '#pragma once' in UE4PlaygroundCharacter.h"
#endif
#define UE4PLAYGROUND_UE4PlaygroundCharacter_generated_h

#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFire2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire2(); \
		P_NATIVE_END; \
	}


#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFire2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire2(); \
		P_NATIVE_END; \
	}


#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE4PlaygroundCharacter(); \
	friend struct Z_Construct_UClass_AUE4PlaygroundCharacter_Statics; \
public: \
	DECLARE_CLASS(AUE4PlaygroundCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Playground"), NO_API) \
	DECLARE_SERIALIZER(AUE4PlaygroundCharacter)


#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAUE4PlaygroundCharacter(); \
	friend struct Z_Construct_UClass_AUE4PlaygroundCharacter_Statics; \
public: \
	DECLARE_CLASS(AUE4PlaygroundCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Playground"), NO_API) \
	DECLARE_SERIALIZER(AUE4PlaygroundCharacter)


#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE4PlaygroundCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4PlaygroundCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4PlaygroundCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4PlaygroundCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4PlaygroundCharacter(AUE4PlaygroundCharacter&&); \
	NO_API AUE4PlaygroundCharacter(const AUE4PlaygroundCharacter&); \
public:


#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4PlaygroundCharacter(AUE4PlaygroundCharacter&&); \
	NO_API AUE4PlaygroundCharacter(const AUE4PlaygroundCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4PlaygroundCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4PlaygroundCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE4PlaygroundCharacter)


#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AUE4PlaygroundCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AUE4PlaygroundCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AUE4PlaygroundCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AUE4PlaygroundCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AUE4PlaygroundCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUE4PlaygroundCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AUE4PlaygroundCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AUE4PlaygroundCharacter, L_MotionController); }


#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_18_PROLOG
#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_RPC_WRAPPERS \
	UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_INCLASS \
	UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_INCLASS_NO_PURE_DECLS \
	UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Playground_Source_UE4Playground_UE4PlaygroundCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
