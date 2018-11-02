// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Playground/UE4PlaygroundCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4PlaygroundCharacter() {}
// Cross Module References
	UE4PLAYGROUND_API UEnum* Z_Construct_UEnum_UE4Playground_Eweapon();
	UPackage* Z_Construct_UPackage__Script_UE4Playground();
	UE4PLAYGROUND_API UClass* Z_Construct_UClass_AUE4PlaygroundCharacter_NoRegister();
	UE4PLAYGROUND_API UClass* Z_Construct_UClass_AUE4PlaygroundCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UE4PLAYGROUND_API UFunction* Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2();
	UE4PLAYGROUND_API UFunction* Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UE4PLAYGROUND_API UClass* Z_Construct_UClass_AUE4PlaygroundProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* Eweapon_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4Playground_Eweapon, Z_Construct_UPackage__Script_UE4Playground(), TEXT("Eweapon"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Eweapon(Eweapon_StaticEnum, TEXT("/Script/UE4Playground"), TEXT("Eweapon"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4Playground_Eweapon_CRC() { return 2676303108U; }
	UEnum* Z_Construct_UEnum_UE4Playground_Eweapon()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4Playground();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Eweapon"), 0, Get_Z_Construct_UEnum_UE4Playground_Eweapon_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Basic", (int64)Basic },
				{ "Burst", (int64)Burst },
				{ "Teleport", (int64)Teleport },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.DisplayName", "Basic" },
				{ "Burst.DisplayName", "Burst" },
				{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
				{ "Teleport.DisplayName", "Teleport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4Playground,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"Eweapon",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"Eweapon",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AUE4PlaygroundCharacter::StaticRegisterNativesAUE4PlaygroundCharacter()
	{
		UClass* Class = AUE4PlaygroundCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFire2", &AUE4PlaygroundCharacter::execOnFire2 },
			{ "SetGun", &AUE4PlaygroundCharacter::execSetGun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "setting up a burst shot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4PlaygroundCharacter, "OnFire2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics
	{
		struct UE4PlaygroundCharacter_eventSetGun_Parms
		{
			TEnumAsByte<Eweapon> GunToSet;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GunToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::NewProp_GunToSet = { UE4CodeGen_Private::EPropertyClass::Byte, "GunToSet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UE4PlaygroundCharacter_eventSetGun_Parms, GunToSet), Z_Construct_UEnum_UE4Playground_Eweapon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::NewProp_GunToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4PlaygroundCharacter, "SetGun", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(UE4PlaygroundCharacter_eventSetGun_Parms), Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUE4PlaygroundCharacter_NoRegister()
	{
		return AUE4PlaygroundCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUE4PlaygroundCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalActiveClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalActiveClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentActiveClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTPClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentTPClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBurstClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentBurstClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBasicClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentBasicClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingTPGun_MetaData[];
#endif
		static void NewProp_bIsUsingTPGun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingTPGun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumOfShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenBursts_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenBursts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTPShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastTPShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPProjClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TPProjClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltProjClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AltProjClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstBurstGrab_MetaData[];
#endif
		static void NewProp_bFirstBurstGrab_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstBurstGrab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstTPGrab_MetaData[];
#endif
		static void NewProp_bFirstTPGrab_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstTPGrab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBurstGunUnlocked_MetaData[];
#endif
		static void NewProp_bBurstGunUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBurstGunUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTPGunUnlocked_MetaData[];
#endif
		static void NewProp_bTPGunUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTPGunUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstGunMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurstGunMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPGunMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TPGunMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicGunMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BasicGunMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Playground,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUE4PlaygroundCharacter_OnFire2, "OnFire2" }, // 1106483391
		{ &Z_Construct_UFunction_AUE4PlaygroundCharacter_SetGun, "SetGun" }, // 643530688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UE4PlaygroundCharacter.h" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TotalActiveClip_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TotalActiveClip = { UE4CodeGen_Private::EPropertyClass::Int, "TotalActiveClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, TotalActiveClip), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TotalActiveClip_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TotalActiveClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentActiveClip_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentActiveClip = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentActiveClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, CurrentActiveClip), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentActiveClip_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentActiveClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentTPClip_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentTPClip = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentTPClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, CurrentTPClip), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentTPClip_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentTPClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBurstClip_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBurstClip = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentBurstClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, CurrentBurstClip), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBurstClip_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBurstClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBasicClip_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Current Gun Clips" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBasicClip = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentBasicClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, CurrentBasicClip), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBasicClip_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBasicClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Holder for current weapon type" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentWeapon = { UE4CodeGen_Private::EPropertyClass::Byte, "CurrentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, CurrentWeapon), Z_Construct_UEnum_UE4Playground_Eweapon, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bIsUsingTPGun_MetaData[] = {
		{ "Category", "TeleportGun" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "bool for checking if using TP Gun" },
	};
#endif
	void Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bIsUsingTPGun_SetBit(void* Obj)
	{
		((AUE4PlaygroundCharacter*)Obj)->bIsUsingTPGun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bIsUsingTPGun = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsUsingTPGun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUE4PlaygroundCharacter), &Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bIsUsingTPGun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bIsUsingTPGun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bIsUsingTPGun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_NumOfShots_MetaData[] = {
		{ "Category", "BurstShoot" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Number of shots in a burst" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_NumOfShots = { UE4CodeGen_Private::EPropertyClass::Int, "NumOfShots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, NumOfShots), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_NumOfShots_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_NumOfShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TimeBetweenBursts_MetaData[] = {
		{ "Category", "BurstShoot" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Time to set between each shot for burst" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TimeBetweenBursts = { UE4CodeGen_Private::EPropertyClass::Float, "TimeBetweenBursts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, TimeBetweenBursts), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TimeBetweenBursts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TimeBetweenBursts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AUE4PlaygroundCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bUsingMotionControllers = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsingMotionControllers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AUE4PlaygroundCharacter), &Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_LastTPShot_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Keeping track of last shot for TP so that you can't have two things to TP to at once)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_LastTPShot = { UE4CodeGen_Private::EPropertyClass::Object, "LastTPShot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, LastTPShot), Z_Construct_UClass_AUE4PlaygroundProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_LastTPShot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_LastTPShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPProjClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Projectile Class for TP proj" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPProjClass = { UE4CodeGen_Private::EPropertyClass::Class, "TPProjClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, TPProjClass), Z_Construct_UClass_AUE4PlaygroundProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPProjClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPProjClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_AltProjClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Projectile class to spawn  for alt fire" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_AltProjClass = { UE4CodeGen_Private::EPropertyClass::Class, "AltProjClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, AltProjClass), Z_Construct_UClass_AUE4PlaygroundProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_AltProjClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_AltProjClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, ProjectileClass), Z_Construct_UClass_AUE4PlaygroundProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstBurstGrab_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstBurstGrab_SetBit(void* Obj)
	{
		((AUE4PlaygroundCharacter*)Obj)->bFirstBurstGrab = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstBurstGrab = { UE4CodeGen_Private::EPropertyClass::Bool, "bFirstBurstGrab", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUE4PlaygroundCharacter), &Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstBurstGrab_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstBurstGrab_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstBurstGrab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstTPGrab_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstTPGrab_SetBit(void* Obj)
	{
		((AUE4PlaygroundCharacter*)Obj)->bFirstTPGrab = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstTPGrab = { UE4CodeGen_Private::EPropertyClass::Bool, "bFirstTPGrab", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUE4PlaygroundCharacter), &Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstTPGrab_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstTPGrab_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstTPGrab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bBurstGunUnlocked_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bBurstGunUnlocked_SetBit(void* Obj)
	{
		((AUE4PlaygroundCharacter*)Obj)->bBurstGunUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bBurstGunUnlocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bBurstGunUnlocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUE4PlaygroundCharacter), &Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bBurstGunUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bBurstGunUnlocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bBurstGunUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bTPGunUnlocked_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bTPGunUnlocked_SetBit(void* Obj)
	{
		((AUE4PlaygroundCharacter*)Obj)->bTPGunUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bTPGunUnlocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bTPGunUnlocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AUE4PlaygroundCharacter), &Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bTPGunUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bTPGunUnlocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bTPGunUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BurstGunMat_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Material for BurstGun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BurstGunMat = { UE4CodeGen_Private::EPropertyClass::Object, "BurstGunMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, BurstGunMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BurstGunMat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BurstGunMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPGunMat_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Material for TPGun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPGunMat = { UE4CodeGen_Private::EPropertyClass::Object, "TPGunMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, TPGunMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPGunMat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPGunMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BasicGunMat_MetaData[] = {
		{ "Category", "UE4PlaygroundCharacter" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Material for Basic gun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BasicGunMat = { UE4CodeGen_Private::EPropertyClass::Object, "BasicGunMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, BasicGunMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BasicGunMat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BasicGunMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UE4PlaygroundCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_L_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "L_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_L_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UE4PlaygroundCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_R_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "R_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_R_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "VR_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "VR_Gun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "FP_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "FP_Gun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4PlaygroundCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUE4PlaygroundCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_Mesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TotalActiveClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentActiveClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentTPClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBurstClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentBasicClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bIsUsingTPGun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_NumOfShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TimeBetweenBursts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_LastTPShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPProjClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_AltProjClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstBurstGrab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bFirstTPGrab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bBurstGunUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_bTPGunUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BurstGunMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_TPGunMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_BasicGunMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4PlaygroundCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::ClassParams = {
		&AUE4PlaygroundCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4PlaygroundCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4PlaygroundCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4PlaygroundCharacter, 1882053710);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4PlaygroundCharacter(Z_Construct_UClass_AUE4PlaygroundCharacter, &AUE4PlaygroundCharacter::StaticClass, TEXT("/Script/UE4Playground"), TEXT("AUE4PlaygroundCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4PlaygroundCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
