// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaBombardera.generated.h"


UCLASS()
class GALAGA_USFX_DEFL01_API ANaveEnemigaBombardera : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	bool almacenamientovacio = false;
public:
	ANaveEnemigaBombardera();
	FORCEINLINE bool GetAlmacenamientoVacio() const { return almacenamientovacio; }

	FORCEINLINE void SetAlmacenamientoVacio(bool _almacenamientovacio) { almacenamientovacio = _almacenamientovacio; }
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar(); //los transportistas no dispararan
	virtual void Destruirse();
	virtual void Escapar();
};
