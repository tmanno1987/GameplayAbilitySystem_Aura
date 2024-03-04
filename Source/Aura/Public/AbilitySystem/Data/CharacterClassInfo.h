// Copyright Timothy Manno

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "CharacterClassInfo.generated.h"

class UGameplayEffect;
class UGameplayAbility;

UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
	Witch,
	Warrior,
	Ranger
};

USTRUCT(BlueprintType)
struct FCharacterClassDefaultInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Class Defaults")
	TSubclassOf<UGameplayEffect> PrimaryAttributes;
};

/**
 * 
 */
UCLASS()
class AURA_API UCharacterClassInfo : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "Class Defaults|Character")
	TMap<ECharacterClass, FCharacterClassDefaultInfo> CharacterClassInfo;

	UPROPERTY(EditDefaultsOnly, Category = "Class Defaults|Common")
	TSubclassOf<UGameplayEffect> SecondaryAttributes;

	UPROPERTY(EditDefaultsOnly, Category = "Class Defaults|Common")
	TSubclassOf<UGameplayEffect> VitalAttributes;

	UPROPERTY(EditDefaultsOnly, Category = "Class Defaults")
	TArray<TSubclassOf<UGameplayAbility>> CommonAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "Class Defaults|Damage")
	TObjectPtr<UCurveTable> DamageCalcCoefficients;

	FCharacterClassDefaultInfo GetClassDefaultInfo(ECharacterClass CharacterClass);

};
