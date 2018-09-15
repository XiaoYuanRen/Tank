// Fill out your copyright notice in the Description page of Project Settings.

#include "PTank.h"


// Sets default values
APTank::APTank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponet"));
	}

	TankDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("TankDirection"));
	TankDirection->AttachTo(RootComponent);

	TankSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("TankSprite"));
	TankSprite->AttachTo(TankDirection);

	ChildTurret = CreateDefaultSubobject<UChildActorComponent>(TEXT("TankTurret"));
	ChildTurret->AttachTo(TankDirection);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->AttachTo(RootComponent);
	SpringArm->TargetArmLength = 500.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = false;
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->CameraLagSpeed = 2.0f;
	SpringArm->bDoCollisionTest = false;
	SpringArm->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));

	TankCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TankCamera"));
	TankCamera->AttachTo(SpringArm);


}

// Called when the game starts or when spawned
void APTank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APTank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

