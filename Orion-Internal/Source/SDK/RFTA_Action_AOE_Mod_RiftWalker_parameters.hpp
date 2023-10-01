#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Mod_RiftWalker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ModifyDamage
struct UAction_AOE_Mod_RiftWalker_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.OnActionStart
struct UAction_AOE_Mod_RiftWalker_C_OnActionStart_Params
{
};

// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ExecuteUbergraph_Action_AOE_Mod_RiftWalker
struct UAction_AOE_Mod_RiftWalker_C_ExecuteUbergraph_Action_AOE_Mod_RiftWalker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
