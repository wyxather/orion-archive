#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_DeployBarrier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.IsHoldingBarrier
struct UInterface_Operative_DeployBarrier_C_IsHoldingBarrier_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.RefillBarrierHealth
struct UInterface_Operative_DeployBarrier_C_RefillBarrierHealth_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GiveBarrierHealth
struct UInterface_Operative_DeployBarrier_C_GiveBarrierHealth_Params
{
	float                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              New_Health;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierReference
struct UInterface_Operative_DeployBarrier_C_GetBarrierReference_Params
{
	class AActor*                                      Barrier;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry
struct UInterface_Operative_DeployBarrier_C_ActivateHighlyUnstableFromCarry_Params
{
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstable
struct UInterface_Operative_DeployBarrier_C_ActivateHighlyUnstable_Params
{
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierHealthPercent
struct UInterface_Operative_DeployBarrier_C_GetBarrierHealthPercent_Params
{
	float                                              HealthPercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.StartHoldingBarrier
struct UInterface_Operative_DeployBarrier_C_StartHoldingBarrier_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierInHand
struct UInterface_Operative_DeployBarrier_C_DeployNewBarrierInHand_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer
struct UInterface_Operative_DeployBarrier_C_DeployNewBarrierAroundPlayer_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
