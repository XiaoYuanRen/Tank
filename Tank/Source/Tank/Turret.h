// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RunTime/Engine/Classes/Components/ArrowComponent.h"
#include "Paper2D/Classes/PaperSpriteComponent.h"
#include "Turret.generated.h"

UCLASS()
class TANK_API ATurret : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TurretBase", meta = (AllowPrivateAccess = "true"))
		UArrowComponent* TurretDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TurretBase", meta = (AllowPrivateAccess = "true"))
		UPaperSpriteComponent* TurretSprite;
	
};
