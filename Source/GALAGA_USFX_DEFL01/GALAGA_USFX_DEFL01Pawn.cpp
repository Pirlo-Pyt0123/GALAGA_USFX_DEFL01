// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_DEFL01Pawn.h"
#include "GALAGA_USFX_DEFL01Projectile.h"
#include "TimerManager.h"
#include "Bomba.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

const FName AGALAGA_USFX_DEFL01Pawn::MoveForwardBinding("MoveForward");
const FName AGALAGA_USFX_DEFL01Pawn::MoveRightBinding("MoveRight");
const FName AGALAGA_USFX_DEFL01Pawn::FireForwardBinding("FireForward");
const FName AGALAGA_USFX_DEFL01Pawn::FireRightBinding("FireRight");

AGALAGA_USFX_DEFL01Pawn::AGALAGA_USFX_DEFL01Pawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

	// Saltar
	Subir = CreateDefaultSubobject<USubirArriba>(TEXT("Move"));
}

void AGALAGA_USFX_DEFL01Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);

	FInputActionKeyMapping Sube("Jump", EKeys::T, 0, 0, 0, 0);
	//FInputActionKeyMapping Soltar("Soltar", EKeys::B, 0, 0, 0, 0);
	

	UPlayerInput::AddEngineDefinedActionMapping(Sube);
	//UPlayerInput::AddEngineDefinedActionMapping(Soltar);


	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AGALAGA_USFX_DEFL01Pawn::Saltar);
    //PlayerInputComponent->BindAction("Soltar", IE_Released, this, &AGALAGA_USFX_DEFL01Pawn::Soltar);

}

void AGALAGA_USFX_DEFL01Pawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShotDown(FireDirection);
}

//void AGALAGA_USFX_DEFL01Pawn::FireShot(FVector FireDirection)
//{
//	// If it's ok to fire again
//	if (bCanFire == true)
//	{
//		// If we are pressing fire stick in a direction
//		if (FireDirection.SizeSquared() > 0.0f)
//		{
//			const FRotator FireRotation = FireDirection.Rotation();
//			// Spawn projectile at an offset from this pawn
//			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
//
//			UWorld* const World = GetWorld();
//			if (World != nullptr)
//			{
//				// spawn the projectile
//				World->SpawnActor<AGALAGA_USFX_DEFL01Projectile>(SpawnLocation, FireRotation);
//			}
//
//			bCanFire = false;
//			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGALAGA_USFX_DEFL01Pawn::ShotTimerExpired, FireRate);
//
//			// try and play the sound if specified
//			if (FireSound != nullptr)
//			{
//				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
//			}
//
//			bCanFire = false;
//		}
//	}
//}

void AGALAGA_USFX_DEFL01Pawn::ShotTimerExpired()
{
	bCanFire = true;
}



void AGALAGA_USFX_DEFL01Pawn::FireShotDown(FVector FireDirection)
{
    // If it's ok to fire again
    if (bCanFire == true)
    {
    // If we are pressing fire stick in a direction
    if (FireDirection.SizeSquared() > 0.0f)
    {
    const FRotator FireRotation = FRotator(180.f, 0.f, 0.f); // Set the rotation to shoot downwards
    // Spawn projectile at an offset from this pawn
	FVector SpawnLocation = GetActorLocation() + FVector(-100, 0, -150) + FireRotation.RotateVector(GunOffset);

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {
    // spawn the projectile
    World->SpawnActor<ABomba>(SpawnLocation, FireRotation);
    }

    bCanFire = false;
    World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGALAGA_USFX_DEFL01Pawn::ShotTimerExpired, FireRate);

    // try and play the sound if specified
    if (FireSound != nullptr)
    {
    UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
    }

    bCanFire = false;
    }
    }
}

void AGALAGA_USFX_DEFL01Pawn::Saltar()
{
	Subir->jump();
	//texto de salto con GEngine
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("saltando"));
	
	
	
}




