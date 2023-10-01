// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.StopSlamLoopFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_C::StopSlamLoopFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.StopSlamLoopFeedback");

	UAction_Phasetrance_Slam_C_StopSlamLoopFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamControlledMove
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_C::GetSlamControlledMove(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamControlledMove");

	UAction_Phasetrance_Slam_C_GetSlamControlledMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamTargetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void UAction_Phasetrance_Slam_C::GetSlamTargetLocation(struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamTargetLocation");

	UAction_Phasetrance_Slam_C_GetSlamTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerBegin");

	UAction_Phasetrance_Slam_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.InnerDoSlamDamage
// (Private, BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_C::InnerDoSlamDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.InnerDoSlamDamage");

	UAction_Phasetrance_Slam_C_InnerDoSlamDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_Unlockmovement
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_C::AN_Unlockmovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_Unlockmovement");

	UAction_Phasetrance_Slam_C_AN_Unlockmovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerEnd");

	UAction_Phasetrance_Slam_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBeginBringUpWeapon");

	UAction_Phasetrance_Slam_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_SlamMoveLock
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_C::AN_SlamMoveLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_SlamMoveLock");

	UAction_Phasetrance_Slam_C_AN_SlamMoveLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBegin");

	UAction_Phasetrance_Slam_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLand
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_C::AN_FeedbackSlamLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLand");

	UAction_Phasetrance_Slam_C_AN_FeedbackSlamLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLoop
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_C::AN_FeedbackSlamLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLoop");

	UAction_Phasetrance_Slam_C_AN_FeedbackSlamLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.ExecuteUbergraph_Action_Phasetrance_Slam
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_C::ExecuteUbergraph_Action_Phasetrance_Slam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.ExecuteUbergraph_Action_Phasetrance_Slam");

	UAction_Phasetrance_Slam_C_ExecuteUbergraph_Action_Phasetrance_Slam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
