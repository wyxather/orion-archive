#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_MysteriousAmulet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnActivated
struct UAbility_Artifact_MysteriousAmulet_C_OnActivated_Params
{
};

// Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnDeactivated
struct UAbility_Artifact_MysteriousAmulet_C_OnDeactivated_Params
{
};

// Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnKilledEnemy
struct UAbility_Artifact_MysteriousAmulet_C_OnKilledEnemy_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.ExecuteUbergraph_Ability_Artifact_MysteriousAmulet
struct UAbility_Artifact_MysteriousAmulet_C_ExecuteUbergraph_Ability_Artifact_MysteriousAmulet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
