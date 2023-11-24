// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicCharacter.h"
#include "MyTestCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MYTESTPROJECT_API AMyTestCharacter : public ABasicCharacter
{
	GENERATED_BODY()

public:
	AMyTestCharacter();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera);
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera);
	class UCameraComponent* FollowCamera;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)override;
	void MoveForward(float value);
	void MoveRight(float value);

};
