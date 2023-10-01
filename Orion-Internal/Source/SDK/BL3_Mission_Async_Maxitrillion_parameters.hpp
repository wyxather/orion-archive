#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Maxitrillion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.Obj_KillMaxitrillion
struct UMission_Async_Maxitrillion_C_Obj_KillMaxitrillion_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.Set_KillMaxitrillion
struct UMission_Async_Maxitrillion_C_Set_KillMaxitrillion_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.MCE_MaxitrillionKilled
struct UMission_Async_Maxitrillion_C_MCE_MaxitrillionKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_Maxitrillion.Mission_Async_Maxitrillion_C.ExecuteUbergraph_Mission_Async_Maxitrillion
struct UMission_Async_Maxitrillion_C_ExecuteUbergraph_Mission_Async_Maxitrillion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
