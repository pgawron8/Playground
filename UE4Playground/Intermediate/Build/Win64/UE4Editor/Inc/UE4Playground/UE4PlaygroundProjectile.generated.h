// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UE4PLAYGROUND_UE4PlaygroundProjectile_generated_h
#error "UE4PlaygroundProjectile.generated.h already included, missing '#pragma once' in UE4PlaygroundProjectile.h"
#endif
#define UE4PLAYGROUND_UE4PlaygroundProjectile_generated_h

#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE4PlaygroundProjectile(); \
	friend struct Z_Construct_UClass_AUE4PlaygroundProjectile_Statics; \
public: \
	DECLARE_CLASS(AUE4PlaygroundProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Playground"), NO_API) \
	DECLARE_SERIALIZER(AUE4PlaygroundProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUE4PlaygroundProjectile(); \
	friend struct Z_Construct_UClass_AUE4PlaygroundProjectile_Statics; \
public: \
	DECLARE_CLASS(AUE4PlaygroundProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Playground"), NO_API) \
	DECLARE_SERIALIZER(AUE4PlaygroundProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE4PlaygroundProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE4PlaygroundProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4PlaygroundProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4PlaygroundProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4PlaygroundProjectile(AUE4PlaygroundProjectile&&); \
	NO_API AUE4PlaygroundProjectile(const AUE4PlaygroundProjectile&); \
public:


#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE4PlaygroundProjectile(AUE4PlaygroundProjectile&&); \
	NO_API AUE4PlaygroundProjectile(const AUE4PlaygroundProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE4PlaygroundProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE4PlaygroundProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE4PlaygroundProjectile)


#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUE4PlaygroundProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUE4PlaygroundProjectile, ProjectileMovement); }


#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_9_PROLOG
#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_RPC_WRAPPERS \
	UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_INCLASS \
	UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_INCLASS_NO_PURE_DECLS \
	UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Playground_Source_UE4Playground_UE4PlaygroundProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
