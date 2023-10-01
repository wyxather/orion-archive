#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Corruption_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Corruption.Ability_Corruption_C.OnActivated
struct UAbility_Corruption_C_OnActivated_Params
{
};

// Function Ability_Corruption.Ability_Corruption_C.OnCausedDeath_Event
struct UAbility_Corruption_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Corruption.Ability_Corruption_C.ExecuteUbergraph_Ability_Corruption
struct UAbility_Corruption_C_ExecuteUbergraph_Ability_Corruption_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
