// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Beastmaster_TrapSpawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.GetBarrierPlacementTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              res                            (Parm, OutParm, IsPlainOldData)

void AProjectile_Beastmaster_TrapSpawner_C::GetBarrierPlacementTransform(struct FTransform* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.GetBarrierPlacementTransform");

	AProjectile_Beastmaster_TrapSpawner_C_GetBarrierPlacementTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.UserConstructionScript");

	AProjectile_Beastmaster_TrapSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Beastmaster_TrapSpawner_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner");

	AProjectile_Beastmaster_TrapSpawner_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.SpawnBarrier
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_C::SpawnBarrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.SpawnBarrier");

	AProjectile_Beastmaster_TrapSpawner_C_SpawnBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnExplode");

	AProjectile_Beastmaster_TrapSpawner_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Beastmaster_TrapSpawner_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnHitWorld");

	AProjectile_Beastmaster_TrapSpawner_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OpenHitWorldGate
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_C::OpenHitWorldGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OpenHitWorldGate");

	AProjectile_Beastmaster_TrapSpawner_C_OpenHitWorldGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveBeginPlay");

	AProjectile_Beastmaster_TrapSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.StartWobble
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_C::StartWobble()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.StartWobble");

	AProjectile_Beastmaster_TrapSpawner_C_StartWobble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.DidTrapSpawn
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_C::DidTrapSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.DidTrapSpawn");

	AProjectile_Beastmaster_TrapSpawner_C_DidTrapSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveDestroyed");

	AProjectile_Beastmaster_TrapSpawner_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Beastmaster_TrapSpawner_C::ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner");

	AProjectile_Beastmaster_TrapSpawner_C_ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
