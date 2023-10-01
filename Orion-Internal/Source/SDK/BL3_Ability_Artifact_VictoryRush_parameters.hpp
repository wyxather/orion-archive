#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_VictoryRush_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_VictoryRush.Ability_Artifact_VictoryRush_C.OnActivated
struct UAbility_Artifact_VictoryRush_C_OnActivated_Params
{
};

// Function Ability_Artifact_VictoryRush.Ability_Artifact_VictoryRush_C.OnKill
struct UAbility_Artifact_VictoryRush_C_OnKill_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_VictoryRush.Ability_Artifact_VictoryRush_C.ExecuteUbergraph_Ability_Artifact_VictoryRush
struct UAbility_Artifact_VictoryRush_C_ExecuteUbergraph_Ability_Artifact_VictoryRush_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
