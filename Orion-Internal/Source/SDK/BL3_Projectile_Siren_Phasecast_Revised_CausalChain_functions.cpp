// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_CausalChain_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.CalculateDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_CausalChain_C::CalculateDamage(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.CalculateDamage");

	AProjectile_Siren_Phasecast_Revised_CausalChain_C_CalculateDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Siren_Phasecast_Revised_CausalChain_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.UserConstructionScript");

	AProjectile_Siren_Phasecast_Revised_CausalChain_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.DoDamageToEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_CausalChain_C::DoDamageToEnemy(class AActor** Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.DoDamageToEnemy");

	AProjectile_Siren_Phasecast_Revised_CausalChain_C_DoDamageToEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Siren_Phasecast_Revised_CausalChain_C::ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain");

	AProjectile_Siren_Phasecast_Revised_CausalChain_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
