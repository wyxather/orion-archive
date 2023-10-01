// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Artifact_Sparkplug_Augment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Artifact_Sparkplug_Augment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.UserConstructionScript");

	AProj_Artifact_Sparkplug_Augment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_Artifact_Sparkplug_Augment_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug");

	AProj_Artifact_Sparkplug_Augment_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
// (BlueprintEvent)
// Parameters:
// class AActor*                  LeavingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Artifact_Sparkplug_Augment_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug(class AActor* LeavingActor, bool bIsPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug");

	AProj_Artifact_Sparkplug_Augment_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params params;
	params.LeavingActor = LeavingActor;
	params.bIsPlayer = bIsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProj_Artifact_Sparkplug_Augment_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ReceiveDestroyed");

	AProj_Artifact_Sparkplug_Augment_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Artifact_Sparkplug_Augment_C::ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment");

	AProj_Artifact_Sparkplug_Augment_C_ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
