#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_AutoBear_AmmoRegen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_AutoBear_AmmoRegen.Ability_Gunner_AutoBear_AmmoRegen_C.AnointAutoBearEnded
struct UAbility_Gunner_AutoBear_AmmoRegen_C_AnointAutoBearEnded_Params
{
	bool*                                              HasValidTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ChargeTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_AutoBear_AmmoRegen.Ability_Gunner_AutoBear_AmmoRegen_C.ExecuteUbergraph_Ability_Gunner_AutoBear_AmmoRegen
struct UAbility_Gunner_AutoBear_AmmoRegen_C_ExecuteUbergraph_Ability_Gunner_AutoBear_AmmoRegen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
