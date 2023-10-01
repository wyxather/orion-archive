#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_ThrowDrone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AnimNotify_SpawnDrone
struct UAction_Operative_ThrowDrone_C_AnimNotify_SpawnDrone_Params
{
};

// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBegin
struct UAction_Operative_ThrowDrone_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnEnd
struct UAction_Operative_ThrowDrone_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AN_PerformDroneCameraShake
struct UAction_Operative_ThrowDrone_C_AN_PerformDroneCameraShake_Params
{
};

// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBeginBringUpWeapon
struct UAction_Operative_ThrowDrone_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.ExecuteUbergraph_Action_Operative_ThrowDrone
struct UAction_Operative_ThrowDrone_C_ExecuteUbergraph_Action_Operative_ThrowDrone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
