#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_EnterExit_Nova_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointTriggerEffect
struct UAbility_Gunner_EnterExit_Nova_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronIronBearStarted
struct UAbility_Gunner_EnterExit_Nova_C_AnointIronIronBearStarted_Params
{
	class AOakCharacter_IronBear**                     IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronBearEnded
struct UAbility_Gunner_EnterExit_Nova_C_AnointIronBearEnded_Params
{
};

// Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.ExecuteUbergraph_Ability_Gunner_EnterExit_Nova
struct UAbility_Gunner_EnterExit_Nova_C_ExecuteUbergraph_Ability_Gunner_EnterExit_Nova_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
