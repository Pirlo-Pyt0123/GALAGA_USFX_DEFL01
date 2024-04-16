// Fill out your copyright notice in the Description page of Project Settings.


#include "SubirArriba.h"

// Sets default values for this component's properties
USubirArriba::USubirArriba()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void USubirArriba::jump()
{
	salto = true;
	altMax = false;
}

void USubirArriba::joinJump(float DeltaTime)
{
    if (salto) {
        int velocidadZ = 1800;
        AActor* esta = GetOwner();
        if (!altMax) {
            if (esta->GetActorLocation().Z <= 900) {
                velocidadZ = 1000;
            }
            else {
                altMax = true;
            }
        }
        else {
            velocidadZ = 0;
            salto = false;
        }

        esta->SetActorLocation(FVector(int(esta->GetActorLocation().X), int(esta->GetActorLocation().Y), int(esta->GetActorLocation().Z) + velocidadZ * DeltaTime));
    }
}


// Called when the game starts
void USubirArriba::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USubirArriba::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    joinJump(DeltaTime);
	// ...
}

