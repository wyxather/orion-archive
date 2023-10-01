// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BearFist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_BearFist.Projectile_BearFist_C.CreateBearFistLightBeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  LightBeamData                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BearFist_C::CreateBearFistLightBeam(class UClass* LightBeamData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.CreateBearFistLightBeam");

	AProjectile_BearFist_C_CreateBearFistLightBeam_Params params;
	params.LightBeamData = LightBeamData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.PullEnemyToIronBear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_BearFist_C::PullEnemyToIronBear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.PullEnemyToIronBear");

	AProjectile_BearFist_C_PullEnemyToIronBear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.GetIronBearArmAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewAction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_BearFist_C::GetIronBearArmAction(class AActor* Target, class UClass** NewAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.GetIronBearArmAction");

	AProjectile_BearFist_C_GetIronBearArmAction_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewAction != nullptr)
		*NewAction = params.NewAction;
}


// Function Projectile_BearFist.Projectile_BearFist_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BearFist_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.UserConstructionScript");

	AProjectile_BearFist_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_BearFist_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.ReceiveBeginPlay");

	AProjectile_BearFist_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_BearFist_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.OnExplode");

	AProjectile_BearFist_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_BearFist_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.OnHitWorld");

	AProjectile_BearFist_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_BearFist_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.OnHitDamagableObject");

	AProjectile_BearFist_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.DoProjectilePreCleanup
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BearFist_C::DoProjectilePreCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.DoProjectilePreCleanup");

	AProjectile_BearFist_C_DoProjectilePreCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.DoProjectilePostCleanup
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BearFist_C::DoProjectilePostCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.DoProjectilePostCleanup");

	AProjectile_BearFist_C_DoProjectilePostCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.AttachNewChain
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BearFist_C::AttachNewChain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.AttachNewChain");

	AProjectile_BearFist_C_AttachNewChain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProjectile_BearFist_C::BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist");

	AProjectile_BearFist_C_BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BearFist.Projectile_BearFist_C.ExecuteUbergraph_Projectile_BearFist
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BearFist_C::ExecuteUbergraph_Projectile_BearFist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BearFist.Projectile_BearFist_C.ExecuteUbergraph_Projectile_BearFist");

	AProjectile_BearFist_C_ExecuteUbergraph_Projectile_BearFist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
