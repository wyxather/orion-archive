#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TrapCard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_TrapCard.Proj_TrapCard_C.UserConstructionScript
struct AProj_TrapCard_C_UserConstructionScript_Params
{
};

// Function Proj_TrapCard.Proj_TrapCard_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_TrapCard
struct AProj_TrapCard_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_TrapCard_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_TrapCard.Proj_TrapCard_C.ReceiveBeginPlay
struct AProj_TrapCard_C_ReceiveBeginPlay_Params
{
};

// Function Proj_TrapCard.Proj_TrapCard_C.OnExplode
struct AProj_TrapCard_C_OnExplode_Params
{
};

// Function Proj_TrapCard.Proj_TrapCard_C.ExecuteUbergraph_Proj_TrapCard
struct AProj_TrapCard_C_ExecuteUbergraph_Proj_TrapCard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
