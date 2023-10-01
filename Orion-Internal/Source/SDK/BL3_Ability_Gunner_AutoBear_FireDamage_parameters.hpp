#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_AutoBear_FireDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.AnointAutoBearEnded
struct UAbility_Gunner_AutoBear_FireDamage_C_AnointAutoBearEnded_Params
{
	bool*                                              HasValidTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ChargeTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage
struct UAbility_Gunner_AutoBear_FireDamage_C_ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
