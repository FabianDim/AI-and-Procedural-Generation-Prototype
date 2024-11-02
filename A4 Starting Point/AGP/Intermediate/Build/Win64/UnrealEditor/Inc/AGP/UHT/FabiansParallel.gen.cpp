// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/Unused Classes/FabiansParallel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabiansParallel() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UFabiansComposite();
	AGP_API UClass* Z_Construct_UClass_UFabiansParallel();
	AGP_API UClass* Z_Construct_UClass_UFabiansParallel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UFabiansParallel::StaticRegisterNativesUFabiansParallel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabiansParallel);
	UClass* Z_Construct_UClass_UFabiansParallel_NoRegister()
	{
		return UFabiansParallel::StaticClass();
	}
	struct Z_Construct_UClass_UFabiansParallel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFabiansParallel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansComposite,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFabiansParallel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fabians AI Component/Unused Classes/FabiansParallel.h" },
		{ "ModuleRelativePath", "Fabians AI Component/Unused Classes/FabiansParallel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFabiansParallel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabiansParallel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabiansParallel_Statics::ClassParams = {
		&UFabiansParallel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFabiansParallel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFabiansParallel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFabiansParallel()
	{
		if (!Z_Registration_Info_UClass_UFabiansParallel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabiansParallel.OuterSingleton, Z_Construct_UClass_UFabiansParallel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFabiansParallel.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UFabiansParallel>()
	{
		return UFabiansParallel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFabiansParallel);
	UFabiansParallel::~UFabiansParallel() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansParallel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansParallel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFabiansParallel, UFabiansParallel::StaticClass, TEXT("UFabiansParallel"), &Z_Registration_Info_UClass_UFabiansParallel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabiansParallel), 3914792087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansParallel_h_2725589889(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansParallel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansParallel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
