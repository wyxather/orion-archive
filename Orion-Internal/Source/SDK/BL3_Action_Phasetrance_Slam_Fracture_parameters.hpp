#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_Fracture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_CreateCastProjectile
struct UAction_Phasetrance_Slam_Fracture_C_AN_CreateCastProjectile_Params
{
};

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnServerEnd
struct UAction_Phasetrance_Slam_Fracture_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnBeginBringUpWeapon
struct UAction_Phasetrance_Slam_Fracture_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureRumble
struct UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureRumble_Params
{
};

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Start
struct UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureCS_Start_Params
{
};

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Quake
struct UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureCS_Quake_Params
{
};

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureFB_Server
struct UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureFB_Server_Params
{
};

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.ExecuteUbergraph_Action_Phasetrance_Slam_Fracture
struct UAction_Phasetrance_Slam_Fracture_C_ExecuteUbergraph_Action_Phasetrance_Slam_Fracture_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
