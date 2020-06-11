// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/ColliderMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColliderMovementComponent() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UColliderMovementComponent_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UColliderMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References
	void UColliderMovementComponent::StaticRegisterNativesUColliderMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UColliderMovementComponent_NoRegister()
	{
		return UColliderMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UColliderMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColliderMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColliderMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ColliderMovementComponent.h" },
		{ "ModuleRelativePath", "ColliderMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColliderMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColliderMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UColliderMovementComponent_Statics::ClassParams = {
		&UColliderMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UColliderMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColliderMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColliderMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UColliderMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UColliderMovementComponent, 952317341);
	template<> FIRSTPROJECT_API UClass* StaticClass<UColliderMovementComponent>()
	{
		return UColliderMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UColliderMovementComponent(Z_Construct_UClass_UColliderMovementComponent, &UColliderMovementComponent::StaticClass, TEXT("/Script/FirstProject"), TEXT("UColliderMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColliderMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
