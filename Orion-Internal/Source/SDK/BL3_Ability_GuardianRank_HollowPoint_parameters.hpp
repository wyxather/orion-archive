#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_HollowPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_HollowPoint.Ability_GuardianRank_HollowPoint_C.OnActivated
struct UAbility_GuardianRank_HollowPoint_C_OnActivated_Params
{
};

// Function Ability_GuardianRank_HollowPoint.Ability_GuardianRank_HollowPoint_C.CausedDeath
struct UAbility_GuardianRank_HollowPoint_C_CausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_GuardianRank_HollowPoint.Ability_GuardianRank_HollowPoint_C.ExecuteUbergraph_Ability_GuardianRank_HollowPoint
struct UAbility_GuardianRank_HollowPoint_C_ExecuteUbergraph_Ability_GuardianRank_HollowPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
