#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Lilith_PhaseIn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.OnBegin
struct UA_Lilith_PhaseIn_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.OnEnd
struct UA_Lilith_PhaseIn_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.PhaseWalkAOE
struct UA_Lilith_PhaseIn_C_PhaseWalkAOE_Params
{
};

// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.Notify_Boom
struct UA_Lilith_PhaseIn_C_Notify_Boom_Params
{
};

// Function A_Lilith_PhaseIn.A_Lilith_PhaseIn_C.ExecuteUbergraph_A_Lilith_PhaseIn
struct UA_Lilith_PhaseIn_C_ExecuteUbergraph_A_Lilith_PhaseIn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
