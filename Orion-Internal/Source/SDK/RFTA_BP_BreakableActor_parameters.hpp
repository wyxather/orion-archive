#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_BreakableActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BreakableActor.BP_BreakableActor_C.GetDropChance
struct ABP_BreakableActor_C_GetDropChance_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableActor.BP_BreakableActor_C.FilterIncomingDamage
struct ABP_BreakableActor_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BreakableActor.BP_BreakableActor_C.ReceiveBeginPlay
struct ABP_BreakableActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_BreakableActor.BP_BreakableActor_C.OnEnd_Event_1
struct ABP_BreakableActor_C_OnEnd_Event_1_Params
{
};

// Function BP_BreakableActor.BP_BreakableActor_C.Reset
struct ABP_BreakableActor_C_Reset_Params
{
};

// Function BP_BreakableActor.BP_BreakableActor_C.OnNotifyDead
struct ABP_BreakableActor_C_OnNotifyDead_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_BreakableActor.BP_BreakableActor_C.ExecuteUbergraph_BP_BreakableActor
struct ABP_BreakableActor_C_ExecuteUbergraph_BP_BreakableActor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
