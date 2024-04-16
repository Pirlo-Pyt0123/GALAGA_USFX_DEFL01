// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaBombardera.h"
#include "NaveEnemigaBombarderaVuelo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_DEFL01_API ANaveEnemigaBombarderaVuelo : public ANaveEnemigaBombardera
{
	GENERATED_BODY()
	
private:
	int CantidadBombas;
	float tmpSuelto = 3;
	float tmpBomb = 0;
	bool soltar = false;
	UPROPERTY(VisibleAnywhere)
	int AleX;
	UPROPERTY(VisibleAnywhere)
	int AleY;

public:
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE int GetCantidadBombas() const { return CantidadBombas; }
	void soltarBomba(bool _soltar);




	FORCEINLINE void SetCantidadBombas(int _CantidadBombas) { CantidadBombas = _CantidadBombas; }
protected:
	virtual void Mover(float DeltaTime) override;
	virtual void Destruirse();
	virtual void Escapar();
};
