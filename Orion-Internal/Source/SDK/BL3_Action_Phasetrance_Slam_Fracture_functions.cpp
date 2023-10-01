// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_Fracture_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_CreateCastProjectile
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Fracture_C::AN_CreateCastProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_CreateCastProjectile");

	UAction_Phasetrance_Slam_Fracture_C_AN_CreateCastProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Fracture_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnServerEnd");

	UAction_Phasetrance_Slam_Fracture_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Fracture_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.OnBeginBringUpWeapon");

	UAction_Phasetrance_Slam_Fracture_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureRumble
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Fracture_C::AN_PerformSlamFractureRumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureRumble");

	UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureRumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Start
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Fracture_C::AN_PerformSlamFractureCS_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Start");

	UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureCS_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Quake
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Fracture_C::AN_PerformSlamFractureCS_Quake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureCS_Quake");

	UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureCS_Quake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureFB_Server
// (BlueprintCallable, BlueprintEvent)

void UAction_Phasetrance_Slam_Fracture_C::AN_PerformSlamFractureFB_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.AN_PerformSlamFractureFB_Server");

	UAction_Phasetrance_Slam_Fracture_C_AN_PerformSlamFractureFB_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.ExecuteUbergraph_Action_Phasetrance_Slam_Fracture
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Phasetrance_Slam_Fracture_C::ExecuteUbergraph_Action_Phasetrance_Slam_Fracture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C.ExecuteUbergraph_Action_Phasetrance_Slam_Fracture");

	UAction_Phasetrance_Slam_Fracture_C_ExecuteUbergraph_Action_Phasetrance_Slam_Fracture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
