#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPGameMode_Default_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPGameMode_Default.BPGameMode_Default_C.FindPlayerStart
struct ABPGameMode_Default_C_FindPlayerStart_Params
{
	class AController**                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     IncomingName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPGameMode_Default.BPGameMode_Default_C.UserConstructionScript
struct ABPGameMode_Default_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
