// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGP_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define AGP_WeaponComponent_generated_h

#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponStats_Statics; \
	AGP_API static class UScriptStruct* StaticStruct();


template<> AGP_API UScriptStruct* StaticStruct<struct FWeaponStats>();

#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_SPARSE_DATA
#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_RPC_WRAPPERS \
	virtual void ServerReload_Implementation(); \
	virtual void ServerFire_Implementation(FVector const& BulletStart, FVector const& FireAtLocation); \
	virtual void MulticastFire_Implementation(FVector const& BulletStart, FVector const& HitLocation); \
 \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execUpdateAmmoUI);


#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerReload_Implementation(); \
	virtual void ServerFire_Implementation(FVector const& BulletStart, FVector const& FireAtLocation); \
	virtual void MulticastFire_Implementation(FVector const& BulletStart, FVector const& HitLocation); \
 \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execUpdateAmmoUI);


#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_ACCESSORS
#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_CALLBACK_WRAPPERS
#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponStats=NETFIELD_REP_START, \
		RoundsRemainingInMagazine, \
		NETFIELD_REP_END=RoundsRemainingInMagazine	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponStats=NETFIELD_REP_START, \
		RoundsRemainingInMagazine, \
		NETFIELD_REP_END=RoundsRemainingInMagazine	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	NO_API virtual ~UWeaponComponent();


#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent) \
	NO_API virtual ~UWeaponComponent();


#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_45_PROLOG
#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_SPARSE_DATA \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_RPC_WRAPPERS \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_ACCESSORS \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_CALLBACK_WRAPPERS \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_INCLASS \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_SPARSE_DATA \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_ACCESSORS \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_CALLBACK_WRAPPERS \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class UWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Characters_WeaponComponent_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Rifle) \
	op(EWeaponType::Pistol) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> AGP_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
