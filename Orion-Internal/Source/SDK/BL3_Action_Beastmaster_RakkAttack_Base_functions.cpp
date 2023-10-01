// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_RakkAttack_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.DoPortalFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Var2Anim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_RakkAttack_Base_C::DoPortalFX(bool Var2Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.DoPortalFX");

	UAction_Beastmaster_RakkAttack_Base_C_DoPortalFX_Params params;
	params.Var2Anim = Var2Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.EnsureGoodEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::EnsureGoodEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.EnsureGoodEnd");

	UAction_Beastmaster_RakkAttack_Base_C_EnsureGoodEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetNextHomingTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_RakkAttack_Base_C::GetNextHomingTarget(class AActor** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetNextHomingTarget");

	UAction_Beastmaster_RakkAttack_Base_C_GetNextHomingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.HandleRakkSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProjectile_RakkAttack_Rakk_C* NewRakk                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_RakkAttack_Base_C::HandleRakkSpawn(class AProjectile_RakkAttack_Rakk_C* NewRakk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.HandleRakkSpawn");

	UAction_Beastmaster_RakkAttack_Base_C_HandleRakkSpawn_Params params;
	params.NewRakk = NewRakk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetRakkSpawnTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              res                            (Parm, OutParm, IsPlainOldData)

void UAction_Beastmaster_RakkAttack_Base_C::GetRakkSpawnTransform(struct FTransform* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetRakkSpawnTransform");

	UAction_Beastmaster_RakkAttack_Base_C_GetRakkSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.SetMaxNumRakks
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::SetMaxNumRakks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.SetMaxNumRakks");

	UAction_Beastmaster_RakkAttack_Base_C_SetMaxNumRakks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_RakkAttack_Base_C::GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202");

	UAction_Beastmaster_RakkAttack_Base_C_GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnRakks
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::Notify_SpawnRakks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnRakks");

	UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnRakks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_RakkAttack_Base_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerBegin");

	UAction_Beastmaster_RakkAttack_Base_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.FindTargets
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::FindTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.FindTargets");

	UAction_Beastmaster_RakkAttack_Base_C_FindTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_RakkAttack_Base_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerEnd");

	UAction_Beastmaster_RakkAttack_Base_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::Notify_SpawnPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal");

	UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal_Var2
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::Notify_SpawnPortal_Var2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal_Var2");

	UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnPortal_Var2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_Rumble
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::Notify_Rumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_Rumble");

	UAction_Beastmaster_RakkAttack_Base_C_Notify_Rumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::Notify_CameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake");

	UAction_Beastmaster_RakkAttack_Base_C_Notify_CameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake_Var2
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_RakkAttack_Base_C::Notify_CameraShake_Var2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake_Var2");

	UAction_Beastmaster_RakkAttack_Base_C_Notify_CameraShake_Var2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_RakkAttack_Base_C::ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base");

	UAction_Beastmaster_RakkAttack_Base_C_ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
