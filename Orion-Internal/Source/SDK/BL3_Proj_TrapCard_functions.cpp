// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TrapCard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_TrapCard.Proj_TrapCard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_TrapCard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TrapCard.Proj_TrapCard_C.UserConstructionScript");

	AProj_TrapCard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TrapCard.Proj_TrapCard_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_TrapCard
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_TrapCard_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_TrapCard(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TrapCard.Proj_TrapCard_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_TrapCard");

	AProj_TrapCard_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_TrapCard_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TrapCard.Proj_TrapCard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_TrapCard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TrapCard.Proj_TrapCard_C.ReceiveBeginPlay");

	AProj_TrapCard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TrapCard.Proj_TrapCard_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_TrapCard_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TrapCard.Proj_TrapCard_C.OnExplode");

	AProj_TrapCard_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TrapCard.Proj_TrapCard_C.ExecuteUbergraph_Proj_TrapCard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_TrapCard_C::ExecuteUbergraph_Proj_TrapCard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TrapCard.Proj_TrapCard_C.ExecuteUbergraph_Proj_TrapCard");

	AProj_TrapCard_C_ExecuteUbergraph_Proj_TrapCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
