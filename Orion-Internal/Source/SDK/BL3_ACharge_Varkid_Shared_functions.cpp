// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_Varkid_Shared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Varkid_Shared_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnBegin");

	UACharge_Varkid_Shared_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.Notify_HitTarget
// (BlueprintCallable, BlueprintEvent)

void UACharge_Varkid_Shared_C::Notify_HitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.Notify_HitTarget");

	UACharge_Varkid_Shared_C_Notify_HitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnMiss
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Varkid_Shared_C::OnMiss(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnMiss");

	UACharge_Varkid_Shared_C_OnMiss_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnLoop
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Varkid_Shared_C::OnLoop(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnLoop");

	UACharge_Varkid_Shared_C_OnLoop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnHitWall
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Varkid_Shared_C::OnHitWall(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnHitWall");

	UACharge_Varkid_Shared_C_OnHitWall_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnReachCliff
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Varkid_Shared_C::OnReachCliff(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnReachCliff");

	UACharge_Varkid_Shared_C_OnReachCliff_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Varkid_Shared_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.OnEnd");

	UACharge_Varkid_Shared_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.Notify_StopDamage
// (BlueprintCallable, BlueprintEvent)

void UACharge_Varkid_Shared_C::Notify_StopDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.Notify_StopDamage");

	UACharge_Varkid_Shared_C_Notify_StopDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.ExecuteUbergraph_ACharge_Varkid_Shared
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Varkid_Shared_C::ExecuteUbergraph_ACharge_Varkid_Shared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Varkid_Shared.ACharge_Varkid_Shared_C.ExecuteUbergraph_ACharge_Varkid_Shared");

	UACharge_Varkid_Shared_C_ExecuteUbergraph_ACharge_Varkid_Shared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
