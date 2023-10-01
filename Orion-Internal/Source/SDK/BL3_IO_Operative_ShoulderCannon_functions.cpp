// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Operative_ShoulderCannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::OperativeShoulderCannonCreateLightProjectile(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile");

	AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonCreateLightProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeShoulderCannon> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::OperativeShoulderCannonSetState(TEnumAsByte<EOperativeShoulderCannon> NewState, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState");

	AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonSetState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::OperativeFireShoulderCannon(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon");

	AIO_Operative_ShoulderCannon_C_OperativeFireShoulderCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DigistructIn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::OperativeShoulderCannonDigistructFinished(bool DigistructIn, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished");

	AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonDigistructFinished_Params params;
	params.DigistructIn = DigistructIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod5
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::TryCannonMod5(class UObject* DamageType, class AActor* DamagedActor, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod5");

	AIO_Operative_ShoulderCannon_C_TryCannonMod5_Params params;
	params.DamageType = DamageType;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WarCrit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::TryCannonMod4(bool WarCrit, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod4");

	AIO_Operative_ShoulderCannon_C_TryCannonMod4_Params params;
	params.WarCrit = WarCrit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod3
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasCritOrDeath                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::TryCannonMod3(class AActor* DamagedActor, bool WasCritOrDeath, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod3");

	AIO_Operative_ShoulderCannon_C_TryCannonMod3_Params params;
	params.DamagedActor = DamagedActor;
	params.WasCritOrDeath = WasCritOrDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.CanBePulled
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::CanBePulled(class AActor* Target, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.CanBePulled");

	AIO_Operative_ShoulderCannon_C_CanBePulled_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.PlayCannonFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::PlayCannonFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.PlayCannonFeedback");

	AIO_Operative_ShoulderCannon_C_PlayCannonFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.AttachToOwner
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::AttachToOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.AttachToOwner");

	AIO_Operative_ShoulderCannon_C_AttachToOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetFireAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::GetFireAction(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetFireAction");

	AIO_Operative_ShoulderCannon_C_GetFireAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetShoulderCannonDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIO_Operative_ShoulderCannon_C::GetShoulderCannonDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetShoulderCannonDamage");

	AIO_Operative_ShoulderCannon_C_GetShoulderCannonDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnBeginReload
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::OnBeginReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnBeginReload");

	AIO_Operative_ShoulderCannon_C_OnBeginReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnFininshedDespawned
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::OnFininshedDespawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnFininshedDespawned");

	AIO_Operative_ShoulderCannon_C_OnFininshedDespawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnDespawning
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::OnDespawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnDespawning");

	AIO_Operative_ShoulderCannon_C_OnDespawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonFired
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::OnCannonFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonFired");

	AIO_Operative_ShoulderCannon_C_OnCannonFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonCreated
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::OnCannonCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonCreated");

	AIO_Operative_ShoulderCannon_C_OnCannonCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnRep_CannonState
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::OnRep_CannonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnRep_CannonState");

	AIO_Operative_ShoulderCannon_C_OnRep_CannonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.UserConstructionScript");

	AIO_Operative_ShoulderCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginReloadAnim
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::BeginReloadAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginReloadAnim");

	AIO_Operative_ShoulderCannon_C_BeginReloadAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.EndReload
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::EndReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.EndReload");

	AIO_Operative_ShoulderCannon_C_EndReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::OperativeShoulderCannonReload(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload");

	AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonReload_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fast                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::OperativeRemoveShoulderCannon(bool Fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon");

	AIO_Operative_ShoulderCannon_C_OperativeRemoveShoulderCannon_Params params;
	params.Fast = Fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartIdleAfterFireTimer
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::StartIdleAfterFireTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartIdleAfterFireTimer");

	AIO_Operative_ShoulderCannon_C_StartIdleAfterFireTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.IdleToUnequip
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::IdleToUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.IdleToUnequip");

	AIO_Operative_ShoulderCannon_C_IdleToUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TransitionToUnequipState
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::TransitionToUnequipState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TransitionToUnequipState");

	AIO_Operative_ShoulderCannon_C_TransitionToUnequipState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartUnequippedIdle
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::StartUnequippedIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartUnequippedIdle");

	AIO_Operative_ShoulderCannon_C_StartUnequippedIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AIO_Operative_ShoulderCannon_C::ShoulderCannon_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedDeath");

	AIO_Operative_ShoulderCannon_C_ShoulderCannon_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginCannonFireAnim
// (BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::BeginCannonFireAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginCannonFireAnim");

	AIO_Operative_ShoulderCannon_C_BeginCannonFireAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AIO_Operative_ShoulderCannon_C::ShoulderCannon_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedAnyDamage");

	AIO_Operative_ShoulderCannon_C_ShoulderCannon_OnCausedAnyDamage_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ReceiveBeginPlay");

	AIO_Operative_ShoulderCannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.Audio_PlayFiringSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AIO_Operative_ShoulderCannon_C::Audio_PlayFiringSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.Audio_PlayFiringSound");

	AIO_Operative_ShoulderCannon_C_Audio_PlayFiringSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ExecuteUbergraph_IO_Operative_ShoulderCannon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Operative_ShoulderCannon_C::ExecuteUbergraph_IO_Operative_ShoulderCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ExecuteUbergraph_IO_Operative_ShoulderCannon");

	AIO_Operative_ShoulderCannon_C_ExecuteUbergraph_IO_Operative_ShoulderCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
