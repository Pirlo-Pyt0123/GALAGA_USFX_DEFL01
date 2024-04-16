// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_DEFL01/NaveEnemigaBombardera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaBombardera() {}
// Cross Module References
	GALAGA_USFX_DEFL01_API UClass* Z_Construct_UClass_ANaveEnemigaBombardera_NoRegister();
	GALAGA_USFX_DEFL01_API UClass* Z_Construct_UClass_ANaveEnemigaBombardera();
	GALAGA_USFX_DEFL01_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_DEFL01();
// End Cross Module References
	void ANaveEnemigaBombardera::StaticRegisterNativesANaveEnemigaBombardera()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaBombardera_NoRegister()
	{
		return ANaveEnemigaBombardera::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaBombardera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaBombardera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_DEFL01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaBombardera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaBombardera.h" },
		{ "ModuleRelativePath", "NaveEnemigaBombardera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaBombardera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaBombardera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaBombardera_Statics::ClassParams = {
		&ANaveEnemigaBombardera::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaBombardera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaBombardera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaBombardera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaBombardera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaBombardera, 814945090);
	template<> GALAGA_USFX_DEFL01_API UClass* StaticClass<ANaveEnemigaBombardera>()
	{
		return ANaveEnemigaBombardera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaBombardera(Z_Construct_UClass_ANaveEnemigaBombardera, &ANaveEnemigaBombardera::StaticClass, TEXT("/Script/GALAGA_USFX_DEFL01"), TEXT("ANaveEnemigaBombardera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaBombardera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
