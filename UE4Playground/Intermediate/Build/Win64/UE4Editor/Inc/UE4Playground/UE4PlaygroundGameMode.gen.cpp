// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Playground/UE4PlaygroundGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4PlaygroundGameMode() {}
// Cross Module References
	UE4PLAYGROUND_API UClass* Z_Construct_UClass_AUE4PlaygroundGameMode_NoRegister();
	UE4PLAYGROUND_API UClass* Z_Construct_UClass_AUE4PlaygroundGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4Playground();
// End Cross Module References
	void AUE4PlaygroundGameMode::StaticRegisterNativesAUE4PlaygroundGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUE4PlaygroundGameMode_NoRegister()
	{
		return AUE4PlaygroundGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE4PlaygroundGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4PlaygroundGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Playground,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4PlaygroundGameMode.h" },
		{ "ModuleRelativePath", "UE4PlaygroundGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4PlaygroundGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4PlaygroundGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4PlaygroundGameMode_Statics::ClassParams = {
		&AUE4PlaygroundGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4PlaygroundGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4PlaygroundGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4PlaygroundGameMode, 2532866295);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4PlaygroundGameMode(Z_Construct_UClass_AUE4PlaygroundGameMode, &AUE4PlaygroundGameMode::StaticClass, TEXT("/Script/UE4Playground"), TEXT("AUE4PlaygroundGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4PlaygroundGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
