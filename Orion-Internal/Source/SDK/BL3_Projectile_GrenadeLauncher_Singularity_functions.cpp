// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_GrenadeLauncher_Singularity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.DoGrenadeSingularityMovement
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_GrenadeLauncher_Singularity_C::DoGrenadeSingularityMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.DoGrenadeSingularityMovement");

	AProjectile_GrenadeLauncher_Singularity_C_DoGrenadeSingularityMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.AttemptGrenadeSingularity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_GrenadeLauncher_Singularity_C::AttemptGrenadeSingularity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.AttemptGrenadeSingularity");

	AProjectile_GrenadeLauncher_Singularity_C_AttemptGrenadeSingularity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.InitGrenadeLauncher
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_GrenadeLauncher_Singularity_C::InitGrenadeLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.InitGrenadeLauncher");

	AProjectile_GrenadeLauncher_Singularity_C_InitGrenadeLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_GrenadeLauncher_Singularity_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.UserConstructionScript");

	AProjectile_GrenadeLauncher_Singularity_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_GrenadeLauncher_Singularity_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ReceiveBeginPlay");

	AProjectile_GrenadeLauncher_Singularity_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_GrenadeLauncher_Singularity_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnExplode");

	AProjectile_GrenadeLauncher_Singularity_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_GrenadeLauncher_Singularity_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitDamagableObject");

	AProjectile_GrenadeLauncher_Singularity_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_GrenadeLauncher_Singularity_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitWorld");

	AProjectile_GrenadeLauncher_Singularity_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_GrenadeLauncher_Singularity_C::ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity");

	AProjectile_GrenadeLauncher_Singularity_C_ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
