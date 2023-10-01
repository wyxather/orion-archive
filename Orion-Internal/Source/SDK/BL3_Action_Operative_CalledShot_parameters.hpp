#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_CalledShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.FireAtTarget
struct UAction_Operative_CalledShot_C_FireAtTarget_Params
{
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.GetCommandRingActor
struct UAction_Operative_CalledShot_C_GetCommandRingActor_Params
{
	class ACommandRing_Operative_GRMLN*                res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StopTargetingBeam
struct UAction_Operative_CalledShot_C_StopTargetingBeam_Params
{
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StartTargetingBeam
struct UAction_Operative_CalledShot_C_StartTargetingBeam_Params
{
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.OnEnd
struct UAction_Operative_CalledShot_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_LoopStarted
struct UAction_Operative_CalledShot_C_AN_LoopStarted_Params
{
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StopButtonPress
struct UAction_Operative_CalledShot_C_StopButtonPress_Params
{
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_ShowDevice
struct UAction_Operative_CalledShot_C_AN_ShowDevice_Params
{
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_HideDevice
struct UAction_Operative_CalledShot_C_AN_HideDevice_Params
{
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.OnBegin
struct UAction_Operative_CalledShot_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.ExecuteUbergraph_Action_Operative_CalledShot
struct UAction_Operative_CalledShot_C_ExecuteUbergraph_Action_Operative_CalledShot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
