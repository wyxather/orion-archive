#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Slam_Barrage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.StopSlamLoopFeedback
struct UAction_PhaseTrance_Slam_Barrage_C_StopSlamLoopFeedback_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.InnerStopBeam
struct UAction_PhaseTrance_Slam_Barrage_C_InnerStopBeam_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.InnerStartBeam
struct UAction_PhaseTrance_Slam_Barrage_C_InnerStartBeam_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_StopBlastBeam
struct UAction_PhaseTrance_Slam_Barrage_C_AN_StopBlastBeam_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_FireBlastProjectileDown
struct UAction_PhaseTrance_Slam_Barrage_C_AN_FireBlastProjectileDown_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.Cleanup
struct UAction_PhaseTrance_Slam_Barrage_C_Cleanup_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_DoSlam
struct UAction_PhaseTrance_Slam_Barrage_C_AN_DoSlam_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.DoDamageAsync
struct UAction_PhaseTrance_Slam_Barrage_C_DoDamageAsync_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnServerBegin
struct UAction_PhaseTrance_Slam_Barrage_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnServerEnd
struct UAction_PhaseTrance_Slam_Barrage_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_StartBlastBeam
struct UAction_PhaseTrance_Slam_Barrage_C_AN_StartBlastBeam_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_RemoveBeamEmitter
struct UAction_PhaseTrance_Slam_Barrage_C_AN_RemoveBeamEmitter_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnBeginBringUpWeapon
struct UAction_PhaseTrance_Slam_Barrage_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_BeamRumble
struct UAction_PhaseTrance_Slam_Barrage_C_AN_BeamRumble_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_SlamLoopRumble
struct UAction_PhaseTrance_Slam_Barrage_C_AN_SlamLoopRumble_Params
{
};

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage
struct UAction_PhaseTrance_Slam_Barrage_C_ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
