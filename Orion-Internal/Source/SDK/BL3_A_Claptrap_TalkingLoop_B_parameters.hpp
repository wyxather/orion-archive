#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Claptrap_TalkingLoop_B_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Claptrap_TalkingLoop_B.A_Claptrap_TalkingLoop_B_C.OnLoop
struct UA_Claptrap_TalkingLoop_B_C_OnLoop_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Claptrap_TalkingLoop_B.A_Claptrap_TalkingLoop_B_C.ExecuteUbergraph_A_Claptrap_TalkingLoop_B
struct UA_Claptrap_TalkingLoop_B_C_ExecuteUbergraph_A_Claptrap_TalkingLoop_B_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
