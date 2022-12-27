// Copyright Vishal Ahirwar.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnowBalls.generated.h"

UCLASS()
class DEMO_API ASnowBalls : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnowBalls();

protected:
	// Called when the game starts or when spawned

	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere)
	class UStaticMeshComponent*Ball=nullptr;

	// UPROPERTY(EditAnyWhere)
	// class UBoxComponent* CollisionMesh = nullptr;

	// UFUNCTION()
	// void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// UFUNCTION()
	// void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
