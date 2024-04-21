// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "FabricaPIRLOs.generated.h"

UCLASS()
class GALAGA_USFX_DEFL01_API AFabricaPIRLOs : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaPIRLOs();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual ANaveEnemiga* EnsambladoEnemigo(FString Cash) PURE_VIRTUAL(AFabricaPIRLOs::EnsambladoEnemigo, return nullptr;);
	ANaveEnemiga* VentaEnemigo;

};
