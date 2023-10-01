#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorBonus_CryoDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.OnActivated
struct UAbility_All_Passive_TerrorBonus_CryoDamage_C_OnActivated_Params
{
};

// Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.CheckTerror
struct UAbility_All_Passive_TerrorBonus_CryoDamage_C_CheckTerror_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.TerrorDepleted
struct UAbility_All_Passive_TerrorBonus_CryoDamage_C_TerrorDepleted_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.ExecuteUbergraph_Ability_All_Passive_TerrorBonus_CryoDamage
struct UAbility_All_Passive_TerrorBonus_CryoDamage_C_ExecuteUbergraph_Ability_All_Passive_TerrorBonus_CryoDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
