// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_PowerfulConnections_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.MRE_OpenMarcusTrapDoor
// (BlueprintCallable, BlueprintEvent)

void APrologue_M_PowerfulConnections_C::MRE_OpenMarcusTrapDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.MRE_OpenMarcusTrapDoor");

	APrologue_M_PowerfulConnections_C_MRE_OpenMarcusTrapDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.BndEvt__IO_MissionScripted_BrokenVendingMachine_Weapon_2_K2Node_ActorBoundEvent_0_MissionGrant__DelegateSignature
// (BlueprintEvent)

void APrologue_M_PowerfulConnections_C::BndEvt__IO_MissionScripted_BrokenVendingMachine_Weapon_2_K2Node_ActorBoundEvent_0_MissionGrant__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.BndEvt__IO_MissionScripted_BrokenVendingMachine_Weapon_2_K2Node_ActorBoundEvent_0_MissionGrant__DelegateSignature");

	APrologue_M_PowerfulConnections_C_BndEvt__IO_MissionScripted_BrokenVendingMachine_Weapon_2_K2Node_ActorBoundEvent_0_MissionGrant__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.BndEvt__OakTriggerCapsule_M_PowerfulConnections_InstallSpine_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APrologue_M_PowerfulConnections_C::BndEvt__OakTriggerCapsule_M_PowerfulConnections_InstallSpine_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.BndEvt__OakTriggerCapsule_M_PowerfulConnections_InstallSpine_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature");

	APrologue_M_PowerfulConnections_C_BndEvt__OakTriggerCapsule_M_PowerfulConnections_InstallSpine_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.ExecuteUbergraph_Prologue_M_PowerfulConnections
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrologue_M_PowerfulConnections_C::ExecuteUbergraph_Prologue_M_PowerfulConnections(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_PowerfulConnections.Prologue_M_PowerfulConnections_C.ExecuteUbergraph_Prologue_M_PowerfulConnections");

	APrologue_M_PowerfulConnections_C_ExecuteUbergraph_Prologue_M_PowerfulConnections_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
