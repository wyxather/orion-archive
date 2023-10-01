// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_Schism_Spawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.CalcSchismFireTrajectory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class APawn*                   Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void ULightProjectile_Siren_Schism_Spawner_C::CalcSchismFireTrajectory(const struct FVector& SpawnLocation, class APawn* Instigator, struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.CalcSchismFireTrajectory");

	ULightProjectile_Siren_Schism_Spawner_C_CalcSchismFireTrajectory_Params params;
	params.SpawnLocation = SpawnLocation;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.FireSchismProjectilesAtTargets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          SchismDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ProjectileOwner                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<class AActor*>          Targets                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULightProjectile_Siren_Schism_Spawner_C::FireSchismProjectilesAtTargets(float SchismDamage, class APawn* ProjectileOwner, const struct FVector& Location, TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.FireSchismProjectilesAtTargets");

	ULightProjectile_Siren_Schism_Spawner_C_FireSchismProjectilesAtTargets_Params params;
	params.SchismDamage = SchismDamage;
	params.ProjectileOwner = ProjectileOwner;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.ExplodeProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Siren_Schism_Spawner_C::ExplodeProjectile(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.ExplodeProjectile");

	ULightProjectile_Siren_Schism_Spawner_C_ExplodeProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.OnExplode
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Siren_Schism_Spawner_C::OnExplode(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.OnExplode");

	ULightProjectile_Siren_Schism_Spawner_C_OnExplode_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Siren_Schism_Spawner_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.OnLifetimeExpired");

	ULightProjectile_Siren_Schism_Spawner_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
