#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SignificanceManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SignificanceManager.SignificanceManager.UnregisterForTickOptim
struct USignificanceManager_UnregisterForTickOptim_Params
{
	class AActor*                                      TickOptimActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SignificanceManager.SignificanceManager.OnTickActorEndPlay
struct USignificanceManager_OnTickActorEndPlay_Params
{
	class AActor*                                      TickOptimActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
