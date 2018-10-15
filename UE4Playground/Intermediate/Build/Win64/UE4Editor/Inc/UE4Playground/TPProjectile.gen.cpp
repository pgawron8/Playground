// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Playground/TPProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPProjectile() {}
// Cross Module References
	UE4PLAYGROUND_API UClass* Z_Construct_UClass_ATPProjectile_NoRegister();
	UE4PLAYGROUND_API UClass* Z_Construct_UClass_ATPProjectile();
	UE4PLAYGROUND_API UClass* Z_Construct_UClass_AUE4PlaygroundProjectile();
	UPackage* Z_Construct_UPackage__Script_UE4Playground();
// End Cross Module References
	void ATPProjectile::StaticRegisterNativesATPProjectile()
	{
	}
	UClass* Z_Construct_UClass_ATPProjectile_NoRegister()
	{
		return ATPProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ATPProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUE4PlaygroundProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Playground,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TPProjectile.h" },
		{ "ModuleRelativePath", "TPProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPProjectile_Statics::ClassParams = {
		&ATPProjectile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATPProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATPProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPProjectile, 3600998522);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPProjectile(Z_Construct_UClass_ATPProjectile, &ATPProjectile::StaticClass, TEXT("/Script/UE4Playground"), TEXT("ATPProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
