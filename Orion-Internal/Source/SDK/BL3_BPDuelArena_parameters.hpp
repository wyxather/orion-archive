#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPDuelArena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPDuelArena.BPDuelArena_C.UserConstructionScript
struct ABPDuelArena_C_UserConstructionScript_Params
{
};

// Function BPDuelArena.BPDuelArena_C.K2_InitDuelArena
struct ABPDuelArena_C_K2_InitDuelArena_Params
{
};

// Function BPDuelArena.BPDuelArena_C.ReceiveTick
struct ABPDuelArena_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPDuelArena.BPDuelArena_C.ReceiveEndPlay
struct ABPDuelArena_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPDuelArena.BPDuelArena_C.ExecuteUbergraph_BPDuelArena
struct ABPDuelArena_C_ExecuteUbergraph_BPDuelArena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
