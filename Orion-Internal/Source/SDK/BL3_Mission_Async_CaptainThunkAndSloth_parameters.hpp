#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_CaptainThunkAndSloth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.Obj_KillCaptainThunkAndSloth
struct UMission_Async_CaptainThunkAndSloth_C_Obj_KillCaptainThunkAndSloth_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.Set_KillCaptainThunkAndSloth
struct UMission_Async_CaptainThunkAndSloth_C_Set_KillCaptainThunkAndSloth_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.MCE_CaptainThunkAndSlothKilled
struct UMission_Async_CaptainThunkAndSloth_C_MCE_CaptainThunkAndSlothKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C.ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth
struct UMission_Async_CaptainThunkAndSloth_C_ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
