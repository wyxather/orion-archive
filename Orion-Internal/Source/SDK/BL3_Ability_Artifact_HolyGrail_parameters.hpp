#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_HolyGrail_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnActivated
struct UAbility_Artifact_HolyGrail_C_OnActivated_Params
{
};

// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnRegistered
struct UAbility_Artifact_HolyGrail_C_OnRegistered_Params
{
};

// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnRevivingStopped
struct UAbility_Artifact_HolyGrail_C_OnRevivingStopped_Params
{
	bool                                               IsSuccessful;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnReviveStart
struct UAbility_Artifact_HolyGrail_C_OnReviveStart_Params
{
	class AActor*                                      ActorBeingRevived;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.ExecuteUbergraph_Ability_Artifact_HolyGrail
struct UAbility_Artifact_HolyGrail_C_ExecuteUbergraph_Ability_Artifact_HolyGrail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
