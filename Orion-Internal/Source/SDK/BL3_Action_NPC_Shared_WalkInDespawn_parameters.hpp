#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_NPC_Shared_WalkInDespawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_NPC_Shared_WalkInDespawn.Action_NPC_Shared_WalkInDespawn_C.OnEnd
struct UAction_NPC_Shared_WalkInDespawn_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_NPC_Shared_WalkInDespawn.Action_NPC_Shared_WalkInDespawn_C.ExecuteUbergraph_Action_NPC_Shared_WalkInDespawn
struct UAction_NPC_Shared_WalkInDespawn_C_ExecuteUbergraph_Action_NPC_Shared_WalkInDespawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
