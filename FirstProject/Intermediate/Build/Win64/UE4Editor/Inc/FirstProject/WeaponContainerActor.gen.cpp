// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/WeaponContainerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponContainerActor() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AWeaponContainerActor_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AWeaponContainerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
// End Cross Module References
	void AWeaponContainerActor::StaticRegisterNativesAWeaponContainerActor()
	{
	}
	UClass* Z_Construct_UClass_AWeaponContainerActor_NoRegister()
	{
		return AWeaponContainerActor::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponContainerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponMap_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponContainerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponContainerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponContainerActor.h" },
		{ "ModuleRelativePath", "WeaponContainerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "WeaponContainerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap = { "WeaponMap", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponContainerActor, WeaponMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap_Key_KeyProp = { "WeaponMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap_ValueProp = { "WeaponMap", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponContainerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponContainerActor_Statics::NewProp_WeaponMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponContainerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponContainerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponContainerActor_Statics::ClassParams = {
		&AWeaponContainerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponContainerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponContainerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponContainerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponContainerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponContainerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponContainerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponContainerActor, 1035826168);
	template<> FIRSTPROJECT_API UClass* StaticClass<AWeaponContainerActor>()
	{
		return AWeaponContainerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponContainerActor(Z_Construct_UClass_AWeaponContainerActor, &AWeaponContainerActor::StaticClass, TEXT("/Script/FirstProject"), TEXT("AWeaponContainerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponContainerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
