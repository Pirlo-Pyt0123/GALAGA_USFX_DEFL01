// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigos.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBombardera.h"

ANaveEnemiga* AFabricaEnemigos::EnsambladoEnemigo(FString Cash)
{
	if(Cash=="Caza")

	 return GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));

	else if(Cash=="Bombardera")
	 return GetWorld()->SpawnActor<ANaveEnemigaBombardera>(ANaveEnemigaBombardera::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));

	return nullptr;
}
