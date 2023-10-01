#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_HotNBothered_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_7
struct UALI_SM_HotNBothered_C_OnDialogSequenceFinished_7_Params
{
};

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_6
struct UALI_SM_HotNBothered_C_OnDialogSequenceFinished_6_Params
{
};

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.OnDialogSequenceFinished_5
struct UALI_SM_HotNBothered_C_OnDialogSequenceFinished_5_Params
{
};

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.MissionKickoff
struct UALI_SM_HotNBothered_C_MissionKickoff_Params
{
};

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.Obj_TurnHeatOn
struct UALI_SM_HotNBothered_C_Obj_TurnHeatOn_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.MCE_TurnedHeatOn
struct UALI_SM_HotNBothered_C_MCE_TurnedHeatOn_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.SET_TurnHeatOn
struct UALI_SM_HotNBothered_C_SET_TurnHeatOn_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_HotNBothered.ALI_SM_HotNBothered_C.ExecuteUbergraph_ALI_SM_HotNBothered
struct UALI_SM_HotNBothered_C_ExecuteUbergraph_ALI_SM_HotNBothered_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
