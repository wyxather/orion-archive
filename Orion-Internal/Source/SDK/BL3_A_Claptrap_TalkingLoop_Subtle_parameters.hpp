#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Claptrap_TalkingLoop_Subtle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Claptrap_TalkingLoop_Subtle.A_Claptrap_TalkingLoop_Subtle_C.OnLoop
struct UA_Claptrap_TalkingLoop_Subtle_C_OnLoop_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Claptrap_TalkingLoop_Subtle.A_Claptrap_TalkingLoop_Subtle_C.ExecuteUbergraph_A_Claptrap_TalkingLoop_Subtle
struct UA_Claptrap_TalkingLoop_Subtle_C_ExecuteUbergraph_A_Claptrap_TalkingLoop_Subtle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
