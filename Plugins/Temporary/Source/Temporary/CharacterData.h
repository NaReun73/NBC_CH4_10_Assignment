// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

/**
 * 
 */
UCLASS()
class TEMPORARY_API UCharacterData : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Data")
	int32 Level = 1;

	UPROPERTY(EditAnywhere, Category = "Data")
	float MaxHealth = 100.0f;
};
