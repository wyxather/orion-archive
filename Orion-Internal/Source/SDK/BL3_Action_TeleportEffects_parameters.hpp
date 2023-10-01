#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_TeleportEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_TeleportEffects.Action_TeleportEffects_C.UnlockResources
struct UAction_TeleportEffects_C_UnlockResources_Params
{
};

// Function Action_TeleportEffects.Action_TeleportEffects_C.LockResources
struct UAction_TeleportEffects_C_LockResources_Params
{
};

// Function Action_TeleportEffects.Action_TeleportEffects_C.OnBegin
struct UAction_TeleportEffects_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_TeleportEffects.Action_TeleportEffects_C.OnEnd
struct UAction_TeleportEffects_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_TeleportEffects.Action_TeleportEffects_C.ExecuteUbergraph_Action_TeleportEffects
struct UAction_TeleportEffects_C_ExecuteUbergraph_Action_TeleportEffects_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
