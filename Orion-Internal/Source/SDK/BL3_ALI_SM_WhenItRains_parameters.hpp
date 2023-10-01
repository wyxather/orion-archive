#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_WhenItRains_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.OnDialogSequenceFinished_5
struct UALI_SM_WhenItRains_C_OnDialogSequenceFinished_5_Params
{
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.OnDialogSequenceFinished_4
struct UALI_SM_WhenItRains_C_OnDialogSequenceFinished_4_Params
{
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MCE_FindUmbrella
struct UALI_SM_WhenItRains_C_MCE_FindUmbrella_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.Obj_FindUmbrella
struct UALI_SM_WhenItRains_C_Obj_FindUmbrella_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.SET_GiveUmbrella
struct UALI_SM_WhenItRains_C_SET_GiveUmbrella_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.Obj_GiveUmbrella
struct UALI_SM_WhenItRains_C_Obj_GiveUmbrella_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MCE_GiveUmbrella
struct UALI_SM_WhenItRains_C_MCE_GiveUmbrella_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.SET_FindUmbrella
struct UALI_SM_WhenItRains_C_SET_FindUmbrella_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MissionKickoff
struct UALI_SM_WhenItRains_C_MissionKickoff_Params
{
};

// Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.ExecuteUbergraph_ALI_SM_WhenItRains
struct UALI_SM_WhenItRains_C_ExecuteUbergraph_ALI_SM_WhenItRains_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
