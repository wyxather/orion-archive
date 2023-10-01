// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FusionCannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_FusionCannon.Mod_FusionCannon_C.CheckStopActivation
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::CheckStopActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.CheckStopActivation");

	AMod_FusionCannon_C_CheckStopActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.GetDamageForMultipleCharges
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Charges                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OutDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::GetDamageForMultipleCharges(int* Charges, float* OutDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.GetDamageForMultipleCharges");

	AMod_FusionCannon_C_GetDamageForMultipleCharges_Params params;
	params.Charges = Charges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamage != nullptr)
		*OutDamage = params.OutDamage;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.DetermineStoppingPoint
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 OutEndBeamLocation             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::DetermineStoppingPoint(struct FVector* Start, struct FVector* End, struct FVector* OutEndBeamLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.DetermineStoppingPoint");

	AMod_FusionCannon_C_DetermineStoppingPoint_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEndBeamLocation != nullptr)
		*OutEndBeamLocation = params.OutEndBeamLocation;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.SweepDamage
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::SweepDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.SweepDamage");

	AMod_FusionCannon_C_SweepDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.DamageActor
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMod_FusionCannon_C::DamageActor(class AActor** Actor, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.DamageActor");

	AMod_FusionCannon_C_DamageActor_Params params;
	params.Actor = Actor;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.GetInterpolatedBeamLocation
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::GetInterpolatedBeamLocation(struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.GetInterpolatedBeamLocation");

	AMod_FusionCannon_C_GetInterpolatedBeamLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (End != nullptr)
		*End = params.End;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.GetBeamStartStop
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Stop                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::GetBeamStartStop(struct FVector* Start, struct FVector* Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.GetBeamStartStop");

	AMod_FusionCannon_C_GetBeamStartStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (Stop != nullptr)
		*Stop = params.Stop;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.InterpolateBeamLocation
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::InterpolateBeamLocation(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.InterpolateBeamLocation");

	AMod_FusionCannon_C_InterpolateBeamLocation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.SetBeamLocation
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::SetBeamLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.SetBeamLocation");

	AMod_FusionCannon_C_SetBeamLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnEndBeamFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::OnEndBeamFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnEndBeamFX");

	AMod_FusionCannon_C_OnEndBeamFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnBeginBeamFX
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::OnBeginBeamFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnBeginBeamFX");

	AMod_FusionCannon_C_OnBeginBeamFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.UpdateBeamVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::UpdateBeamVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.UpdateBeamVisibility");

	AMod_FusionCannon_C_UpdateBeamVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnRep_BeamFiring
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::OnRep_BeamFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnRep_BeamFiring");

	AMod_FusionCannon_C_OnRep_BeamFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_FusionCannon_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.ModifyInspectInfo");

	AMod_FusionCannon_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_FusionCannon_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.ModifyDamage");

	AMod_FusionCannon_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.WindupForceFeedback__FinishedFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void AMod_FusionCannon_C::WindupForceFeedback__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.WindupForceFeedback__FinishedFunc");

	AMod_FusionCannon_C_WindupForceFeedback__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.WindupForceFeedback__UpdateFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void AMod_FusionCannon_C::WindupForceFeedback__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.WindupForceFeedback__UpdateFunc");

	AMod_FusionCannon_C_WindupForceFeedback__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.SetBeamFiring_Server
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Firing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_FusionCannon_C::SetBeamFiring_Server(bool* Firing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.SetBeamFiring_Server");

	AMod_FusionCannon_C_SetBeamFiring_Server_Params params;
	params.Firing = Firing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.SFXStartBeamLoops
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::SFXStartBeamLoops()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.SFXStartBeamLoops");

	AMod_FusionCannon_C_SFXStartBeamLoops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.SFXEndBeamLoops
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::SFXEndBeamLoops()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.SFXEndBeamLoops");

	AMod_FusionCannon_C_SFXEndBeamLoops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.ReceiveTick");

	AMod_FusionCannon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.StopFiringLaser
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::StopFiringLaser()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.StopFiringLaser");

	AMod_FusionCannon_C_StopFiringLaser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.DoDamage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_FusionCannon_C::DoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.DoDamage");

	AMod_FusionCannon_C_DoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnFire
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnFire");

	AMod_FusionCannon_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.ServerApplyDamage
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMod_FusionCannon_C::ServerApplyDamage(class AActor** Actor, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.ServerApplyDamage");

	AMod_FusionCannon_C_ServerApplyDamage_Params params;
	params.Actor = Actor;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnPreFireEnd
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FusionCannon_C::OnPreFireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnPreFireEnd");

	AMod_FusionCannon_C_OnPreFireEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnActivateMod
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EModActiveState*               ActiveState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::OnActivateMod(EModActiveState* ActiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnActivateMod");

	AMod_FusionCannon_C_OnActivateMod_Params params;
	params.ActiveState = ActiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnPreFireBegin
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FusionCannon_C::OnPreFireBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnPreFireBegin");

	AMod_FusionCannon_C_OnPreFireBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnDetached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FusionCannon_C::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnDetached");

	AMod_FusionCannon_C_OnDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.OnDeactivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FusionCannon_C::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.OnDeactivate");

	AMod_FusionCannon_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FusionCannon.Mod_FusionCannon_C.ExecuteUbergraph_Mod_FusionCannon
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FusionCannon_C::ExecuteUbergraph_Mod_FusionCannon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FusionCannon.Mod_FusionCannon_C.ExecuteUbergraph_Mod_FusionCannon");

	AMod_FusionCannon_C_ExecuteUbergraph_Mod_FusionCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
