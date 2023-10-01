#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_BlastRequests_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_9
struct UALI_SM_BlastRequests_C_OnDialogSequenceFinished_9_Params
{
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_8
struct UALI_SM_BlastRequests_C_OnDialogSequenceFinished_8_Params
{
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_7
struct UALI_SM_BlastRequests_C_OnDialogSequenceFinished_7_Params
{
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_6
struct UALI_SM_BlastRequests_C_OnDialogSequenceFinished_6_Params
{
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_Stay
struct UALI_SM_BlastRequests_C_SET_Stay_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_Stay
struct UALI_SM_BlastRequests_C_Obj_Stay_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Stayed
struct UALI_SM_BlastRequests_C_MCE_Stayed_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MissionKickoff
struct UALI_SM_BlastRequests_C_MissionKickoff_Params
{
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_Respawned
struct UALI_SM_BlastRequests_C_INV_Obj_Respawned_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Respawned
struct UALI_SM_BlastRequests_C_MCE_Respawned_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_ReachOut
struct UALI_SM_BlastRequests_C_SET_ReachOut_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_ReachOut
struct UALI_SM_BlastRequests_C_Obj_ReachOut_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReachedOut
struct UALI_SM_BlastRequests_C_MCE_ReachedOut_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_KriegReadyToBlowUp_Stay
struct UALI_SM_BlastRequests_C_INV_Obj_KriegReadyToBlowUp_Stay_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToRespawn
struct UALI_SM_BlastRequests_C_INV_Obj_ReadyToRespawn_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_ReadyToRespawn_Objective] PROXY
struct UALI_SM_BlastRequests_C__INV_Obj_ReadyToRespawn_Objective__PROXY_Params
{
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_Respawned_Objective] PROXY_1
struct UALI_SM_BlastRequests_C__INV_Obj_Respawned_Objective__PROXY_1_Params
{
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReadytoRespawn
struct UALI_SM_BlastRequests_C_MCE_ReadytoRespawn_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToDespawnAtEnd
struct UALI_SM_BlastRequests_C_INV_Obj_ReadyToDespawnAtEnd_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.ExecuteUbergraph_ALI_SM_BlastRequests
struct UALI_SM_BlastRequests_C_ExecuteUbergraph_ALI_SM_BlastRequests_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
