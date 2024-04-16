// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "NaveEnemiga.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
class ANaveEnemiga;

// Sets default values
ABomba::ABomba()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Bomba/77db1e79a0e8_create_a_bomb_capsu.77db1e79a0e8_create_a_bomb_capsu'"));

    // Create mesh component for the projectile sphere
    mallabala = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Bomba/77db1e79a0e8_create_a_bomb_capsu.77db1e79a0e8_create_a_bomb_capsu'"));
    mallabala->SetStaticMesh(ProjectileMeshAsset.Object);
    mallabala->SetupAttachment(RootComponent);
    mallabala->BodyInstance.SetCollisionProfileName("Projectile");
    mallabala->OnComponentHit.AddDynamic(this, &ABomba::OnHit);     // set up a notification for when this component hits something
    RootComponent = mallabala;
	
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
    ProjectileMovement->UpdatedComponent = mallabala;
    ProjectileMovement->InitialSpeed = 0.f;
    ProjectileMovement->MaxSpeed = 0.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = false;
    ProjectileMovement->ProjectileGravityScale = 3.f;

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	ExplosionParticles = ExplosionAsset.Object;
	//sonido explosion
	static ConstructorHelpers::FObjectFinder<USoundBase> explosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
	ExploSound = explosionSound.Object;
	////colisionar y fiumba
	mallabala->OnComponentHit.AddDynamic(this, &ABomba::FuncionDeManejoDeColision);

    GetActorRelativeScale3D();
    // aumenta el tamano de la nave
    SetActorScale3D(FVector(2, 2, 3));

    // Rotate the mesh upside down
}

void ABomba::DestroyBomba()
{
	Destroy();

}

void ABomba::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	
	
	TArray<AActor*> ActorsToDestroy;
	//FVector BombLocation = GetActorLocation();
	float ExplosionRadius = 300.0f; // Adjust this value as needed
	
	// Get all actors within the explosion radius
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), ActorsToDestroy);

	for (AActor* Actor : ActorsToDestroy)
	{
		AActor* auxActor = Actor;
		Actor = Cast<ANaveEnemiga>(Actor);
		if (Actor && Actor->GetDistanceTo(this) <= ExplosionRadius)
		{
			Actor->Destroy();
		}
		
	}
	
	// Destroy the bomb after a delay
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABomba::DestroyBomba, 1.0f, false);
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABomba::FuncionDeManejoDeColision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	// Destroy the bomb after a delay
	Destroy();
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticles, GetActorLocation());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExploSound, GetActorLocation());
	
}

