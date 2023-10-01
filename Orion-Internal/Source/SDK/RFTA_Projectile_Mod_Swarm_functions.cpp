// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Projectile_Mod_Swarm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnRep_IsHome
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::OnRep_IsHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnRep_IsHome");

	AProjectile_Mod_Swarm_C_OnRep_IsHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.EnableVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::EnableVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.EnableVFX");

	AProjectile_Mod_Swarm_C_EnableVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.DisableVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::DisableVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.DisableVFX");

	AProjectile_Mod_Swarm_C_DisableVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateHomeStatus
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::UpdateHomeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateHomeStatus");

	AProjectile_Mod_Swarm_C_UpdateHomeStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateCollision
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::UpdateCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateCollision");

	AProjectile_Mod_Swarm_C_UpdateCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnRep_ReturningHome
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::OnRep_ReturningHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnRep_ReturningHome");

	AProjectile_Mod_Swarm_C_OnRep_ReturningHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateHome
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Mod_Swarm_C::UpdateHome(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateHome");

	AProjectile_Mod_Swarm_C_UpdateHome_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.GoToHome
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::GoToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.GoToHome");

	AProjectile_Mod_Swarm_C_GoToHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateTarget
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::UpdateTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.UpdateTarget");

	AProjectile_Mod_Swarm_C_UpdateTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ValidateHit
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool*                          bSimulating                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AProjectile_Mod_Swarm_C::ValidateHit(struct FHitResult* Hit, bool* bSimulating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ValidateHit");

	AProjectile_Mod_Swarm_C_ValidateHit_Params params;
	params.Hit = Hit;
	params.bSimulating = bSimulating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnProjectileHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_Mod_Swarm_C::OnProjectileHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnProjectileHit");

	AProjectile_Mod_Swarm_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Mod_Swarm_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ReceiveTick");

	AProjectile_Mod_Swarm_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.HandleTargetAcceleration
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Mod_Swarm_C::HandleTargetAcceleration(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.HandleTargetAcceleration");

	AProjectile_Mod_Swarm_C_HandleTargetAcceleration_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.SetHomingTarget
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Mod_Swarm_C::SetHomingTarget(class AActor** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.SetHomingTarget");

	AProjectile_Mod_Swarm_C_SetHomingTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C. StopHoming
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::_StopHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C. StopHoming");

	AProjectile_Mod_Swarm_C__StopHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.InitDumbFire
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Mod_Swarm_C::InitDumbFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.InitDumbFire");

	AProjectile_Mod_Swarm_C_InitDumbFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AProjectile_Mod_Swarm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ReceiveBeginPlay");

	AProjectile_Mod_Swarm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ExecuteUbergraph_Projectile_Mod_Swarm
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_Mod_Swarm_C::ExecuteUbergraph_Projectile_Mod_Swarm(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.ExecuteUbergraph_Projectile_Mod_Swarm");

	AProjectile_Mod_Swarm_C_ExecuteUbergraph_Projectile_Mod_Swarm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnHomeStatusChanged__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 CurrentProjectile              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          IsHome                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_Mod_Swarm_C::OnHomeStatusChanged__DelegateSignature(class AActor** CurrentProjectile, bool* IsHome)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Swarm.Projectile_Mod_Swarm_C.OnHomeStatusChanged__DelegateSignature");

	AProjectile_Mod_Swarm_C_OnHomeStatusChanged__DelegateSignature_Params params;
	params.CurrentProjectile = CurrentProjectile;
	params.IsHome = IsHome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
