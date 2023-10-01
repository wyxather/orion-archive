#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tannis_Loop_ConsoleChannel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.OnBegin
struct UA_Tannis_Loop_ConsoleChannel_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.OnEnd
struct UA_Tannis_Loop_ConsoleChannel_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.StartChannel
struct UA_Tannis_Loop_ConsoleChannel_C_StartChannel_Params
{
};

// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.StopChannel
struct UA_Tannis_Loop_ConsoleChannel_C_StopChannel_Params
{
};

// Function A_Tannis_Loop_ConsoleChannel.A_Tannis_Loop_ConsoleChannel_C.ExecuteUbergraph_A_Tannis_Loop_ConsoleChannel
struct UA_Tannis_Loop_ConsoleChannel_C_ExecuteUbergraph_A_Tannis_Loop_ConsoleChannel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
