// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_CalledShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.FireAtTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Operative_CalledShot_C::FireAtTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.FireAtTarget");

	UAction_Operative_CalledShot_C_FireAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.GetCommandRingActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACommandRing_Operative_GRMLN* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_CalledShot_C::GetCommandRingActor(class ACommandRing_Operative_GRMLN** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.GetCommandRingActor");

	UAction_Operative_CalledShot_C_GetCommandRingActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StopTargetingBeam
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Operative_CalledShot_C::StopTargetingBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StopTargetingBeam");

	UAction_Operative_CalledShot_C_StopTargetingBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StartTargetingBeam
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Operative_CalledShot_C::StartTargetingBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StartTargetingBeam");

	UAction_Operative_CalledShot_C_StartTargetingBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_CalledShot_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.OnEnd");

	UAction_Operative_CalledShot_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_LoopStarted
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_CalledShot_C::AN_LoopStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_LoopStarted");

	UAction_Operative_CalledShot_C_AN_LoopStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StopButtonPress
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_CalledShot_C::StopButtonPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.StopButtonPress");

	UAction_Operative_CalledShot_C_StopButtonPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_ShowDevice
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_CalledShot_C::AN_ShowDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_ShowDevice");

	UAction_Operative_CalledShot_C_AN_ShowDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_HideDevice
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_CalledShot_C::AN_HideDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.AN_HideDevice");

	UAction_Operative_CalledShot_C_AN_HideDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_CalledShot_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.OnBegin");

	UAction_Operative_CalledShot_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.ExecuteUbergraph_Action_Operative_CalledShot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_CalledShot_C::ExecuteUbergraph_Action_Operative_CalledShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_CalledShot.Action_Operative_CalledShot_C.ExecuteUbergraph_Action_Operative_CalledShot");

	UAction_Operative_CalledShot_C_ExecuteUbergraph_Action_Operative_CalledShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
