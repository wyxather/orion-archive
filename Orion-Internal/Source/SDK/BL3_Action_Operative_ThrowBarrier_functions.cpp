// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_ThrowBarrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ThrowBarrier_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnBegin");

	UAction_Operative_ThrowBarrier_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ThrowBarrier_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnEnd");

	UAction_Operative_ThrowBarrier_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ThrowBarrier_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.OnBeginBringUpWeapon");

	UAction_Operative_ThrowBarrier_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.AnimNotify_ThrowProjectile
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_ThrowBarrier_C::AnimNotify_ThrowProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.AnimNotify_ThrowProjectile");

	UAction_Operative_ThrowBarrier_C_AnimNotify_ThrowProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.AN_PerformBarrierTossFeedback
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_ThrowBarrier_C::AN_PerformBarrierTossFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.AN_PerformBarrierTossFeedback");

	UAction_Operative_ThrowBarrier_C_AN_PerformBarrierTossFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.ExecuteUbergraph_Action_Operative_ThrowBarrier
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ThrowBarrier_C::ExecuteUbergraph_Action_Operative_ThrowBarrier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowBarrier.Action_Operative_ThrowBarrier_C.ExecuteUbergraph_Action_Operative_ThrowBarrier");

	UAction_Operative_ThrowBarrier_C_ExecuteUbergraph_Action_Operative_ThrowBarrier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
