// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spike_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Rakk_Spike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.UserConstructionScript");

	AProjectile_Rakk_Spike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Spike_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitEnemy");

	AProjectile_Rakk_Spike_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Spike_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitWorld");

	AProjectile_Rakk_Spike_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitFriendly
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Spike_C::OnHitFriendly(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitFriendly");

	AProjectile_Rakk_Spike_C_OnHitFriendly_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitNeutral
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Spike_C::OnHitNeutral(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitNeutral");

	AProjectile_Rakk_Spike_C_OnHitNeutral_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.ExecuteUbergraph_Projectile_Rakk_Spike
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Spike_C::ExecuteUbergraph_Projectile_Rakk_Spike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.ExecuteUbergraph_Projectile_Rakk_Spike");

	AProjectile_Rakk_Spike_C_ExecuteUbergraph_Projectile_Rakk_Spike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
