#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_ThrowBarrier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnBegin
struct UAction_Operative_ThrowBarrier_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnEnd
struct UAction_Operative_ThrowBarrier_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnBeginBringUpWeapon
struct UAction_Operative_ThrowBarrier_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.AnimNotify_ThrowProjectile
struct UAction_Operative_ThrowBarrier_C_AnimNotify_ThrowProjectile_Params
{
};

// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.AN_PerformBarrierTossFeedback
struct UAction_Operative_ThrowBarrier_C_AN_PerformBarrierTossFeedback_Params
{
};

// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.ExecuteUbergraph_Action_Operative_ThrowBarrier
struct UAction_Operative_ThrowBarrier_C_ExecuteUbergraph_Action_Operative_ThrowBarrier_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
