#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_PowerfulConnections_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.MRE_OpenMarcusTrapDoor
struct APrologue_M_PowerfulConnections_C_MRE_OpenMarcusTrapDoor_Params
{
};

// Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.BndEvt__IO_MissionScripted_BrokenVendingMachine_Weapon_2_K2Node_ActorBoundEvent_0_MissionGrant__DelegateSignature
struct APrologue_M_PowerfulConnections_C_BndEvt__IO_MissionScripted_BrokenVendingMachine_Weapon_2_K2Node_ActorBoundEvent_0_MissionGrant__DelegateSignature_Params
{
};

// Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.BndEvt__OakTriggerCapsule_M_PowerfulConnections_InstallSpine_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature
struct APrologue_M_PowerfulConnections_C_BndEvt__OakTriggerCapsule_M_PowerfulConnections_InstallSpine_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.ExecuteUbergraph_Prologue_M_PowerfulConnections
struct APrologue_M_PowerfulConnections_C_ExecuteUbergraph_Prologue_M_PowerfulConnections_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
