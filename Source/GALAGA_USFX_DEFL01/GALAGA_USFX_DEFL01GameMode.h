// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GALAGA_USFX_DEFL01GameMode.generated.h"


class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class ANaveEnemigaBombarderaVuelo;
UCLASS(MinimalAPI)
class AGALAGA_USFX_DEFL01GameMode : public AGameModeBase
{
	GENERATED_BODY()



public:
	AGALAGA_USFX_DEFL01GameMode();

public:
	ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	//ANaveEnemigaCaza* NaveEnemigaCaza01;
	//ANaveEnemigaBombarderaVuelo* NaveEnemigaBombarderaVuelo01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	TArray<ANaveEnemigaBombarderaVuelo*> TANavesEnemigasBombarderaVuelo;
	

	


private:
	//int TiempoTranscurrido;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};



