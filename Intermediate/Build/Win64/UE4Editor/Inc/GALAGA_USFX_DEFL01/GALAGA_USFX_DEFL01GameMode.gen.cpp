// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_DEFL01/GALAGA_USFX_DEFL01GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGALAGA_USFX_DEFL01GameMode() {}
// Cross Module References
	GALAGA_USFX_DEFL01_API UClass* Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_NoRegister();
	GALAGA_USFX_DEFL01_API UClass* Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_DEFL01();
// End Cross Module References
	void AGALAGA_USFX_DEFL01GameMode::StaticRegisterNativesAGALAGA_USFX_DEFL01GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_NoRegister()
	{
		return AGALAGA_USFX_DEFL01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_DEFL01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GALAGA_USFX_DEFL01GameMode.h" },
		{ "ModuleRelativePath", "GALAGA_USFX_DEFL01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGALAGA_USFX_DEFL01GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_Statics::ClassParams = {
		&AGALAGA_USFX_DEFL01GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGALAGA_USFX_DEFL01GameMode, 3492281405);
	template<> GALAGA_USFX_DEFL01_API UClass* StaticClass<AGALAGA_USFX_DEFL01GameMode>()
	{
		return AGALAGA_USFX_DEFL01GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGALAGA_USFX_DEFL01GameMode(Z_Construct_UClass_AGALAGA_USFX_DEFL01GameMode, &AGALAGA_USFX_DEFL01GameMode::StaticClass, TEXT("/Script/GALAGA_USFX_DEFL01"), TEXT("AGALAGA_USFX_DEFL01GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGALAGA_USFX_DEFL01GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
