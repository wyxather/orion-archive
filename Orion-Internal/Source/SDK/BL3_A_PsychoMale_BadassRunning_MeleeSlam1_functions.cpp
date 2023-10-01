// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_BadassRunning_MeleeSlam1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.GbxAsyncRequest_Hit_11117E0B4C3CBCBEB6C434B346B833D5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSlam1_C::GbxAsyncRequest_Hit_11117E0B4C3CBCBEB6C434B346B833D5(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.GbxAsyncRequest_Hit_11117E0B4C3CBCBEB6C434B346B833D5");

	UA_PsychoMale_BadassRunning_MeleeSlam1_C_GbxAsyncRequest_Hit_11117E0B4C3CBCBEB6C434B346B833D5_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSlam1_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.OnBegin");

	UA_PsychoMale_BadassRunning_MeleeSlam1_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSlam1_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.OnEnd");

	UA_PsychoMale_BadassRunning_MeleeSlam1_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_BadassRunning_MeleeSlam1_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.MeleeStrike");

	UA_PsychoMale_BadassRunning_MeleeSlam1_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.LockRotation
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_BadassRunning_MeleeSlam1_C::LockRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.LockRotation");

	UA_PsychoMale_BadassRunning_MeleeSlam1_C_LockRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_BadassRunning_MeleeSlam1_C::ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_BadassRunning_MeleeSlam1.A_PsychoMale_BadassRunning_MeleeSlam1_C.ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam1");

	UA_PsychoMale_BadassRunning_MeleeSlam1_C_ExecuteUbergraph_A_PsychoMale_BadassRunning_MeleeSlam1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
