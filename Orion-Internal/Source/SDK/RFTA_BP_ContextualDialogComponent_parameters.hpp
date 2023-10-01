#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_ContextualDialogComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.CheckPendingCombat
struct UBP_ContextualDialogComponent_C_CheckPendingCombat_Params
{
};

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.UpdateCombatState
struct UBP_ContextualDialogComponent_C_UpdateCombatState_Params
{
};

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ReceiveBeginPlay
struct UBP_ContextualDialogComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.OnNotifyHitTarget_Event_1
struct UBP_ContextualDialogComponent_C_OnNotifyHitTarget_Event_1_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ReceiveTick
struct UBP_ContextualDialogComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.DelayedExitCombat
struct UBP_ContextualDialogComponent_C_DelayedExitCombat_Params
{
};

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.DelayedExitCombat30
struct UBP_ContextualDialogComponent_C_DelayedExitCombat30_Params
{
};

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ExecuteUbergraph_BP_ContextualDialogComponent
struct UBP_ContextualDialogComponent_C_ExecuteUbergraph_BP_ContextualDialogComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
