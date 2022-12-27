// Copyright Vishal Ahirwar.

#include "SnowCollector.h"



// Sets default values for this component's properties
USnowCollector::USnowCollector()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// CollisionMesh = CreateDefaultSubobject<UBoxComponent>(FName("Collision Mesh"));

	// ...
}

// Called when the game starts

void USnowCollector::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USnowCollector::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

