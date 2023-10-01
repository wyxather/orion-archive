#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Beastmaster_Antigrav_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.OnServerStart
struct UControlledMove_Beastmaster_Antigrav_C_OnServerStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.SpawnLoot
struct UControlledMove_Beastmaster_Antigrav_C_SpawnLoot_Params
{
};

// Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav
struct UControlledMove_Beastmaster_Antigrav_C_ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
