#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_ThatRingsABell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_5
struct UALI_SM_ThatRingsABell_C_OnDialogSequenceFinished_5_Params
{
};

// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_4
struct UALI_SM_ThatRingsABell_C_OnDialogSequenceFinished_4_Params
{
};

// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MCE_RingABell
struct UALI_SM_ThatRingsABell_C_MCE_RingABell_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.Obj_RingABell
struct UALI_SM_ThatRingsABell_C_Obj_RingABell_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.SET_RingABell
struct UALI_SM_ThatRingsABell_C_SET_RingABell_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MissionKickoff
struct UALI_SM_ThatRingsABell_C_MissionKickoff_Params
{
};

// Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.ExecuteUbergraph_ALI_SM_ThatRingsABell
struct UALI_SM_ThatRingsABell_C_ExecuteUbergraph_ALI_SM_ThatRingsABell_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
