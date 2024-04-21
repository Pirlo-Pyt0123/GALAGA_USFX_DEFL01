// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_DEFL01GameMode.h"
#include "GALAGA_USFX_DEFL01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "FabricaPIRLOs.h"
#include "FabricaEnemigos.h"
#include "NaveEnemigaBombarderaVuelo.h"

AGALAGA_USFX_DEFL01GameMode::AGALAGA_USFX_DEFL01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_DEFL01Pawn::StaticClass();
}

void AGALAGA_USFX_DEFL01GameMode::BeginPlay()
{
    Super::BeginPlay();
	float x = 1200;
	float y = -1000;
	//Set the game state to playing

	FVector ubicacionNave01 = FVector(x, y, 250.0f);
	FVector ubicacionNave02 = FVector(x, y + 200, 244.0f);
	FVector ubicacionNave03 = FVector(x, y + 400, 244.0f);
	FVector ubicacionNave04 = FVector(x, y + 600, 244.0f);
	FVector ubicacionNave05 = FVector(x, y + 800, 244.0f);
	x = 1000;
	FVector ubicacionNave06 = FVector(x, y + 800, 1500.0f);



	
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	





	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		//spawn naves enemigas pero en filas y columnas de cada clase
		AFabricaPIRLOs* factory = World->SpawnActor<AFabricaEnemigos>(AFabricaEnemigos::StaticClass());
		ANaveEnemiga* nave;
		nave = factory->EnsambladoEnemigo("Bombardera");



		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 2; j++) {
				FVector PosicionNaveActual = FVector(ubicacionNave01.X + j * 200, ubicacionNave01.Y + i * 300, ubicacionNave01.Z);
				 World->SpawnActor<ANaveEnemiga>(nave->GetClass(), PosicionNaveActual, rotacionNave);
				
			}
		}
		for (int i = 0; i < 1; i++) {
			for (int j = 0; j < 1; j++) {
				FVector PosicionNaveActual = FVector(ubicacionNave06.X + j * 200, ubicacionNave06.Y + i * 300, ubicacionNave06.Z);
				ANaveEnemigaBombarderaVuelo* NaveEnemigaBombarderaVueloTemporal = World->SpawnActor<ANaveEnemigaBombarderaVuelo>(PosicionNaveActual, rotacionNave);
				TANavesEnemigasBombarderaVuelo.Push(NaveEnemigaBombarderaVueloTemporal);
			}
		}





		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);

		//TiempoTranscurrido = 0;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));

	}
}




void AGALAGA_USFX_DEFL01GameMode::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
		

}

