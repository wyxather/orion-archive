// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_BadassRunning_MeleeSlam2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.GbxAsyncRequest_Hit_A343E4984F57AA637FF45A9BE50E1813
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSlam2_C::GbxAsyncRequest_Hit_A343E4984F57AA637FF45A9BE50E1813(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.GbxAsyncRequest_Hit_A343E4984F57AA637FF45A9BE50E1813");

	UA_PsychoMale_BadassRunning_MeleeSlam2_C_GbxAsyncRequest_Hit_A343E4984F57AA637FF45A9BE50E1813_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSlam2_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.OnBegin");

	UA_PsychoMale_BadassRunning_MeleeSlam2_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSlam2_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.OnEnd");

	UA_PsychoMale_BadassRunning_MeleeSlam2_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_BadassRunning_MeleeSlam2_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.MeleeStrike");

	UA_PsychoMale_BadassRunning_MeleeSlam2_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.LockRotation
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_BadassRunning_MeleeSlam2_C::LockRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.LockRotation");

	UA_PsychoMale_BadassRunning_MeleeSlam2_C_LockRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSlam2_C::ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam2.A_PsychoMale_BadassRunning_MeleeSlam2_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam2");

	UA_PsychoMale_BadassRunning_MeleeSlam2_C_ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
