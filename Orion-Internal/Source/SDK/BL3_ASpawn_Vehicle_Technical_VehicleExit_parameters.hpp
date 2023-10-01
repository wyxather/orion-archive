#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Vehicle_Technical_VehicleExit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ASpawn_Vehicle_Technical_VehicleExit.ASpawn_Vehicle_Technical_VehicleExit_C.OnBegin
struct UASpawn_Vehicle_Technical_VehicleExit_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_Vehicle_Technical_VehicleExit.ASpawn_Vehicle_Technical_VehicleExit_C.OnEnd
struct UASpawn_Vehicle_Technical_VehicleExit_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_Vehicle_Technical_VehicleExit.ASpawn_Vehicle_Technical_VehicleExit_C.ExecuteUbergraph_ASpawn_Vehicle_Technical_VehicleExit
struct UASpawn_Vehicle_Technical_VehicleExit_C_ExecuteUbergraph_ASpawn_Vehicle_Technical_VehicleExit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
