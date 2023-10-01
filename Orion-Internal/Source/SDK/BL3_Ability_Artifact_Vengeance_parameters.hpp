#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Vengeance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnActivated
struct UAbility_Artifact_Vengeance_C_OnActivated_Params
{
};

// Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnSlamEnd
struct UAbility_Artifact_Vengeance_C_OnSlamEnd_Params
{
	struct FGroundSlamEndedDetails                     Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.ExecuteUbergraph_Ability_Artifact_Vengeance
struct UAbility_Artifact_Vengeance_C_ExecuteUbergraph_Ability_Artifact_Vengeance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
