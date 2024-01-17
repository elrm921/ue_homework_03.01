// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"

// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->InstanceName = MakeUniqueObjectName(NULL, ACppBaseActor::StaticClass(), TEXT("A_CppBase_C")).ToString();

}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();
	this->ShowActorInformation();
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Debug info
void ACppBaseActor::ShowActorInformation()
{
	UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *this->InstanceName);
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), this->EnemyNum);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %s"), (this->IsAlive ? TEXT("true"): TEXT("false")));
}
