// Copyright Vishal Ahirwar.

#include "SnowBalls.h"
#include "Components/BoxComponent.h"

// Sets default values
ASnowBalls::ASnowBalls()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// this->CollisionMesh = CreateDefaultSubobject<UBoxComponent>(FName("Collision Mesh"));
	// if (!this->CollisionMesh)
	// {
	// 	UE_LOG(LogTemp, Error, TEXT("Collision Component Failed!"));
	// 	return;
	// };

	this->Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	if (!this->Ball)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to Create Static Mesh Component!"));
		return;
	};

	SetRootComponent(Ball);

	// this->CollisionMesh->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void ASnowBalls::BeginPlay()
{
	Super::BeginPlay();

	// this->CollisionMesh->OnComponentBeginOverlap.AddDynamic(this,&ASnowBalls::OnOverlapBegin);
	// this->CollisionMesh->OnComponentEndOverlap.AddDynamic(this,&ASnowBalls::OnOverlapEnd);
}

// Called every frame
void ASnowBalls::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// void ASnowBalls::OnOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult){

// };

// void ASnowBalls::OnOverlapEnd(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
// {

// }