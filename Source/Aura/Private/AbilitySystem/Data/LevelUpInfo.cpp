// Copyright Timothy Manno


#include "AbilitySystem/Data/LevelUpInfo.h"

int32 ULevelUpInfo::FindLevelForXP(int32 XP) const
{
	// LevelInfo
	// Loop through Array of struct checking to see if XP is less then current requirement and if true return 
	// prior value;
	int32 Level = 1;
	for (Level; Level < LevelUpInfo.Num(); Level++)
	{
		if (LevelUpInfo[Level].LevelUpRequirement > XP)
		{
			return Level;
		}
	}

	return Level;
}
