#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_EP01_DLC2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_25
struct UEP01_DLC2_C_OnDialogSequenceFinished_25_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_24
struct UEP01_DLC2_C_OnDialogSequenceFinished_24_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_23
struct UEP01_DLC2_C_OnDialogSequenceFinished_23_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_22
struct UEP01_DLC2_C_OnDialogSequenceFinished_22_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_21
struct UEP01_DLC2_C_OnDialogSequenceFinished_21_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_20
struct UEP01_DLC2_C_OnDialogSequenceFinished_20_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_19
struct UEP01_DLC2_C_OnDialogSequenceFinished_19_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_18
struct UEP01_DLC2_C_OnDialogSequenceFinished_18_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_17
struct UEP01_DLC2_C_OnDialogSequenceFinished_17_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_16
struct UEP01_DLC2_C_OnDialogSequenceFinished_16_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_15
struct UEP01_DLC2_C_OnDialogSequenceFinished_15_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.OnDialogSequenceFinished_14
struct UEP01_DLC2_C_OnDialogSequenceFinished_14_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_PlayerArrivedAtEndWire
struct UEP01_DLC2_C_MCE_PlayerArrivedAtEndWire_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_ElectrityHasReachedGondola
struct UEP01_DLC2_C_MCE_ElectrityHasReachedGondola_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Inv_obj_ActivateElectricityPuzzle
struct UEP01_DLC2_C_Inv_obj_ActivateElectricityPuzzle_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_ReachHammerlock
struct UEP01_DLC2_C_Set_ReachHammerlock_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_DEBUB_EP01_JumpToEndMission
struct UEP01_DLC2_C_MCE_DEBUB_EP01_JumpToEndMission_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.[Obj_PowerUpGondola_Objective] PROXY
struct UEP01_DLC2_C__Obj_PowerUpGondola_Objective__PROXY_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.Set_GaigeTitleCard
struct UEP01_DLC2_C_Set_GaigeTitleCard_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_GaigeTitleCard
struct UEP01_DLC2_C_Obj_GaigeTitleCard_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_UpdateGaigeTitleCard
struct UEP01_DLC2_C_MCE_UpdateGaigeTitleCard_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_FollowWire
struct UEP01_DLC2_C_Obj_FollowWire_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_FollowWires
struct UEP01_DLC2_C_Set_FollowWires_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_PowerUpGondola
struct UEP01_DLC2_C_Obj_PowerUpGondola_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_PowerUpGondola
struct UEP01_DLC2_C_Set_PowerUpGondola_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_CallGondolaEngineFails
struct UEP01_DLC2_C_MCE_CallGondolaEngineFails_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_CallGondolaFail
struct UEP01_DLC2_C_Obj_CallGondolaFail_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_UseGondolaButton
struct UEP01_DLC2_C_Set_UseGondolaButton_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_ReturnToGaige
struct UEP01_DLC2_C_Set_ReturnToGaige_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_ReturnToGaige
struct UEP01_DLC2_C_Obj_ReturnToGaige_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_FollowGaige
struct UEP01_DLC2_C_Obj_FollowGaige_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_CallGondolaForReal
struct UEP01_DLC2_C_Set_CallGondolaForReal_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_CallGondolaForReal
struct UEP01_DLC2_C_Obj_CallGondolaForReal_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_GaigeIsAtGondola
struct UEP01_DLC2_C_MCE_GaigeIsAtGondola_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_ReturnedToGaige
struct UEP01_DLC2_C_MCE_ReturnedToGaige_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_GondolaCalled
struct UEP01_DLC2_C_MCE_GondolaCalled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_FollowGaige
struct UEP01_DLC2_C_Set_FollowGaige_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_PlayerTalkedToGaige
struct UEP01_DLC2_C_MCE_PlayerTalkedToGaige_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_TalkToGaige
struct UEP01_DLC2_C_Obj_TalkToGaige_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_TalkGaige
struct UEP01_DLC2_C_Set_TalkGaige_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_FrostBitersAllDead
struct UEP01_DLC2_C_MCE_FrostBitersAllDead_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_DefeatFrostBiters
struct UEP01_DLC2_C_Obj_DefeatFrostBiters_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_DefeatFrostBiters
struct UEP01_DLC2_C_Set_DefeatFrostBiters_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.BC_MeetWeddingPlanner_02
struct UEP01_DLC2_C_BC_MeetWeddingPlanner_02_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_Skip_WeddingPlanner_BC02
struct UEP01_DLC2_C_MCE_Skip_WeddingPlanner_BC02_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_ReachBar
struct UEP01_DLC2_C_Obj_ReachBar_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_RebootGenerator
struct UEP01_DLC2_C_Obj_RebootGenerator_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_ReroutePower
struct UEP01_DLC2_C_Obj_ReroutePower_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_RebootGenerator
struct UEP01_DLC2_C_MCE_RebootGenerator_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_WeddingPlannerMet
struct UEP01_DLC2_C_MCE_WeddingPlannerMet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_KillMamaRockslug
struct UEP01_DLC2_C_Set_KillMamaRockslug_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_KillRockslugMama
struct UEP01_DLC2_C_Obj_KillRockslugMama_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_MancubusTC
struct UEP01_DLC2_C_Set_MancubusTC_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_MancubusTitlecard
struct UEP01_DLC2_C_Obj_MancubusTitlecard_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_MeetWeddingPlanner
struct UEP01_DLC2_C_Obj_MeetWeddingPlanner_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_MeetWeddingPlanner
struct UEP01_DLC2_C_Set_MeetWeddingPlanner_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_Navigate_DLC2Planet
struct UEP01_DLC2_C_Set_Navigate_DLC2Planet_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_Navigate_DLC2Planet
struct UEP01_DLC2_C_Obj_Navigate_DLC2Planet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_NavigatedToDLC2Planet
struct UEP01_DLC2_C_MCE_NavigatedToDLC2Planet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_UseDropPod
struct UEP01_DLC2_C_Set_UseDropPod_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_Renavigate_DLC2Planet
struct UEP01_DLC2_C_Obj_Renavigate_DLC2Planet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_UseDropPod
struct UEP01_DLC2_C_Obj_UseDropPod_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_PlayerMetGuests
struct UEP01_DLC2_C_MCE_PlayerMetGuests_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_Renavigated_DLC2Planet
struct UEP01_DLC2_C_MCE_Renavigated_DLC2Planet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_IntroCinematic
struct UEP01_DLC2_C_Set_IntroCinematic_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Inv_Obj_IntroCinematic
struct UEP01_DLC2_C_Inv_Obj_IntroCinematic_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_MeetGuests
struct UEP01_DLC2_C_Obj_MeetGuests_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_MeetGuests
struct UEP01_DLC2_C_Set_MeetGuests_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_UsedDropPod
struct UEP01_DLC2_C_MCE_UsedDropPod_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_AdvanceToDropPod
struct UEP01_DLC2_C_MCE_AdvanceToDropPod_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_PlayerReachedHammerlock
struct UEP01_DLC2_C_MCE_PlayerReachedHammerlock_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.[Obj_PowerUpGondola_Objective] PROXY_1
struct UEP01_DLC2_C__Obj_PowerUpGondola_Objective__PROXY_1_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.Inv_Obj_DestroyNest1
struct UEP01_DLC2_C_Inv_Obj_DestroyNest1_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Inv_Obj_DestroyNest2
struct UEP01_DLC2_C_Inv_Obj_DestroyNest2_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Inv_Obj_DestroyNest3
struct UEP01_DLC2_C_Inv_Obj_DestroyNest3_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_Update_DestroyNest1
struct UEP01_DLC2_C_MCE_Update_DestroyNest1_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_Update_DestroyNest2
struct UEP01_DLC2_C_MCE_Update_DestroyNest2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_Update_DestroyNest3
struct UEP01_DLC2_C_MCE_Update_DestroyNest3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_DestroyNests
struct UEP01_DLC2_C_Obj_DestroyNests_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_GaigeFixGondola
struct UEP01_DLC2_C_Obj_GaigeFixGondola_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_GaigeFixedGondola
struct UEP01_DLC2_C_MCE_GaigeFixedGondola_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_INV_ElectricSwitch_On_2
struct UEP01_DLC2_C_Obj_INV_ElectricSwitch_On_2_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_INV_ElectricSwitch_On_3
struct UEP01_DLC2_C_Obj_INV_ElectricSwitch_On_3_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_INV_ElectricSwitch_On_4
struct UEP01_DLC2_C_Obj_INV_ElectricSwitch_On_4_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_INV_ElectricSwitch_On_2
struct UEP01_DLC2_C_MCE_INV_ElectricSwitch_On_2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_INV_ElectricSwitch_Off_2
struct UEP01_DLC2_C_MCE_INV_ElectricSwitch_Off_2_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_INV_ElectricSwitch_On_3
struct UEP01_DLC2_C_MCE_INV_ElectricSwitch_On_3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_INV_ElectricSwitch_Off_3
struct UEP01_DLC2_C_MCE_INV_ElectricSwitch_Off_3_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_INV_ElectricSwitch_On_4
struct UEP01_DLC2_C_MCE_INV_ElectricSwitch_On_4_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_INV_ElectricSwitch_Off_4
struct UEP01_DLC2_C_MCE_INV_ElectricSwitch_Off_4_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Inv_Obj_CrashPodCompleted
struct UEP01_DLC2_C_Inv_Obj_CrashPodCompleted_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_MonsterISight
struct UEP01_DLC2_C_MCE_MonsterISight_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_WeddingPlanerPODCrashed
struct UEP01_DLC2_C_MCE_WeddingPlanerPODCrashed_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_FollowHiddenPath
struct UEP01_DLC2_C_Obj_FollowHiddenPath_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.SET_TalkToMancubusIntro
struct UEP01_DLC2_C_SET_TalkToMancubusIntro_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_TalkToMancubusIntro
struct UEP01_DLC2_C_Obj_TalkToMancubusIntro_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_MancubusTalkedTo
struct UEP01_DLC2_C_MCE_MancubusTalkedTo_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Inv_Obj_GoToBar
struct UEP01_DLC2_C_Inv_Obj_GoToBar_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.MCE_WentToBar
struct UEP01_DLC2_C_MCE_WentToBar_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Obj_ReachHammerlock
struct UEP01_DLC2_C_Obj_ReachHammerlock_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_ReachHammerlockInitial
struct UEP01_DLC2_C_Set_ReachHammerlockInitial_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.Set_GoToBar
struct UEP01_DLC2_C_Set_GoToBar_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EP01_DLC2.EP01_DLC2_C.[Obj_ReachHammerlock_Objective] PROXY_2
struct UEP01_DLC2_C__Obj_ReachHammerlock_Objective__PROXY_2_Params
{
};

// Function EP01_DLC2.EP01_DLC2_C.ExecuteUbergraph_EP01_DLC2
struct UEP01_DLC2_C_ExecuteUbergraph_EP01_DLC2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
