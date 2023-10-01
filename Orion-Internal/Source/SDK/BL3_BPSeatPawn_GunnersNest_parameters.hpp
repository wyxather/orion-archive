#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPSeatPawn_GunnersNest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.UserConstructionScript
struct ABPSeatPawn_GunnersNest_C_UserConstructionScript_Params
{
};

// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceiveBeginPlay
struct ABPSeatPawn_GunnersNest_C_ReceiveBeginPlay_Params
{
};

// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceivePossessed
struct ABPSeatPawn_GunnersNest_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceiveUnpossessed
struct ABPSeatPawn_GunnersNest_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ExecuteUbergraph_BPSeatPawn_GunnersNest
struct ABPSeatPawn_GunnersNest_C_ExecuteUbergraph_BPSeatPawn_GunnersNest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
