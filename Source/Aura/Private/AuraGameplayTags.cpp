// Copyright Timothy Manno


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	/**
	 *	Primary Attributes
	 */

	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Strength"),
		FString("Increases physical damage")
	);

	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Intelligence"),
		FString("Increases magical damage")
	);

	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Resilience"),
		FString("Increases Armor and Armor Penetration")
	);

	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Vigor"),
		FString("Increases Health")
	);

	/**
	 *	Secondary Attributes
	 */

	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.Armor"),
		FString("Reduces damage taken, improves Block Chance")
	);

	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ArmorPenetration"),
		FString("Ignores percentage of enemy Armor, increases Critical Hit Chance")
	);

	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.BlockChance"),
		FString("Chance to cut incoming damage in half")
	);

	GameplayTags.Attributes_Secondary_CritChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CritChance"),
		FString("Chance to double damage plus critical hit bonus")
	);

	GameplayTags.Attributes_Secondary_CritDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CritDamage"),
		FString("Bonus damage added when a critical hit is scored")
	);

	GameplayTags.Attributes_Secondary_CritResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CritResistance"),
		FString("Reduces critical hit chance of attacking enemies")
	);

	GameplayTags.Attributes_Secondary_HealthRegen = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.HealthRegen"),
		FString("Amount of health regenerated every 1 second")
	);

	GameplayTags.Attributes_Secondary_ManaRegen = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ManaRegen"),
		FString("Amount of mana regenerated every 1 second")
	);

	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MaxHealth"),
		FString("Maximum amount of health obtainable")
	);

	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MaxMana"),
		FString("Maximum amount of mana obtainable")
	);

	/**
	 *	Meta Tags
	 */

	GameplayTags.Attributes_Meta_Damage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.Damage"),
		FString("Amount of incoming damage for an attack")
	);

	GameplayTags.Attributes_Meta_Damage_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.Damage.Fire"),
		FString("Amount of incoming Fire damage")
	);

	GameplayTags.Attributes_Meta_Damage_Lightning = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.Damage.Lightning"),
		FString("Amount of incoming Lightning damage")
	);

	GameplayTags.Attributes_Meta_Damage_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.Damage.Arcane"),
		FString("Amount of incoming Arcane damage")
	);

	GameplayTags.Attributes_Meta_Damage_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.Damage.Physical"),
		FString("Amount of incoming Physical damage")
	);

	/**
	 *	Resistance Tags
	 */

	GameplayTags.Attributes_Resistance_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Resistance.Fire"),
		FString("Resistance to Fire damage")
	);

	GameplayTags.Attributes_Resistance_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Resistance.Arcane"),
		FString("Resistance to Arcane damage")
	);

	GameplayTags.Attributes_Resistance_Lightning = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Resistance.Lightning"),
		FString("Resistance to Lightning damage")
	);

	GameplayTags.Attributes_Resistance_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Resistance.Physical"),
		FString("Resistance to Physical damage")
	);

	/**
	 *	Map of damage types to resistances
	 */

	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Attributes_Meta_Damage_Arcane, GameplayTags.Attributes_Resistance_Arcane);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Attributes_Meta_Damage_Fire, GameplayTags.Attributes_Resistance_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Attributes_Meta_Damage_Lightning, GameplayTags.Attributes_Resistance_Lightning);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Attributes_Meta_Damage_Physical, GameplayTags.Attributes_Resistance_Physical);

	/**
	 *	Input Tags
	 */

	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.LMB"),
		FString("Input Tag for Left Mouse Button")
	);

	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.RMB"),
		FString("Input Tag for Right Mouse Button")
	);

	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.1"),
		FString("Input Tag for 1 Key")
	);

	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.2"),
		FString("Input Tag for 2 Key")
	);

	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.3"),
		FString("Input Tag for 3 Key")
	);

	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.4"),
		FString("Input Tag for 4 Key")
	);

	/**
	 *	Gameplay Effect Tags
	 */

	GameplayTags.Effect_HitReaction = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Effect.HitReaction"),
		FString("Gameplay Effect tag to apply hit reaction when damage is received")
	);

	/**
	 *	Gameplay Abilities
	 */

	GameplayTags.Ability_Attack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Ability.Attack"),
		FString("Attack Ability Tag")
	);

	GameplayTags.Ability_Summon = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Ability.Summon"),
		FString("Summon Ability Tag")
	);

	GameplayTags.Ability_Fire_FireBolt = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Ability.Fire.FireBolt"),
		FString("FireBolt Ability Tag")
	);

	/**
	 *	Combat Sockets
	 */

	GameplayTags.CombatSocket_Weapon = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Weapon"),
		FString("Socket location for weapons")
	);

	GameplayTags.CombatSocket_RightHand = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.RightHand"),
		FString("Socket location for weapons that are right hand specific")
	);

	GameplayTags.CombatSocket_LeftHand = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.LeftHand"),
		FString("Socket location for weapons that are left hand specific")
	);

	GameplayTags.CombatSocket_Tail = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Tail"),
		FString("Socket location for attacks involving an enemies tail.")
	);

	/**
	 *	Attack Montages
	 */

	GameplayTags.Montage_Attack_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Montage.Attack.1"),
		FString("Attack 1")
	);

	GameplayTags.Montage_Attack_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Montage.Attack.2"),
		FString("Attack 2")
	);

	GameplayTags.Montage_Attack_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Montage.Attack.3"),
		FString("Attack 3")
	);

	GameplayTags.Montage_Attack_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Montage.Attack.4"),
		FString("Attack 4")
	);
}
