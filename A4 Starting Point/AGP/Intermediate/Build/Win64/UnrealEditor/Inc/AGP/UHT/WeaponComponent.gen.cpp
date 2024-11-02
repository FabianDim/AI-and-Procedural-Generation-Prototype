// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Characters/WeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UWeaponComponent();
	AGP_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	AGP_API UEnum* Z_Construct_UEnum_AGP_EWeaponType();
	AGP_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponStats();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AGP_EWeaponType, (UObject*)Z_Construct_UPackage__Script_AGP(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> AGP_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_AGP_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AGP_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::Rifle", (int64)EWeaponType::Rifle },
		{ "EWeaponType::Pistol", (int64)EWeaponType::Pistol },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AGP_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
		{ "Pistol.Name", "EWeaponType::Pistol" },
		{ "Rifle.Name", "EWeaponType::Rifle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AGP_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AGP,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_AGP_EWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AGP_EWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AGP_EWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AGP_EWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AGP_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_AGP_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponStats;
class UScriptStruct* FWeaponStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponStats, (UObject*)Z_Construct_UPackage__Script_AGP(), TEXT("WeaponStats"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponStats.OuterSingleton;
}
template<> AGP_API UScriptStruct* StaticStruct<FWeaponStats>()
{
	return FWeaponStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponStats>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MagazineSize_MetaData[] = {
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponStats, MagazineSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MagazineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MagazineSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MagazineSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
		nullptr,
		&NewStructOps,
		"WeaponStats",
		sizeof(FWeaponStats),
		alignof(FWeaponStats),
		Z_Construct_UScriptStruct_FWeaponStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponStats()
	{
		if (!Z_Registration_Info_UScriptStruct_WeaponStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponStats.InnerSingleton, Z_Construct_UScriptStruct_FWeaponStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponStats.InnerSingleton;
	}
	DEFINE_FUNCTION(UWeaponComponent::execServerReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execServerFire)
	{
		P_GET_STRUCT(FVector,Z_Param_BulletStart);
		P_GET_STRUCT(FVector,Z_Param_FireAtLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFire_Implementation(Z_Param_BulletStart,Z_Param_FireAtLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execMulticastFire)
	{
		P_GET_STRUCT(FVector,Z_Param_BulletStart);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation(Z_Param_BulletStart,Z_Param_HitLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execUpdateAmmoUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAmmoUI();
		P_NATIVE_END;
	}
	struct WeaponComponent_eventMulticastFire_Parms
	{
		FVector BulletStart;
		FVector HitLocation;
	};
	struct WeaponComponent_eventServerFire_Parms
	{
		FVector BulletStart;
		FVector FireAtLocation;
	};
	static FName NAME_UWeaponComponent_MulticastFire = FName(TEXT("MulticastFire"));
	void UWeaponComponent::MulticastFire(FVector const& BulletStart, FVector const& HitLocation)
	{
		WeaponComponent_eventMulticastFire_Parms Parms;
		Parms.BulletStart=BulletStart;
		Parms.HitLocation=HitLocation;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponComponent_MulticastFire),&Parms);
	}
	static FName NAME_UWeaponComponent_ServerFire = FName(TEXT("ServerFire"));
	void UWeaponComponent::ServerFire(FVector const& BulletStart, FVector const& FireAtLocation)
	{
		WeaponComponent_eventServerFire_Parms Parms;
		Parms.BulletStart=BulletStart;
		Parms.FireAtLocation=FireAtLocation;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponComponent_ServerFire),&Parms);
	}
	static FName NAME_UWeaponComponent_ServerReload = FName(TEXT("ServerReload"));
	void UWeaponComponent::ServerReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_UWeaponComponent_ServerReload),NULL);
	}
	void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
	{
		UClass* Class = UWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastFire", &UWeaponComponent::execMulticastFire },
			{ "ServerFire", &UWeaponComponent::execServerFire },
			{ "ServerReload", &UWeaponComponent::execServerReload },
			{ "UpdateAmmoUI", &UWeaponComponent::execUpdateAmmoUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BulletStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_BulletStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_BulletStart = { "BulletStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventMulticastFire_Parms, BulletStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_BulletStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_BulletStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventMulticastFire_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_HitLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_BulletStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::NewProp_HitLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "MulticastFire", nullptr, nullptr, sizeof(WeaponComponent_eventMulticastFire_Parms), Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_MulticastFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BulletStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAtLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireAtLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_BulletStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_BulletStart = { "BulletStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventServerFire_Parms, BulletStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_BulletStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_BulletStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_FireAtLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_FireAtLocation = { "FireAtLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventServerFire_Parms, FireAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_FireAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_FireAtLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_BulletStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::NewProp_FireAtLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "ServerFire", nullptr, nullptr, sizeof(WeaponComponent_eventServerFire_Parms), Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_ServerReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_ServerReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "ServerReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_ServerReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ServerReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_ServerReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_ServerReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_UpdateAmmoUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_UpdateAmmoUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_UpdateAmmoUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "UpdateAmmoUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_UpdateAmmoUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_UpdateAmmoUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_UpdateAmmoUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_UpdateAmmoUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponent);
	UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
	{
		return UWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundsRemainingInMagazine_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoundsRemainingInMagazine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_MulticastFire, "MulticastFire" }, // 1317955051
		{ &Z_Construct_UFunction_UWeaponComponent_ServerFire, "ServerFire" }, // 1804802454
		{ &Z_Construct_UFunction_UWeaponComponent_ServerReload, "ServerReload" }, // 2150324710
		{ &Z_Construct_UFunction_UWeaponComponent_UpdateAmmoUI, "UpdateAmmoUI" }, // 518960390
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/WeaponComponent.h" },
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponStats_MetaData[] = {
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponStats = { "WeaponStats", "UpdateAmmoUI", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, WeaponStats), Z_Construct_UScriptStruct_FWeaponStats, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponStats_MetaData)) }; // 1643126721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_RoundsRemainingInMagazine_MetaData[] = {
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_RoundsRemainingInMagazine = { "RoundsRemainingInMagazine", "UpdateAmmoUI", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, RoundsRemainingInMagazine), METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_RoundsRemainingInMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_RoundsRemainingInMagazine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_RoundsRemainingInMagazine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
		&UWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UWeaponComponent>()
	{
		return UWeaponComponent::StaticClass();
	}

	void UWeaponComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WeaponStats(TEXT("WeaponStats"));
		static const FName Name_RoundsRemainingInMagazine(TEXT("RoundsRemainingInMagazine"));

		const bool bIsValid = true
			&& Name_WeaponStats == ClassReps[(int32)ENetFields_Private::WeaponStats].Property->GetFName()
			&& Name_RoundsRemainingInMagazine == ClassReps[(int32)ENetFields_Private::RoundsRemainingInMagazine].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
	UWeaponComponent::~UWeaponComponent() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1388443149U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ScriptStructInfo[] = {
		{ FWeaponStats::StaticStruct, Z_Construct_UScriptStruct_FWeaponStats_Statics::NewStructOps, TEXT("WeaponStats"), &Z_Registration_Info_UScriptStruct_WeaponStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponStats), 1643126721U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 3879356622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_4262691446(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
