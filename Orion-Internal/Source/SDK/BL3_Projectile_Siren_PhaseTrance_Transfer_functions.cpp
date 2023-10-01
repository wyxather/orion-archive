// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_PhaseTrance_Transfer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnHomingTargetDied
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_PhaseTrance_Transfer_C::OnHomingTargetDied(class AActor* Receiver, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnHomingTargetDied");

	AProjectile_Siren_PhaseTrance_Transfer_C_OnHomingTargetDied_Params params;
	params.Receiver = Receiver;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.AttachToNewHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::AttachToNewHomingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.AttachToNewHomingTarget");

	AProjectile_Siren_PhaseTrance_Transfer_C_AttachToNewHomingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.DetachFromOldHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::DetachFromOldHomingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.DetachFromOldHomingTarget");

	AProjectile_Siren_PhaseTrance_Transfer_C_DetachFromOldHomingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetNewHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_PhaseTrance_Transfer_C::SetNewHomingTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetNewHomingTarget");

	AProjectile_Siren_PhaseTrance_Transfer_C_SetNewHomingTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.GetGraspDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_PhaseTrance_Transfer_C::GetGraspDuration(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.GetGraspDuration");

	AProjectile_Siren_PhaseTrance_Transfer_C_GetGraspDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetTransferParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::SetTransferParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetTransferParticle");

	AProjectile_Siren_PhaseTrance_Transfer_C_SetTransferParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.PlayExplosionEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::PlayExplosionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.PlayExplosionEffect");

	AProjectile_Siren_PhaseTrance_Transfer_C_PlayExplosionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.UserConstructionScript");

	AProjectile_Siren_PhaseTrance_Transfer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ReceiveBeginPlay");

	AProjectile_Siren_PhaseTrance_Transfer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnExplode");

	AProjectile_Siren_PhaseTrance_Transfer_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer
// (BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer");

	AProjectile_Siren_PhaseTrance_Transfer_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnShutdownGracefully
// (Event, Protected, BlueprintEvent)

void AProjectile_Siren_PhaseTrance_Transfer_C::OnShutdownGracefully()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnShutdownGracefully");

	AProjectile_Siren_PhaseTrance_Transfer_C_OnShutdownGracefully_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_PhaseTrance_Transfer_C::ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer");

	AProjectile_Siren_PhaseTrance_Transfer_C_ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
