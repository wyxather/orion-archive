// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_ThrowDrone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AnimNotify_SpawnDrone
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_ThrowDrone_C::AnimNotify_SpawnDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AnimNotify_SpawnDrone");

	UAction_Operative_ThrowDrone_C_AnimNotify_SpawnDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ThrowDrone_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBegin");

	UAction_Operative_ThrowDrone_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ThrowDrone_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnEnd");

	UAction_Operative_ThrowDrone_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AN_PerformDroneCameraShake
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_ThrowDrone_C::AN_PerformDroneCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.AN_PerformDroneCameraShake");

	UAction_Operative_ThrowDrone_C_AN_PerformDroneCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ThrowDrone_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.OnBeginBringUpWeapon");

	UAction_Operative_ThrowDrone_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.ExecuteUbergraph_Action_Operative_ThrowDrone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ThrowDrone_C::ExecuteUbergraph_Action_Operative_ThrowDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ThrowDrone.Action_Operative_ThrowDrone_C.ExecuteUbergraph_Action_Operative_ThrowDrone");

	UAction_Operative_ThrowDrone_C_ExecuteUbergraph_Action_Operative_ThrowDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
