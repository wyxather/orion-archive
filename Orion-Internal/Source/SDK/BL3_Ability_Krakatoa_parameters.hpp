#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Krakatoa_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Krakatoa.Ability_Krakatoa_C.OnActivated
struct UAbility_Krakatoa_C_OnActivated_Params
{
};

// Function Ability_Krakatoa.Ability_Krakatoa_C.OnCausedDeath_Event
struct UAbility_Krakatoa_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Krakatoa.Ability_Krakatoa_C.ExecuteUbergraph_Ability_Krakatoa
struct UAbility_Krakatoa_C_ExecuteUbergraph_Ability_Krakatoa_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
