#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_BlindBandit_Epic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnActivated
struct UAbility_BlindBandit_Epic_C_OnActivated_Params
{
};

// Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnCausedDeath_Event
struct UAbility_BlindBandit_Epic_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnDeactivated
struct UAbility_BlindBandit_Epic_C_OnDeactivated_Params
{
};

// Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.ExecuteUbergraph_Ability_BlindBandit_Epic
struct UAbility_BlindBandit_Epic_C_ExecuteUbergraph_Ability_BlindBandit_Epic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
