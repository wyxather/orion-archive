#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Porta-Prison_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_15
struct UMission_Porta_Prison_C_OnDialogSequenceFinished_15_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_14
struct UMission_Porta_Prison_C_OnDialogSequenceFinished_14_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_13
struct UMission_Porta_Prison_C_OnDialogSequenceFinished_13_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_12
struct UMission_Porta_Prison_C_OnDialogSequenceFinished_12_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_11
struct UMission_Porta_Prison_C_OnDialogSequenceFinished_11_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_10
struct UMission_Porta_Prison_C_OnDialogSequenceFinished_10_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_9
struct UMission_Porta_Prison_C_OnDialogSequenceFinished_9_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_InstallAIChip
struct UMission_Porta_Prison_C_Set_InstallAIChip_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_InstallAIChip
struct UMission_Porta_Prison_C_Obj_InstallAIChip_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_DefendPotty
struct UMission_Porta_Prison_C_Set_DefendPotty_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_DefendPotty
struct UMission_Porta_Prison_C_Obj_DefendPotty_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_FindPrisoner
struct UMission_Porta_Prison_C_Set_FindPrisoner_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_FindPrisoner
struct UMission_Porta_Prison_C_Obj_FindPrisoner_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_ActivatePortaPotty
struct UMission_Porta_Prison_C_ME_ActivatePortaPotty_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_DestroyBot
struct UMission_Porta_Prison_C_Set_DestroyBot_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_DestroyedBot
struct UMission_Porta_Prison_C_Obj_DestroyedBot_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_CollectAIChip
struct UMission_Porta_Prison_C_Set_CollectAIChip_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_CollectAIChip
struct UMission_Porta_Prison_C_Obj_CollectAIChip_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateDestroyBot
struct UMission_Porta_Prison_C_ME_UpdateDestroyBot_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdatePaintGraffiti
struct UMission_Porta_Prison_C_ME_UpdatePaintGraffiti_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateInstallAIChip
struct UMission_Porta_Prison_C_ME_UpdateInstallAIChip_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateDefendPotty
struct UMission_Porta_Prison_C_ME_UpdateDefendPotty_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_BreakTank
struct UMission_Porta_Prison_C_Obj_BreakTank_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_BreakTank
struct UMission_Porta_Prison_C_Set_BreakTank_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_CollectAIChip2
struct UMission_Porta_Prison_C_Set_CollectAIChip2_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_CollectAIChip2
struct UMission_Porta_Prison_C_Obj_CollectAIChip2_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_InstallAIChip2
struct UMission_Porta_Prison_C_Obj_InstallAIChip2_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_InstallAIChip2
struct UMission_Porta_Prison_C_Set_InstallAIChip2_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateBreakTank
struct UMission_Porta_Prison_C_ME_UpdateBreakTank_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_DestroyWMSBot
struct UMission_Porta_Prison_C_Set_DestroyWMSBot_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateDestroyWMSBot
struct UMission_Porta_Prison_C_ME_UpdateDestroyWMSBot_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_DestroyWMSBot
struct UMission_Porta_Prison_C_Obj_DestroyWMSBot_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateInstallAIChip2
struct UMission_Porta_Prison_C_ME_UpdateInstallAIChip2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateFindPrisoner
struct UMission_Porta_Prison_C_ME_UpdateFindPrisoner_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateFindVandals
struct UMission_Porta_Prison_C_ME_UpdateFindVandals_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_FindVandals
struct UMission_Porta_Prison_C_Set_FindVandals_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_FindVandals
struct UMission_Porta_Prison_C_Obj_FindVandals_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateGetSprayPaint
struct UMission_Porta_Prison_C_ME_UpdateGetSprayPaint_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_GetSprayPaint
struct UMission_Porta_Prison_C_Set_GetSprayPaint_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_GetSprayPaint
struct UMission_Porta_Prison_C_Obj_GetSprayPaint_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_Initial
struct UMission_Porta_Prison_C_Set_Initial_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToDefendPotty
struct UMission_Porta_Prison_C_AdvToDefendPotty_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToDestroyBot
struct UMission_Porta_Prison_C_AdvToDestroyBot_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToBreakTank
struct UMission_Porta_Prison_C_AdvToBreakTank_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToDestroyWMS
struct UMission_Porta_Prison_C_AdvToDestroyWMS_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_FakeLaunch
struct UMission_Porta_Prison_C_Set_FakeLaunch_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_FakeLaunch
struct UMission_Porta_Prison_C_Obj_FakeLaunch_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToFakeLaunch
struct UMission_Porta_Prison_C_AdvToFakeLaunch_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_KillVandals
struct UMission_Porta_Prison_C_Obj_KillVandals_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_KillVandals
struct UMission_Porta_Prison_C_Set_KillVandals_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateKillVandals
struct UMission_Porta_Prison_C_ME_UpdateKillVandals_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToKillVandals
struct UMission_Porta_Prison_C_AdvToKillVandals_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToCollectPaint
struct UMission_Porta_Prison_C_AdvToCollectPaint_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToFnidVandals
struct UMission_Porta_Prison_C_AdvToFnidVandals_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_INV_SpawnWMSBot
struct UMission_Porta_Prison_C_Obj_INV_SpawnWMSBot_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_INV_PottyMusic
struct UMission_Porta_Prison_C_Obj_INV_PottyMusic_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_PottyMusic
struct UMission_Porta_Prison_C_Set_PottyMusic_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_PaintGraffiti
struct UMission_Porta_Prison_C_Obj_PaintGraffiti_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.[Obj_INV_PottyMusic_Objective] PROXY
struct UMission_Porta_Prison_C__Obj_INV_PottyMusic_Objective__PROXY_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.[Obj_INV_PottyMusic_Objective] PROXY_1
struct UMission_Porta_Prison_C__Obj_INV_PottyMusic_Objective__PROXY_1_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvTo_PottyMusic
struct UMission_Porta_Prison_C_AdvTo_PottyMusic_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvTo_CollectAIChip
struct UMission_Porta_Prison_C_AdvTo_CollectAIChip_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvTo_InstallAIChip
struct UMission_Porta_Prison_C_AdvTo_InstallAIChip_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.[Obj_INV_PottyMusic_Objective] PROXY_2
struct UMission_Porta_Prison_C__Obj_INV_PottyMusic_Objective__PROXY_2_Params
{
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_KillPrisoner
struct UMission_Porta_Prison_C_Obj_KillPrisoner_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_KillPrisoner
struct UMission_Porta_Prison_C_Set_KillPrisoner_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Update_KillPrisoner
struct UMission_Porta_Prison_C_Update_KillPrisoner_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_CollectWeapon
struct UMission_Porta_Prison_C_Obj_CollectWeapon_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_CollectWeapon
struct UMission_Porta_Prison_C_Set_CollectWeapon_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Update_CollectWeapon
struct UMission_Porta_Prison_C_Update_CollectWeapon_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Update_FindVandals_BC1
struct UMission_Porta_Prison_C_Update_FindVandals_BC1_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_FindVandals_BC1
struct UMission_Porta_Prison_C_Obj_FindVandals_BC1_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_TrackingKillingVandals
struct UMission_Porta_Prison_C_Obj_TrackingKillingVandals_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_PaintGraffiti
struct UMission_Porta_Prison_C_Set_PaintGraffiti_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Porta-Prison.Mission_Porta-Prison_C.ExecuteUbergraph_Mission_Porta-Prison
struct UMission_Porta_Prison_C_ExecuteUbergraph_Mission_Porta_Prison_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
