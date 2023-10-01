#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_HotDrop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_HotDrop.Ability_Artifact_HotDrop_C.OnActivated
struct UAbility_Artifact_HotDrop_C_OnActivated_Params
{
};

// Function Ability_Artifact_HotDrop.Ability_Artifact_HotDrop_C.OnDeactivated
struct UAbility_Artifact_HotDrop_C_OnDeactivated_Params
{
};

// Function Ability_Artifact_HotDrop.Ability_Artifact_HotDrop_C.SlamEnd
struct UAbility_Artifact_HotDrop_C_SlamEnd_Params
{
	struct FGroundSlamEndedDetails                     Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_HotDrop.Ability_Artifact_HotDrop_C.ExecuteUbergraph_Ability_Artifact_HotDrop
struct UAbility_Artifact_HotDrop_C_ExecuteUbergraph_Ability_Artifact_HotDrop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
