// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Operative_BarrierSpawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.GetBarrierPlacementTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              res                            (Parm, OutParm, IsPlainOldData)

void AProjectile_Operative_BarrierSpawner_C::GetBarrierPlacementTransform(struct FTransform* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.GetBarrierPlacementTransform");

	AProjectile_Operative_BarrierSpawner_C_GetBarrierPlacementTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Operative_BarrierSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.UserConstructionScript");

	AProjectile_Operative_BarrierSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Operative_BarrierSpawner_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner");

	AProjectile_Operative_BarrierSpawner_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.SpawnBarrier
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Operative_BarrierSpawner_C::SpawnBarrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.SpawnBarrier");

	AProjectile_Operative_BarrierSpawner_C_SpawnBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_Operative_BarrierSpawner_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnExplode");

	AProjectile_Operative_BarrierSpawner_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Operative_BarrierSpawner_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnHitWorld");

	AProjectile_Operative_BarrierSpawner_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OpenHitWorldGate
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Operative_BarrierSpawner_C::OpenHitWorldGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OpenHitWorldGate");

	AProjectile_Operative_BarrierSpawner_C_OpenHitWorldGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.ExecuteUbergraph_Projectile_Operative_BarrierSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Operative_BarrierSpawner_C::ExecuteUbergraph_Projectile_Operative_BarrierSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.ExecuteUbergraph_Projectile_Operative_BarrierSpawner");

	AProjectile_Operative_BarrierSpawner_C_ExecuteUbergraph_Projectile_Operative_BarrierSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
