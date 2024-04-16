// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaBombardera.h"

ANaveEnemigaBombardera::ANaveEnemigaBombardera()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_90.Shape_Pipe_90'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaBombardera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ANaveEnemigaBombardera::Mover(float DeltaTime)
{
	/*velocidad = 1;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));*/
}

void ANaveEnemigaBombardera::Disparar()
{

}

void ANaveEnemigaBombardera::Destruirse()
{

}

void ANaveEnemigaBombardera::Escapar()
{

}
