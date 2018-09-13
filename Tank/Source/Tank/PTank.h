// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RunTime/Engine/Classes/Components/ArrowComponent.h"
#include "Paper2D/Classes/PaperSpriteComponent.h"
#include "PTank.generated.h"

UCLASS()
class TANK_API APTank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APTank();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// 显示坦克朝向 private的访问权限，是不支持BlueprintReadOnly, 所以要加meta处理
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TankBase", meta = (AllowPrivateAccess = "true"))
		UArrowComponent * TankDirection;

	// 显示坦克精灵
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TankBase", meta = (AllowPrivateAccess = "true"))
		UPaperSpriteComponent* TankSprite;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TankBase", meta = (AllowPrivateAccess = "true"))
		UChildActorComponent* ChildTurret;
	
};
