#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_BOTD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_BOTD.Ability_BOTD_C.OnActivated
struct UAbility_BOTD_C_OnActivated_Params
{
};

// Function Ability_BOTD.Ability_BOTD_C.OnCausedDeath_Event
struct UAbility_BOTD_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_BOTD.Ability_BOTD_C.ExecuteUbergraph_Ability_BOTD
struct UAbility_BOTD_C_ExecuteUbergraph_Ability_BOTD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
