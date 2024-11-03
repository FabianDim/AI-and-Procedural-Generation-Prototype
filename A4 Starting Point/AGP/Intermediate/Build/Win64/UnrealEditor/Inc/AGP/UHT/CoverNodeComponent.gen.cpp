// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Jays_Cover_Component/CoverNodeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoverNodeComponent() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UCoverNodeComponent();
	AGP_API UClass* Z_Construct_UClass_UCoverNodeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UCoverNodeComponent::StaticRegisterNativesUCoverNodeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoverNodeComponent);
	UClass* Z_Construct_UClass_UCoverNodeComponent_NoRegister()
	{
		return UCoverNodeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCoverNodeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOccupied_MetaData[];
#endif
		static void NewProp_bIsOccupied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOccupied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidCover_MetaData[];
#endif
		static void NewProp_bIsValidCover_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidCover;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoverNodeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoverNodeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Jays_Cover_Component/CoverNodeComponent.h" },
		{ "ModuleRelativePath", "Jays_Cover_Component/CoverNodeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsOccupied_MetaData[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Whether the cover is occupied or available\n" },
		{ "ModuleRelativePath", "Jays_Cover_Component/CoverNodeComponent.h" },
		{ "ToolTip", "Whether the cover is occupied or available" },
	};
#endif
	void Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsOccupied_SetBit(void* Obj)
	{
		((UCoverNodeComponent*)Obj)->bIsOccupied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsOccupied = { "bIsOccupied", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCoverNodeComponent), &Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsOccupied_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsOccupied_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsValidCover_MetaData[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Whether this cover node is valid for AI\n" },
		{ "ModuleRelativePath", "Jays_Cover_Component/CoverNodeComponent.h" },
		{ "ToolTip", "Whether this cover node is valid for AI" },
	};
#endif
	void Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsValidCover_SetBit(void* Obj)
	{
		((UCoverNodeComponent*)Obj)->bIsValidCover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsValidCover = { "bIsValidCover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCoverNodeComponent), &Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsValidCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsValidCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsValidCover_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_EnemyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Jays_Cover_Component/CoverNodeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCoverNodeComponent, EnemyCharacter), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_EnemyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_EnemyCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoverNodeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsOccupied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_bIsValidCover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoverNodeComponent_Statics::NewProp_EnemyCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoverNodeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoverNodeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoverNodeComponent_Statics::ClassParams = {
		&UCoverNodeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoverNodeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoverNodeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCoverNodeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoverNodeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoverNodeComponent()
	{
		if (!Z_Registration_Info_UClass_UCoverNodeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoverNodeComponent.OuterSingleton, Z_Construct_UClass_UCoverNodeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoverNodeComponent.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UCoverNodeComponent>()
	{
		return UCoverNodeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoverNodeComponent);
	UCoverNodeComponent::~UCoverNodeComponent() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Jays_Cover_Component_CoverNodeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Jays_Cover_Component_CoverNodeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoverNodeComponent, UCoverNodeComponent::StaticClass, TEXT("UCoverNodeComponent"), &Z_Registration_Info_UClass_UCoverNodeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoverNodeComponent), 4159639511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Jays_Cover_Component_CoverNodeComponent_h_2094750588(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Jays_Cover_Component_CoverNodeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Jays_Cover_Component_CoverNodeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
