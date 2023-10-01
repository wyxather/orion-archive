#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_16_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.OnActivated
struct UPassive_Beastmaster_DLCSkill_15_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.DLCSkill15_UsedAttackCommand
struct UPassive_Beastmaster_DLCSkill_15_C_DLCSkill15_UsedAttackCommand_Params
{
	EOakActionAbilityPetEvolutionType                  PetEvolution;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakActionAbilityPetType                           PetType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16
struct UPassive_Beastmaster_DLCSkill_15_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
