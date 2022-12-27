// Copyright Vishal Ahirwar.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SnowCollector.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEMO_API USnowCollector : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USnowCollector();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
// protected:
// 	UPROPERTY(EditAnyWhere)
// 	class UBoxComponent* CollisionMesh = nullptr;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
