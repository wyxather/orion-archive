#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_RaidOnMaliwan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area4
struct UMission_RaidOnMaliwan_C_Set_Area4_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area4_KillBoss
struct UMission_RaidOnMaliwan_C_Obj_Area4_KillBoss_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area4_KillBoss
struct UMission_RaidOnMaliwan_C_MCE_Update_Area4_KillBoss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_Area4_KilledBoss
struct UMission_RaidOnMaliwan_C_MCE_Dialog_Area4_KilledBoss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_ProceededToArea4
struct UMission_RaidOnMaliwan_C_MCE_Dialog_ProceededToArea4_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_Area3_KilledMiniboss
struct UMission_RaidOnMaliwan_C_MCE_Dialog_Area3_KilledMiniboss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_ProceedToArea4
struct UMission_RaidOnMaliwan_C_MCE_Update_ProceedToArea4_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_ProceedToArea4
struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea4_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area0
struct UMission_RaidOnMaliwan_C_Set_Area0_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_GearUp
struct UMission_RaidOnMaliwan_C_Obj_GearUp_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_ProceedToArea1
struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea1_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_GearUp
struct UMission_RaidOnMaliwan_C_MCE_Update_GearUp_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_ProceedToArea1
struct UMission_RaidOnMaliwan_C_MCE_Update_ProceedToArea1_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_StartingDialog
struct UMission_RaidOnMaliwan_C_MCE_Dialog_StartingDialog_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_ProceededToArea1
struct UMission_RaidOnMaliwan_C_MCE_Dialog_ProceededToArea1_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area3_KillMiniboss
struct UMission_RaidOnMaliwan_C_MCE_Update_Area3_KillMiniboss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area3
struct UMission_RaidOnMaliwan_C_Set_Area3_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area3_KillMiniboss
struct UMission_RaidOnMaliwan_C_Obj_Area3_KillMiniboss_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_PostMission
struct UMission_RaidOnMaliwan_C_Set_PostMission_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_PostMission
struct UMission_RaidOnMaliwan_C_Obj_PostMission_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_PostMission
struct UMission_RaidOnMaliwan_C_MCE_Update_PostMission_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_ClearArea3
struct UMission_RaidOnMaliwan_C_MCE_ClearArea3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_ClearArea4
struct UMission_RaidOnMaliwan_C_MCE_ClearArea4_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Elevator1
struct UMission_RaidOnMaliwan_C_MCE_Elevator1_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.[Obj_ProceedToArea1_Objective] PROXY
struct UMission_RaidOnMaliwan_C__Obj_ProceedToArea1_Objective__PROXY_Params
{
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area1BC_Inv
struct UMission_RaidOnMaliwan_C_Obj_Area1BC_Inv_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area1BC
struct UMission_RaidOnMaliwan_C_MCE_Update_Area1BC_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_ProceededToArea2
struct UMission_RaidOnMaliwan_C_MCE_Dialog_ProceededToArea2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_ProceededToArea3
struct UMission_RaidOnMaliwan_C_MCE_Dialog_ProceededToArea3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area1Boss
struct UMission_RaidOnMaliwan_C_Set_Area1Boss_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_Area2_KilledMiniboss
struct UMission_RaidOnMaliwan_C_MCE_Dialog_Area2_KilledMiniboss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_ProceedToArea3
struct UMission_RaidOnMaliwan_C_MCE_Update_ProceedToArea3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_ProceedToArea3
struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea3_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area2Boss
struct UMission_RaidOnMaliwan_C_Set_Area2Boss_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2BC
struct UMission_RaidOnMaliwan_C_MCE_Update_Area2BC_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2BC_Inv
struct UMission_RaidOnMaliwan_C_Obj_Area2BC_Inv_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area3BC_Inv
struct UMission_RaidOnMaliwan_C_Obj_Area3BC_Inv_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area3BC
struct UMission_RaidOnMaliwan_C_MCE_Update_Area3BC_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2_KillMiniboss
struct UMission_RaidOnMaliwan_C_MCE_Update_Area2_KillMiniboss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area2
struct UMission_RaidOnMaliwan_C_Set_Area2_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2_KillMiniboss
struct UMission_RaidOnMaliwan_C_Obj_Area2_KillMiniboss_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area3Boss
struct UMission_RaidOnMaliwan_C_Set_Area3Boss_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Dialog_Area1_KilledMiniboss
struct UMission_RaidOnMaliwan_C_MCE_Dialog_Area1_KilledMiniboss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_ProceedToArea2
struct UMission_RaidOnMaliwan_C_MCE_Update_ProceedToArea2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_ProceedToArea2
struct UMission_RaidOnMaliwan_C_Obj_ProceedToArea2_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area4Boss
struct UMission_RaidOnMaliwan_C_Set_Area4Boss_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area4BC
struct UMission_RaidOnMaliwan_C_Obj_Area4BC_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area4BC
struct UMission_RaidOnMaliwan_C_MCE_Update_Area4BC_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area1_SpecialMaliwanDoor_Inv
struct UMission_RaidOnMaliwan_C_Obj_Area1_SpecialMaliwanDoor_Inv_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area1_SpecialMaliwanDoor
struct UMission_RaidOnMaliwan_C_MCE_Update_Area1_SpecialMaliwanDoor_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area1BC2_Inv
struct UMission_RaidOnMaliwan_C_Obj_Area1BC2_Inv_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area1BC2
struct UMission_RaidOnMaliwan_C_MCE_Update_Area1BC2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2BC2_Inv
struct UMission_RaidOnMaliwan_C_Obj_Area2BC2_Inv_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2BC2
struct UMission_RaidOnMaliwan_C_MCE_Update_Area2BC2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2BC3_Inv
struct UMission_RaidOnMaliwan_C_Obj_Area2BC3_Inv_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2BC3
struct UMission_RaidOnMaliwan_C_MCE_Update_Area2BC3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area2BossDelay
struct UMission_RaidOnMaliwan_C_Set_Area2BossDelay_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area2BossDelay
struct UMission_RaidOnMaliwan_C_Obj_Area2BossDelay_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area2BossDelay
struct UMission_RaidOnMaliwan_C_MCE_Update_Area2BossDelay_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_FailMission_Area1
struct UMission_RaidOnMaliwan_C_MCE_FailMission_Area1_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area1_KillMiniboss
struct UMission_RaidOnMaliwan_C_MCE_Update_Area1_KillMiniboss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_RaidCountdown_Inv
struct UMission_RaidOnMaliwan_C_Obj_RaidCountdown_Inv_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_RaidCountdown
struct UMission_RaidOnMaliwan_C_MCE_Update_RaidCountdown_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_FailMission_Area2
struct UMission_RaidOnMaliwan_C_MCE_FailMission_Area2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Set_Area1
struct UMission_RaidOnMaliwan_C_Set_Area1_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area1_KillMiniboss
struct UMission_RaidOnMaliwan_C_Obj_Area1_KillMiniboss_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_FailMission_Area3
struct UMission_RaidOnMaliwan_C_MCE_FailMission_Area3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_FailMission_Area4
struct UMission_RaidOnMaliwan_C_MCE_FailMission_Area4_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Area2DoorOpened
struct UMission_RaidOnMaliwan_C_MCE_Area2DoorOpened_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.Obj_Area4BC2
struct UMission_RaidOnMaliwan_C_Obj_Area4BC2_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.MCE_Update_Area4BC2
struct UMission_RaidOnMaliwan_C_MCE_Update_Area4BC2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_RaidOnMaliwan.Mission_RaidOnMaliwan_C.ExecuteUbergraph_Mission_RaidOnMaliwan
struct UMission_RaidOnMaliwan_C_ExecuteUbergraph_Mission_RaidOnMaliwan_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
