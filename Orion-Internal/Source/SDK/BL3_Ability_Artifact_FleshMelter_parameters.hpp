#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_FleshMelter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.CausedDeath_FleshMelter
struct UAbility_Artifact_FleshMelter_C_CausedDeath_FleshMelter_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.OnDeactivated
struct UAbility_Artifact_FleshMelter_C_OnDeactivated_Params
{
};

// Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.OnActivated
struct UAbility_Artifact_FleshMelter_C_OnActivated_Params
{
};

// Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.ExecuteUbergraph_Ability_Artifact_FleshMelter
struct UAbility_Artifact_FleshMelter_C_ExecuteUbergraph_Ability_Artifact_FleshMelter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
