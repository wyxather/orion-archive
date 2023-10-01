#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_RiftWalker_DFA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.ClearInvulnerability
struct UAction_Mod_RiftWalker_DFA_C_ClearInvulnerability_Params
{
};

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.SetInvulnerable
struct UAction_Mod_RiftWalker_DFA_C_SetInvulnerable_Params
{
};

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.FilterIncomingDamage
struct UAction_Mod_RiftWalker_DFA_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.SpawnCharacter
struct UAction_Mod_RiftWalker_DFA_C_SpawnCharacter_Params
{
	class UClass**                                     ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor**                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.Get Player Gender
struct UAction_Mod_RiftWalker_DFA_C_Get_Player_Gender_Params
{
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.OnActionStart
struct UAction_Mod_RiftWalker_DFA_C_OnActionStart_Params
{
};

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.OnActionStop
struct UAction_Mod_RiftWalker_DFA_C_OnActionStop_Params
{
};

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.ExecuteUbergraph_Action_Mod_RiftWalker_DFA
struct UAction_Mod_RiftWalker_DFA_C_ExecuteUbergraph_Action_Mod_RiftWalker_DFA_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
