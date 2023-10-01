// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Bomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_Bomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.UserConstructionScript");

	AProjectile_Siren_Phasecast_Revised_Bomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitWorld");

	AProjectile_Siren_Phasecast_Revised_Bomb_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitEnemy");

	AProjectile_Siren_Phasecast_Revised_Bomb_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnExplode");

	AProjectile_Siren_Phasecast_Revised_Bomb_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnOverlappedEnemy(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedEnemy");

	AProjectile_Siren_Phasecast_Revised_Bomb_C_OnOverlappedEnemy_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedNeutral
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnOverlappedNeutral(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedNeutral");

	AProjectile_Siren_Phasecast_Revised_Bomb_C_OnOverlappedNeutral_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Bomb_C::ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb");

	AProjectile_Siren_Phasecast_Revised_Bomb_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
