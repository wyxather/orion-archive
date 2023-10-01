#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Salvo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.OnActivated
struct UAbility_Artifact_Salvo_C_OnActivated_Params
{
};

// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.FireRocket
struct UAbility_Artifact_Salvo_C_FireRocket_Params
{
};

// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.OnDeactivated
struct UAbility_Artifact_Salvo_C_OnDeactivated_Params
{
};

// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.ExecuteQuery
struct UAbility_Artifact_Salvo_C_ExecuteQuery_Params
{
};

// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.SlamEnd
struct UAbility_Artifact_Salvo_C_SlamEnd_Params
{
	struct FGroundSlamEndedDetails                     Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.StopFiring
struct UAbility_Artifact_Salvo_C_StopFiring_Params
{
};

// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.ExecuteUbergraph_Ability_Artifact_Salvo
struct UAbility_Artifact_Salvo_C_ExecuteUbergraph_Ability_Artifact_Salvo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
