// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_DEFL01/SubirArriba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubirArriba() {}
// Cross Module References
	GALAGA_USFX_DEFL01_API UClass* Z_Construct_UClass_USubirArriba_NoRegister();
	GALAGA_USFX_DEFL01_API UClass* Z_Construct_UClass_USubirArriba();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_DEFL01();
// End Cross Module References
	void USubirArriba::StaticRegisterNativesUSubirArriba()
	{
	}
	UClass* Z_Construct_UClass_USubirArriba_NoRegister()
	{
		return USubirArriba::StaticClass();
	}
	struct Z_Construct_UClass_USubirArriba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubirArriba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_DEFL01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubirArriba_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SubirArriba.h" },
		{ "ModuleRelativePath", "SubirArriba.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubirArriba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubirArriba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubirArriba_Statics::ClassParams = {
		&USubirArriba::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USubirArriba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubirArriba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubirArriba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubirArriba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubirArriba, 1508440708);
	template<> GALAGA_USFX_DEFL01_API UClass* StaticClass<USubirArriba>()
	{
		return USubirArriba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubirArriba(Z_Construct_UClass_USubirArriba, &USubirArriba::StaticClass, TEXT("/Script/GALAGA_USFX_DEFL01"), TEXT("USubirArriba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubirArriba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
