// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_RakkAttack_Rakk_CM_Raid1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnRep_IceRakk
// (BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::OnRep_IceRakk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnRep_IceRakk");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnRep_IceRakk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ConfigureFX
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::ConfigureFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ConfigureFX");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_ConfigureFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.DoRakkDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::DoRakkDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.DoRakkDamage");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_DoRakkDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.SetRakkHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::SetRakkHomingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.SetRakkHomingTarget");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_SetRakkHomingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.UserConstructionScript");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.StartHoming
// (BlueprintCallable, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::StartHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.StartHoming");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_StartHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.HomingTarget_OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::HomingTarget_OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.HomingTarget_OnDeath");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_HomingTarget_OnDeath_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitDamagableObject");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitEnemy");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ReceiveBeginPlay");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnExplode");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_RakkAttack_Rakk_CM_Raid1_C::ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1");

	AProjectile_RakkAttack_Rakk_CM_Raid1_C_ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
