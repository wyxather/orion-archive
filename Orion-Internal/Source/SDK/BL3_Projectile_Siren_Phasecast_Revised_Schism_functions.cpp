// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Schism_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.GetSchismDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Schism_C::GetSchismDamage(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.GetSchismDamage");

	AProjectile_Siren_Phasecast_Revised_Schism_C_GetSchismDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.GetSchismProjectileClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Schism_C::GetSchismProjectileClass(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.GetSchismProjectileClass");

	AProjectile_Siren_Phasecast_Revised_Schism_C_GetSchismProjectileClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.FireSchismProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EnemyTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Schism_C::FireSchismProjectile(class AActor* EnemyTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.FireSchismProjectile");

	AProjectile_Siren_Phasecast_Revised_Schism_C_FireSchismProjectile_Params params;
	params.EnemyTarget = EnemyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_Schism_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.UserConstructionScript");

	AProjectile_Siren_Phasecast_Revised_Schism_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.DoDamageToEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Schism_C::DoDamageToEnemy(class AActor** Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.DoDamageToEnemy");

	AProjectile_Siren_Phasecast_Revised_Schism_C_DoDamageToEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.TrySchism
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Schism_C::TrySchism(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.TrySchism");

	AProjectile_Siren_Phasecast_Revised_Schism_C_TrySchism_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.ResetSchism
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_Schism_C::ResetSchism()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.ResetSchism");

	AProjectile_Siren_Phasecast_Revised_Schism_C_ResetSchism_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_Schism_C::ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism");

	AProjectile_Siren_Phasecast_Revised_Schism_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
