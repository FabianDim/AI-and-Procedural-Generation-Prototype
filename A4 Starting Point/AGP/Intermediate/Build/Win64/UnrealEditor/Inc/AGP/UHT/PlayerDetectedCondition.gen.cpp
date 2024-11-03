// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/PlayerDetectedCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerDetectedCondition() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UFabiansSequence();
	AGP_API UClass* Z_Construct_UClass_UPlayerDetectedCondition();
	AGP_API UClass* Z_Construct_UClass_UPlayerDetectedCondition_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UPlayerNotDetectedCondition();
	AGP_API UClass* Z_Construct_UClass_UPlayerNotDetectedCondition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UPlayerDetectedCondition::StaticRegisterNativesUPlayerDetectedCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerDetectedCondition);
	UClass* Z_Construct_UClass_UPlayerDetectedCondition_NoRegister()
	{
		return UPlayerDetectedCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerDetectedCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerDetectedCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDetectedCondition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fabians AI Component/PlayerDetectedCondition.h" },
		{ "ModuleRelativePath", "Fabians AI Component/PlayerDetectedCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_EnemyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PlayerDetectedCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerDetectedCondition, EnemyCharacter), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_EnemyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_EnemyCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PlayerDetectedCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerDetectedCondition, PlayerCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_PlayerCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerDetectedCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_EnemyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerDetectedCondition_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerDetectedCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerDetectedCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerDetectedCondition_Statics::ClassParams = {
		&UPlayerDetectedCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerDetectedCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDetectedCondition_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerDetectedCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDetectedCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerDetectedCondition()
	{
		if (!Z_Registration_Info_UClass_UPlayerDetectedCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerDetectedCondition.OuterSingleton, Z_Construct_UClass_UPlayerDetectedCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerDetectedCondition.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UPlayerDetectedCondition>()
	{
		return UPlayerDetectedCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerDetectedCondition);
	UPlayerDetectedCondition::~UPlayerDetectedCondition() {}
	void UPlayerNotDetectedCondition::StaticRegisterNativesUPlayerNotDetectedCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerNotDetectedCondition);
	UClass* Z_Construct_UClass_UPlayerNotDetectedCondition_NoRegister()
	{
		return UPlayerNotDetectedCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerNotDetectedCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fabians AI Component/PlayerDetectedCondition.h" },
		{ "ModuleRelativePath", "Fabians AI Component/PlayerDetectedCondition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_EnemyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PlayerDetectedCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerNotDetectedCondition, EnemyCharacter), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_EnemyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_EnemyCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PlayerDetectedCondition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerNotDetectedCondition, PlayerCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_PlayerCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_EnemyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerNotDetectedCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::ClassParams = {
		&UPlayerNotDetectedCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerNotDetectedCondition()
	{
		if (!Z_Registration_Info_UClass_UPlayerNotDetectedCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerNotDetectedCondition.OuterSingleton, Z_Construct_UClass_UPlayerNotDetectedCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerNotDetectedCondition.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UPlayerNotDetectedCondition>()
	{
		return UPlayerNotDetectedCondition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerNotDetectedCondition);
	UPlayerNotDetectedCondition::~UPlayerNotDetectedCondition() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_PlayerDetectedCondition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_PlayerDetectedCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerDetectedCondition, UPlayerDetectedCondition::StaticClass, TEXT("UPlayerDetectedCondition"), &Z_Registration_Info_UClass_UPlayerDetectedCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerDetectedCondition), 2428439366U) },
		{ Z_Construct_UClass_UPlayerNotDetectedCondition, UPlayerNotDetectedCondition::StaticClass, TEXT("UPlayerNotDetectedCondition"), &Z_Registration_Info_UClass_UPlayerNotDetectedCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerNotDetectedCondition), 368163089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_PlayerDetectedCondition_h_2367436936(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_PlayerDetectedCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_PlayerDetectedCondition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
