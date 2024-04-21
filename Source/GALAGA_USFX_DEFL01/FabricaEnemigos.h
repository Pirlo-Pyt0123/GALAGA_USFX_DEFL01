// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaPIRLOs.h"
#include "FabricaEnemigos.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_DEFL01_API AFabricaEnemigos : public AFabricaPIRLOs
{
	GENERATED_BODY()
	
public:
	virtual ANaveEnemiga* EnsambladoEnemigo(FString Cash) override;

	

};
