#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_IndoTyrant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.Obj_KillIndoTyrant
struct UMission_Async_IndoTyrant_C_Obj_KillIndoTyrant_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.Set_KillIndoTyrant
struct UMission_Async_IndoTyrant_C_Set_KillIndoTyrant_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.MCE_IndoTyrantKilled
struct UMission_Async_IndoTyrant_C_MCE_IndoTyrantKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_IndoTyrant.Mission_Async_IndoTyrant_C.ExecuteUbergraph_Mission_Async_IndoTyrant
struct UMission_Async_IndoTyrant_C_ExecuteUbergraph_Mission_Async_IndoTyrant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
