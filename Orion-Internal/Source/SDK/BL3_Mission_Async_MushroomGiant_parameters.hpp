#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_MushroomGiant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Obj_KillMushroomGiant
struct UMission_Async_MushroomGiant_C_Obj_KillMushroomGiant_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Set_KillMushroomGiant
struct UMission_Async_MushroomGiant_C_Set_KillMushroomGiant_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.MCE_MushroomGiantKilled
struct UMission_Async_MushroomGiant_C_MCE_MushroomGiantKilled_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.ExecuteUbergraph_Mission_Async_MushroomGiant
struct UMission_Async_MushroomGiant_C_ExecuteUbergraph_Mission_Async_MushroomGiant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
