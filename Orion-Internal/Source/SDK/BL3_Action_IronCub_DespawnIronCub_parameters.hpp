#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronCub_DespawnIronCub_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.OnServerEnd
struct UAction_IronCub_DespawnIronCub_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.ExecuteUbergraph_Action_IronCub_DespawnIronCub
struct UAction_IronCub_DespawnIronCub_C_ExecuteUbergraph_Action_IronCub_DespawnIronCub_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
