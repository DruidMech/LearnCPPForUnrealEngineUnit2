// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Weapon.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponContainer.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class FIRSTPROJECT_API UWeaponContainer : public UObject
{
	GENERATED_BODY()
public:

	UWeaponContainer();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	TMap<FString, TSubclassOf<AWeapon>> WeaponMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	TSubclassOf<AWeapon> Weapon_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	TSubclassOf<AWeapon> Weapon_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	TSubclassOf<AWeapon> Weapon_3;
	
	
	
};
