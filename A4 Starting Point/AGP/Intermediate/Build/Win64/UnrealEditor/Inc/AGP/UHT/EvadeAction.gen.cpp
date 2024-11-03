// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/EvadeAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvadeAction() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UCoverNodeComponent_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UEvadeAction();
	AGP_API UClass* Z_Construct_UClass_UEvadeAction_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UFabiansSequence();
	AGP_API UClass* Z_Construct_UClass_UHealthCondition_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UPlayerDetectedCondition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UEvadeAction::StaticRegisterNativesUEvadeAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEvadeAction);
	UClass* Z_Construct_UClass_UEvadeAction_NoRegister()
	{
		return UEvadeAction::StaticClass();
	}
	struct Z_Construct_UClass_UEvadeAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDetected_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthCondition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoverNodeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoverNodeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEvadeAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fabians AI Component/EvadeAction.h" },
		{ "ModuleRelativePath", "Fabians AI Component/EvadeAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeAction_Statics::NewProp_PlayerDetected_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/EvadeAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvadeAction_Statics::NewProp_PlayerDetected = { "PlayerDetected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEvadeAction, PlayerDetected), Z_Construct_UClass_UPlayerDetectedCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvadeAction_Statics::NewProp_PlayerDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvadeAction_Statics::NewProp_PlayerDetected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeAction_Statics::NewProp_EnemyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/EvadeAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvadeAction_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEvadeAction, EnemyCharacter), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvadeAction_Statics::NewProp_EnemyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvadeAction_Statics::NewProp_EnemyCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeAction_Statics::NewProp_HealthCondition_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/EvadeAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvadeAction_Statics::NewProp_HealthCondition = { "HealthCondition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEvadeAction, HealthCondition), Z_Construct_UClass_UHealthCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvadeAction_Statics::NewProp_HealthCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvadeAction_Statics::NewProp_HealthCondition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvadeAction_Statics::NewProp_CoverNodeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fabians AI Component/EvadeAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvadeAction_Statics::NewProp_CoverNodeComponent = { "CoverNodeComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEvadeAction, CoverNodeComponent), Z_Construct_UClass_UCoverNodeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvadeAction_Statics::NewProp_CoverNodeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvadeAction_Statics::NewProp_CoverNodeComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEvadeAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvadeAction_Statics::NewProp_PlayerDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvadeAction_Statics::NewProp_EnemyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvadeAction_Statics::NewProp_HealthCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvadeAction_Statics::NewProp_CoverNodeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEvadeAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvadeAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEvadeAction_Statics::ClassParams = {
		&UEvadeAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEvadeAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEvadeAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEvadeAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEvadeAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEvadeAction()
	{
		if (!Z_Registration_Info_UClass_UEvadeAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEvadeAction.OuterSingleton, Z_Construct_UClass_UEvadeAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEvadeAction.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UEvadeAction>()
	{
		return UEvadeAction::StaticClass();
	}
	UEvadeAction::UEvadeAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEvadeAction);
	UEvadeAction::~UEvadeAction() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_EvadeAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_EvadeAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEvadeAction, UEvadeAction::StaticClass, TEXT("UEvadeAction"), &Z_Registration_Info_UClass_UEvadeAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEvadeAction), 2889057739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_EvadeAction_h_2840704726(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_EvadeAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_EvadeAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
