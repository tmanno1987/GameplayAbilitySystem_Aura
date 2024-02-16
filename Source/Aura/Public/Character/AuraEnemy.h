// Copyright Timothy Manno

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterBase.h"
#include "AuraEnemy.generated.h"
#include "Interaction/EnemyInterface.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public ACharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
};
