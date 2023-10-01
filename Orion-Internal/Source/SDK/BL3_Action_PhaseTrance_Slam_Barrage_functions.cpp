// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Slam_Barrage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.StopSlamLoopFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::StopSlamLoopFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.StopSlamLoopFeedback");

	UAction_PhaseTrance_Slam_Barrage_C_StopSlamLoopFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.InnerStopBeam
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::InnerStopBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.InnerStopBeam");

	UAction_PhaseTrance_Slam_Barrage_C_InnerStopBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.InnerStartBeam
// (Private, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::InnerStartBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.InnerStartBeam");

	UAction_PhaseTrance_Slam_Barrage_C_InnerStartBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_StopBlastBeam
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::AN_StopBlastBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_StopBlastBeam");

	UAction_PhaseTrance_Slam_Barrage_C_AN_StopBlastBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_FireBlastProjectileDown
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::AN_FireBlastProjectileDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_FireBlastProjectileDown");

	UAction_PhaseTrance_Slam_Barrage_C_AN_FireBlastProjectileDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.Cleanup");

	UAction_PhaseTrance_Slam_Barrage_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_DoSlam
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::AN_DoSlam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_DoSlam");

	UAction_PhaseTrance_Slam_Barrage_C_AN_DoSlam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.DoDamageAsync
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::DoDamageAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.DoDamageAsync");

	UAction_PhaseTrance_Slam_Barrage_C_DoDamageAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Slam_Barrage_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnServerBegin");

	UAction_PhaseTrance_Slam_Barrage_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Slam_Barrage_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnServerEnd");

	UAction_PhaseTrance_Slam_Barrage_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_StartBlastBeam
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::AN_StartBlastBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_StartBlastBeam");

	UAction_PhaseTrance_Slam_Barrage_C_AN_StartBlastBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_RemoveBeamEmitter
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::AN_RemoveBeamEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_RemoveBeamEmitter");

	UAction_PhaseTrance_Slam_Barrage_C_AN_RemoveBeamEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Slam_Barrage_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.OnBeginBringUpWeapon");

	UAction_PhaseTrance_Slam_Barrage_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_BeamRumble
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::AN_BeamRumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_BeamRumble");

	UAction_PhaseTrance_Slam_Barrage_C_AN_BeamRumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_SlamLoopRumble
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Slam_Barrage_C::AN_SlamLoopRumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.AN_SlamLoopRumble");

	UAction_PhaseTrance_Slam_Barrage_C_AN_SlamLoopRumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Slam_Barrage_C::ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C.ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage");

	UAction_PhaseTrance_Slam_Barrage_C_ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
