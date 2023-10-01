// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Beastmaster_TrapSpawner_Mod3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_Mod3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.UserConstructionScript");

	AProjectile_Beastmaster_TrapSpawner_Mod3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.DidTrapSpawn
// (BlueprintCallable, BlueprintEvent)

void AProjectile_Beastmaster_TrapSpawner_Mod3_C::DidTrapSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.DidTrapSpawn");

	AProjectile_Beastmaster_TrapSpawner_Mod3_C_DidTrapSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Beastmaster_TrapSpawner_Mod3_C::ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3");

	AProjectile_Beastmaster_TrapSpawner_Mod3_C_ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
