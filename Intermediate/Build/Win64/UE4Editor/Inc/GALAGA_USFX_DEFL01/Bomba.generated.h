// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_USFX_DEFL01_Bomba_generated_h
#error "Bomba.generated.h already included, missing '#pragma once' in Bomba.h"
#endif
#define GALAGA_USFX_DEFL01_Bomba_generated_h

#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_SPARSE_DATA
#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFuncionDeManejoDeColision); \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFuncionDeManejoDeColision); \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomba(); \
	friend struct Z_Construct_UClass_ABomba_Statics; \
public: \
	DECLARE_CLASS(ABomba, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_USFX_DEFL01"), NO_API) \
	DECLARE_SERIALIZER(ABomba)


#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABomba(); \
	friend struct Z_Construct_UClass_ABomba_Statics; \
public: \
	DECLARE_CLASS(ABomba, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_USFX_DEFL01"), NO_API) \
	DECLARE_SERIALIZER(ABomba)


#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomba(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomba) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomba); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomba(ABomba&&); \
	NO_API ABomba(const ABomba&); \
public:


#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomba(ABomba&&); \
	NO_API ABomba(const ABomba&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomba); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomba)


#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplosionParticles() { return STRUCT_OFFSET(ABomba, ExplosionParticles); } \
	FORCEINLINE static uint32 __PPO__ExploSound() { return STRUCT_OFFSET(ABomba, ExploSound); }


#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_15_PROLOG
#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_PRIVATE_PROPERTY_OFFSET \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_SPARSE_DATA \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_RPC_WRAPPERS \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_INCLASS \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_PRIVATE_PROPERTY_OFFSET \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_SPARSE_DATA \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_INCLASS_NO_PURE_DECLS \
	GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_DEFL01_API UClass* StaticClass<class ABomba>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_USFX_DEFL01_Source_GALAGA_USFX_DEFL01_Bomba_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
