// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SubirArriba.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_DEFL01_API USubirArriba : public UActorComponent
{
	GENERATED_BODY()
private:

	bool salto = false;
	bool altMax = false;
public:	
	// Sets default values for this component's properties
	USubirArriba();


	void jump();
	void joinJump(float DeltaTime);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
