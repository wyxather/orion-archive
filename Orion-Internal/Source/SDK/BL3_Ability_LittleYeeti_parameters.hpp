#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_LittleYeeti_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_LittleYeeti.Ability_LittleYeeti_C.OnActivated
struct UAbility_LittleYeeti_C_OnActivated_Params
{
};

// Function Ability_LittleYeeti.Ability_LittleYeeti_C.CausedDeath
struct UAbility_LittleYeeti_C_CausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_LittleYeeti.Ability_LittleYeeti_C.ExecuteUbergraph_Ability_LittleYeeti
struct UAbility_LittleYeeti_C_ExecuteUbergraph_Ability_LittleYeeti_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
