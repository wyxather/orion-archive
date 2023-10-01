#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_RedJabber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.Obj_KillRedJabber
struct UMission_Async_RedJabber_C_Obj_KillRedJabber_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.Set_KillRedJabber
struct UMission_Async_RedJabber_C_Set_KillRedJabber_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.MCE_RedJabberKilled
struct UMission_Async_RedJabber_C_MCE_RedJabberKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_RedJabber.Mission_Async_RedJabber_C.ExecuteUbergraph_Mission_Async_RedJabber
struct UMission_Async_RedJabber_C_ExecuteUbergraph_Mission_Async_RedJabber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
