#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_GearUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_GearUp.Mission_GearUp_C.Obj_OpenAllWindows
struct UMission_GearUp_C_Obj_OpenAllWindows_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Update_OpenAllWindows
struct UMission_GearUp_C_MCE_Update_OpenAllWindows_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_EnterMap
struct UMission_GearUp_C_MCE_VO_EnterMap_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_RunStart
struct UMission_GearUp_C_MCE_VO_RunStart_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_CircleMoving
struct UMission_GearUp_C_MCE_VO_CircleMoving_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_CircleStopping
struct UMission_GearUp_C_MCE_VO_CircleStopping_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_ResetMission
struct UMission_GearUp_C_MCE_ResetMission_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Set_RunStart
struct UMission_GearUp_C_Set_RunStart_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_RespawnPlayers
struct UMission_GearUp_C_MCE_RespawnPlayers_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_KilledBoss
struct UMission_GearUp_C_MCE_VO_KilledBoss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_APlayerDied
struct UMission_GearUp_C_MCE_VO_APlayerDied_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_FinalCircleStop
struct UMission_GearUp_C_MCE_VO_FinalCircleStop_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Update_StartCountdown_INV
struct UMission_GearUp_C_MCE_Update_StartCountdown_INV_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_EarlyBanter
struct UMission_GearUp_C_MCE_VO_EarlyBanter_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Obj_StartCountdown_INV
struct UMission_GearUp_C_Obj_StartCountdown_INV_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_SponsorBanter
struct UMission_GearUp_C_MCE_VO_SponsorBanter_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_Airdrop
struct UMission_GearUp_C_MCE_VO_Airdrop_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_InterruptBanter
struct UMission_GearUp_C_MCE_InterruptBanter_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_OutsideCircle
struct UMission_GearUp_C_MCE_VO_OutsideCircle_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_AdvanceToMixedSet
struct UMission_GearUp_C_MCE_AdvanceToMixedSet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_LootTrap
struct UMission_GearUp_C_MCE_VO_LootTrap_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_VO_RevenantAmbush
struct UMission_GearUp_C_MCE_VO_RevenantAmbush_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_FailGearUpRun
struct UMission_GearUp_C_MCE_FailGearUpRun_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_RespawnStationUsed
struct UMission_GearUp_C_MCE_RespawnStationUsed_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_InterruptWelcomeBack
struct UMission_GearUp_C_MCE_InterruptWelcomeBack_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_PrizeDoorOpen
struct UMission_GearUp_C_MCE_PrizeDoorOpen_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Set_CircleMoveStop_AndBoss
struct UMission_GearUp_C_Set_CircleMoveStop_AndBoss_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Obj_CircleMove_3
struct UMission_GearUp_C_Obj_CircleMove_3_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Obj_CircleStop_3
struct UMission_GearUp_C_Obj_CircleStop_3_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Update_CircleMove_3
struct UMission_GearUp_C_MCE_Update_CircleMove_3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Update_CircleStop_3
struct UMission_GearUp_C_MCE_Update_CircleStop_3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_CompleteMission
struct UMission_GearUp_C_MCE_CompleteMission_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.AdvanceToKillBossSet
struct UMission_GearUp_C_AdvanceToKillBossSet_Params
{
};

// Function Mission_GearUp.Mission_GearUp_C.Obj_KillBoss_BC
struct UMission_GearUp_C_Obj_KillBoss_BC_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Update_KillBoss_BC
struct UMission_GearUp_C_MCE_Update_KillBoss_BC_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Set_CircleMoveStop
struct UMission_GearUp_C_Set_CircleMoveStop_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.[Obj_BossFightStart_Objective] PROXY
struct UMission_GearUp_C__Obj_BossFightStart_Objective__PROXY_Params
{
};

// Function Mission_GearUp.Mission_GearUp_C.Obj_BossFightStart
struct UMission_GearUp_C_Obj_BossFightStart_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Update_BossFightStart
struct UMission_GearUp_C_MCE_Update_BossFightStart_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.[Obj_BossFightStart_Objective] PROXY_1
struct UMission_GearUp_C__Obj_BossFightStart_Objective__PROXY_1_Params
{
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Audio_RevenantSpawn
struct UMission_GearUp_C_MCE_Audio_RevenantSpawn_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.[Obj_KillBoss_Objective] PROXY_2
struct UMission_GearUp_C__Obj_KillBoss_Objective__PROXY_2_Params
{
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Update_KillBoss
struct UMission_GearUp_C_MCE_Update_KillBoss_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Obj_KillBoss
struct UMission_GearUp_C_Obj_KillBoss_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Set_KillBoss
struct UMission_GearUp_C_Set_KillBoss_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_Update_RunStart
struct UMission_GearUp_C_MCE_Update_RunStart_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_ActivateMission_Remote
struct UMission_GearUp_C_MCE_ActivateMission_Remote_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.MCE_AdvanceToKillBossSet
struct UMission_GearUp_C_MCE_AdvanceToKillBossSet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.Obj_RunStart
struct UMission_GearUp_C_Obj_RunStart_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_GearUp.Mission_GearUp_C.[Obj_CircleMove_2_Objective] PROXY_3
struct UMission_GearUp_C__Obj_CircleMove_2_Objective__PROXY_3_Params
{
};

// Function Mission_GearUp.Mission_GearUp_C.[Obj_CircleStop_2_Objective] PROXY_4
struct UMission_GearUp_C__Obj_CircleStop_2_Objective__PROXY_4_Params
{
};

// Function Mission_GearUp.Mission_GearUp_C.ExecuteUbergraph_Mission_GearUp
struct UMission_GearUp_C_ExecuteUbergraph_Mission_GearUp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
