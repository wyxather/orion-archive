#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_Spawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Pet_Spawn.A_Pet_Spawn_C.Notify_Response
struct UA_Pet_Spawn_C_Notify_Response_Params
{
};

// Function A_Pet_Spawn.A_Pet_Spawn_C.OnServerEnd
struct UA_Pet_Spawn_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Pet_Spawn.A_Pet_Spawn_C.ExecuteUbergraph_A_Pet_Spawn
struct UA_Pet_Spawn_C_ExecuteUbergraph_A_Pet_Spawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
