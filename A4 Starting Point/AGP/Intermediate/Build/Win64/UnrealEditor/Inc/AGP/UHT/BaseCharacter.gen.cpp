// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Characters/BaseCharacter.h"
#include "AGP/Characters/WeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ABaseCharacter();
	AGP_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	AGP_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponStats();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	DEFINE_FUNCTION(ABaseCharacter::execMulticastEquipWeapon)
	{
		P_GET_UBOOL(Z_Param_bEquipWeapon);
		P_GET_STRUCT(FWeaponStats,Z_Param_WeaponStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEquipWeapon_Implementation(Z_Param_bEquipWeapon,Z_Param_WeaponStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execHasWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasWeapon();
		P_NATIVE_END;
	}
	struct BaseCharacter_eventEquipWeaponGraphical_Parms
	{
		bool bEquipWeapon;
	};
	struct BaseCharacter_eventMulticastEquipWeapon_Parms
	{
		bool bEquipWeapon;
		FWeaponStats WeaponStats;
	};
	static FName NAME_ABaseCharacter_EquipWeaponGraphical = FName(TEXT("EquipWeaponGraphical"));
	void ABaseCharacter::EquipWeaponGraphical(bool bEquipWeapon)
	{
		BaseCharacter_eventEquipWeaponGraphical_Parms Parms;
		Parms.bEquipWeapon=bEquipWeapon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_EquipWeaponGraphical),&Parms);
	}
	static FName NAME_ABaseCharacter_FireWeaponGraphical = FName(TEXT("FireWeaponGraphical"));
	void ABaseCharacter::FireWeaponGraphical()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_FireWeaponGraphical),NULL);
	}
	static FName NAME_ABaseCharacter_MulticastEquipWeapon = FName(TEXT("MulticastEquipWeapon"));
	void ABaseCharacter::MulticastEquipWeapon(bool bEquipWeapon, FWeaponStats const& WeaponStats)
	{
		BaseCharacter_eventMulticastEquipWeapon_Parms Parms;
		Parms.bEquipWeapon=bEquipWeapon ? true : false;
		Parms.WeaponStats=WeaponStats;
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_MulticastEquipWeapon),&Parms);
	}
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasWeapon", &ABaseCharacter::execHasWeapon },
			{ "MulticastEquipWeapon", &ABaseCharacter::execMulticastEquipWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics
	{
		static void NewProp_bEquipWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::NewProp_bEquipWeapon_SetBit(void* Obj)
	{
		((BaseCharacter_eventEquipWeaponGraphical_Parms*)Obj)->bEquipWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::NewProp_bEquipWeapon = { "bEquipWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseCharacter_eventEquipWeaponGraphical_Parms), &Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::NewProp_bEquipWeapon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::NewProp_bEquipWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "EquipWeaponGraphical", nullptr, nullptr, sizeof(BaseCharacter_eventEquipWeaponGraphical_Parms), Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_FireWeaponGraphical_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_FireWeaponGraphical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_FireWeaponGraphical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "FireWeaponGraphical", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_FireWeaponGraphical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_FireWeaponGraphical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_FireWeaponGraphical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_FireWeaponGraphical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics
	{
		struct BaseCharacter_eventHasWeapon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseCharacter_eventHasWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseCharacter_eventHasWeapon_Parms), &Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "HasWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::BaseCharacter_eventHasWeapon_Parms), Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_HasWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics
	{
		static void NewProp_bEquipWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_bEquipWeapon_SetBit(void* Obj)
	{
		((BaseCharacter_eventMulticastEquipWeapon_Parms*)Obj)->bEquipWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_bEquipWeapon = { "bEquipWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseCharacter_eventMulticastEquipWeapon_Parms), &Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_bEquipWeapon_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_WeaponStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_WeaponStats = { "WeaponStats", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseCharacter_eventMulticastEquipWeapon_Parms, WeaponStats), Z_Construct_UScriptStruct_FWeaponStats, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_WeaponStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_WeaponStats_MetaData)) }; // 1643126721
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_bEquipWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_WeaponStats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "MulticastEquipWeapon", nullptr, nullptr, sizeof(BaseCharacter_eventMulticastEquipWeapon_Parms), Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletStartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletStartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical, "EquipWeaponGraphical" }, // 1712480279
		{ &Z_Construct_UFunction_ABaseCharacter_FireWeaponGraphical, "FireWeaponGraphical" }, // 2380736561
		{ &Z_Construct_UFunction_ABaseCharacter_HasWeapon, "HasWeapon" }, // 4237297528
		{ &Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon, "MulticastEquipWeapon" }, // 1891898966
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/BaseCharacter.h" },
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "Comment", "/**\n\x09 * A scene component to store the position that hit scan shots start from. For the enemy character this could\n\x09 * be placed close to the guns position for example and for the player character it can be placed close to the\n\x09 * camera position.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
		{ "ToolTip", "A scene component to store the position that hit scan shots start from. For the enemy character this could\nbe placed close to the guns position for example and for the player character it can be placed close to the\ncamera position." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition = { "BulletStartPosition", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseCharacter, BulletStartPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "Comment", "/**\n\x09 * A component that holds information about the health of the character. This component has functions\n\x09 * for damaging the character and healing the character.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
		{ "ToolTip", "A component that holds information about the health of the character. This component has functions\nfor damaging the character and healing the character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_WeaponComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * An actor component that controls the logic for this characters equipped weapon.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
		{ "ToolTip", "An actor component that controls the logic for this characters equipped weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_WeaponComponent = { "WeaponComponent", nullptr, (EPropertyFlags)0x0020080000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseCharacter, WeaponComponent), Z_Construct_UClass_UWeaponComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_WeaponComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_WeaponComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_WeaponComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
		&ABaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ABaseCharacter>()
	{
		return ABaseCharacter::StaticClass();
	}

	void ABaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WeaponComponent(TEXT("WeaponComponent"));

		const bool bIsValid = true
			&& Name_WeaponComponent == ClassReps[(int32)ENetFields_Private::WeaponComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
	ABaseCharacter::~ABaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_BaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_BaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 1648259698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_BaseCharacter_h_3085424896(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_BaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
