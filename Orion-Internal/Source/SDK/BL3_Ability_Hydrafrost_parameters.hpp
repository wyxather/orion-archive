#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Hydrafrost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnActivated
struct UAbility_Hydrafrost_C_OnActivated_Params
{
};

// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnDeactivated
struct UAbility_Hydrafrost_C_OnDeactivated_Params
{
};

// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnUnregistered
struct UAbility_Hydrafrost_C_OnUnregistered_Params
{
};

// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnPaused
struct UAbility_Hydrafrost_C_OnPaused_Params
{
};

// Function Ability_Hydrafrost.Ability_Hydrafrost_C.OnCauseDeath_CE
struct UAbility_Hydrafrost_C_OnCauseDeath_CE_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Hydrafrost.Ability_Hydrafrost_C.AmpBuff_CE
struct UAbility_Hydrafrost_C_AmpBuff_CE_Params
{
};

// Function Ability_Hydrafrost.Ability_Hydrafrost_C.ExecuteUbergraph_Ability_Hydrafrost
struct UAbility_Hydrafrost_C_ExecuteUbergraph_Ability_Hydrafrost_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
