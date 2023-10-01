#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.StopSlamLoopFeedback
struct UAction_Phasetrance_Slam_C_StopSlamLoopFeedback_Params
{
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamControlledMove
struct UAction_Phasetrance_Slam_C_GetSlamControlledMove_Params
{
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamTargetLocation
struct UAction_Phasetrance_Slam_C_GetSlamTargetLocation_Params
{
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerBegin
struct UAction_Phasetrance_Slam_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.InnerDoSlamDamage
struct UAction_Phasetrance_Slam_C_InnerDoSlamDamage_Params
{
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_Unlockmovement
struct UAction_Phasetrance_Slam_C_AN_Unlockmovement_Params
{
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerEnd
struct UAction_Phasetrance_Slam_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBeginBringUpWeapon
struct UAction_Phasetrance_Slam_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_SlamMoveLock
struct UAction_Phasetrance_Slam_C_AN_SlamMoveLock_Params
{
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBegin
struct UAction_Phasetrance_Slam_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLand
struct UAction_Phasetrance_Slam_C_AN_FeedbackSlamLand_Params
{
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLoop
struct UAction_Phasetrance_Slam_C_AN_FeedbackSlamLoop_Params
{
};

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.ExecuteUbergraph_Action_Phasetrance_Slam
struct UAction_Phasetrance_Slam_C_ExecuteUbergraph_Action_Phasetrance_Slam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
