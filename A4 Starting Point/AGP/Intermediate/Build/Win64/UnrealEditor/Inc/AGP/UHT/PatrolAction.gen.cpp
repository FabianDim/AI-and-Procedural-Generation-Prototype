// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/PatrolAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolAction() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UFabiansSequence();
	AGP_API UClass* Z_Construct_UClass_UMoveToPlayerAction_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UPatrolAction();
	AGP_API UClass* Z_Construct_UClass_UPatrolAction_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UPlayerDetectedCondition_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UPlayerNotDetectedCondition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UPatrolAction::StaticRegisterNativesUPatrolAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatrolAction);
	UClass* Z_Construct_UClass_UPatrolAction_NoRegister()
	{
		return UPatrolAction::StaticClass();
	}
	struct Z_Construct_UClass_UPatrolAction_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNotDetectedCondition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerNotDetectedCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDetected_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveToPlayerAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveToPlayerAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatrolAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fabians AI Component/PatrolAction.h" },
		{ "ModuleRelativePath", "Fabians AI Component/PatrolAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolAction_Statics::NewProp_EnemyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PatrolAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolAction_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatrolAction, EnemyCharacter), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatrolAction_Statics::NewProp_EnemyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolAction_Statics::NewProp_EnemyCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PatrolAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatrolAction, PlayerCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerNotDetectedCondition_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PatrolAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerNotDetectedCondition = { "PlayerNotDetectedCondition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatrolAction, PlayerNotDetectedCondition), Z_Construct_UClass_UPlayerNotDetectedCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerNotDetectedCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerNotDetectedCondition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerDetected_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PatrolAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerDetected = { "PlayerDetected", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatrolAction, PlayerDetected), Z_Construct_UClass_UPlayerDetectedCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerDetected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolAction_Statics::NewProp_MoveToPlayerAction_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/PatrolAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolAction_Statics::NewProp_MoveToPlayerAction = { "MoveToPlayerAction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatrolAction, MoveToPlayerAction), Z_Construct_UClass_UMoveToPlayerAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatrolAction_Statics::NewProp_MoveToPlayerAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolAction_Statics::NewProp_MoveToPlayerAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatrolAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolAction_Statics::NewProp_EnemyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerNotDetectedCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolAction_Statics::NewProp_PlayerDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolAction_Statics::NewProp_MoveToPlayerAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatrolAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatrolAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatrolAction_Statics::ClassParams = {
		&UPatrolAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatrolAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPatrolAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatrolAction()
	{
		if (!Z_Registration_Info_UClass_UPatrolAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatrolAction.OuterSingleton, Z_Construct_UClass_UPatrolAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatrolAction.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UPatrolAction>()
	{
		return UPatrolAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatrolAction);
	UPatrolAction::~UPatrolAction() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_PatrolAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_PatrolAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPatrolAction, UPatrolAction::StaticClass, TEXT("UPatrolAction"), &Z_Registration_Info_UClass_UPatrolAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatrolAction), 805127999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_PatrolAction_h_689468202(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_PatrolAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_PatrolAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
