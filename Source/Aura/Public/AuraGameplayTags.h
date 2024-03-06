// Copyright Timothy Manno

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 *  AuraGameplayTags
 * 
 *  Singleton containing native GameplayTags
 */

struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	/* Primary Attributes */

	FGameplayTag Attributes_Primary_Strength;
	FGameplayTag Attributes_Primary_Intelligence;
	FGameplayTag Attributes_Primary_Resilience;
	FGameplayTag Attributes_Primary_Vigor;

	/* Secondary Attributes */

	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CritChance;
	FGameplayTag Attributes_Secondary_CritDamage;
	FGameplayTag Attributes_Secondary_CritResistance;
	FGameplayTag Attributes_Secondary_HealthRegen;
	FGameplayTag Attributes_Secondary_ManaRegen;
	FGameplayTag Attributes_Secondary_MaxHealth;
	FGameplayTag Attributes_Secondary_MaxMana;

	/* Resistance Attributes */

	FGameplayTag Attributes_Resistance_Fire;
	FGameplayTag Attributes_Resistance_Lightning;
	FGameplayTag Attributes_Resistance_Arcane;
	FGameplayTag Attributes_Resistance_Physical;

	/* Meta Attributes */

	FGameplayTag Attributes_Meta_Damage;
	FGameplayTag Attributes_Meta_Damage_Fire;
	FGameplayTag Attributes_Meta_Damage_Lightning;
	FGameplayTag Attributes_Meta_Damage_Arcane;
	FGameplayTag Attributes_Meta_Damage_Physical;

	TMap<FGameplayTag, FGameplayTag> DamageTypesToResistances;
	//TArray<FGameplayTag> DamageTypes;

	/* Input Configs */

	FGameplayTag InputTag_LMB;
	FGameplayTag InputTag_RMB;
	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;

	/* Gameplay Effects */

	FGameplayTag Effect_HitReaction;

private:
	static FAuraGameplayTags GameplayTags;
};