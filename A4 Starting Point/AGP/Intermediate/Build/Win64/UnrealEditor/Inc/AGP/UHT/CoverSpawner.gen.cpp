// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/CoverSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoverSpawner() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ACoverSpawner();
	AGP_API UClass* Z_Construct_UClass_ACoverSpawner_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	DEFINE_FUNCTION(ACoverSpawner::execSpawnRandomCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnRandomCover();
		P_NATIVE_END;
	}
	void ACoverSpawner::StaticRegisterNativesACoverSpawner()
	{
		UClass* Class = ACoverSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnRandomCover", &ACoverSpawner::execSpawnRandomCover },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoverSpawner_SpawnRandomCover_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoverSpawner_SpawnRandomCover_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Function to spawn cover at random locations\n" },
		{ "ModuleRelativePath", "CoverSpawner.h" },
		{ "ToolTip", "Function to spawn cover at random locations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoverSpawner_SpawnRandomCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoverSpawner, nullptr, "SpawnRandomCover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoverSpawner_SpawnRandomCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoverSpawner_SpawnRandomCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoverSpawner_SpawnRandomCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoverSpawner_SpawnRandomCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoverSpawner);
	UClass* Z_Construct_UClass_ACoverSpawner_NoRegister()
	{
		return ACoverSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACoverSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoverActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CoverActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCoverPieces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCoverPieces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAreaMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnAreaMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAreaMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnAreaMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceBetweenCoverPieces_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceBetweenCoverPieces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoverSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoverSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoverSpawner_SpawnRandomCover, "SpawnRandomCover" }, // 21798264
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoverSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoverSpawner.h" },
		{ "ModuleRelativePath", "CoverSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoverSpawner_Statics::NewProp_CoverActorClass_MetaData[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Reference to the cover actor class to spawn\n" },
		{ "ModuleRelativePath", "CoverSpawner.h" },
		{ "ToolTip", "Reference to the cover actor class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoverSpawner_Statics::NewProp_CoverActorClass = { "CoverActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoverSpawner, CoverActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_CoverActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_CoverActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoverSpawner_Statics::NewProp_NumCoverPieces_MetaData[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Number of cover pieces to spawn\n" },
		{ "ModuleRelativePath", "CoverSpawner.h" },
		{ "ToolTip", "Number of cover pieces to spawn" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoverSpawner_Statics::NewProp_NumCoverPieces = { "NumCoverPieces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoverSpawner, NumCoverPieces), METADATA_PARAMS(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_NumCoverPieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_NumCoverPieces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMin_MetaData[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Boundaries for random cover spawn locations\n" },
		{ "ModuleRelativePath", "CoverSpawner.h" },
		{ "ToolTip", "Boundaries for random cover spawn locations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMin = { "SpawnAreaMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoverSpawner, SpawnAreaMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMax_MetaData[] = {
		{ "Category", "Cover" },
		{ "ModuleRelativePath", "CoverSpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMax = { "SpawnAreaMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoverSpawner, SpawnAreaMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoverSpawner_Statics::NewProp_MinDistanceBetweenCoverPieces_MetaData[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Minimum distance between cover pieces to avoid overlap\n" },
		{ "ModuleRelativePath", "CoverSpawner.h" },
		{ "ToolTip", "Minimum distance between cover pieces to avoid overlap" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoverSpawner_Statics::NewProp_MinDistanceBetweenCoverPieces = { "MinDistanceBetweenCoverPieces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACoverSpawner, MinDistanceBetweenCoverPieces), METADATA_PARAMS(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_MinDistanceBetweenCoverPieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoverSpawner_Statics::NewProp_MinDistanceBetweenCoverPieces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoverSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoverSpawner_Statics::NewProp_CoverActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoverSpawner_Statics::NewProp_NumCoverPieces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoverSpawner_Statics::NewProp_SpawnAreaMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoverSpawner_Statics::NewProp_MinDistanceBetweenCoverPieces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoverSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoverSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoverSpawner_Statics::ClassParams = {
		&ACoverSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoverSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoverSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoverSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoverSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoverSpawner()
	{
		if (!Z_Registration_Info_UClass_ACoverSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoverSpawner.OuterSingleton, Z_Construct_UClass_ACoverSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoverSpawner.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ACoverSpawner>()
	{
		return ACoverSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoverSpawner);
	ACoverSpawner::~ACoverSpawner() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_CoverSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_CoverSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoverSpawner, ACoverSpawner::StaticClass, TEXT("ACoverSpawner"), &Z_Registration_Info_UClass_ACoverSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoverSpawner), 3740456758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_CoverSpawner_h_2515740706(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_CoverSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_CoverSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
