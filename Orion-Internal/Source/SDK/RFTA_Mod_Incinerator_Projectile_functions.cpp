// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Incinerator_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_Incinerator_Projectile.Mod_Incinerator_Projectile_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMod_Incinerator_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_Projectile.Mod_Incinerator_Projectile_C.UserConstructionScript");

	AMod_Incinerator_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Incinerator_Projectile.Mod_Incinerator_Projectile_C.OnProjectileHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMod_Incinerator_Projectile_C::OnProjectileHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_Projectile.Mod_Incinerator_Projectile_C.OnProjectileHit");

	AMod_Incinerator_Projectile_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Incinerator_Projectile.Mod_Incinerator_Projectile_C.ExecuteUbergraph_Mod_Incinerator_Projectile
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Incinerator_Projectile_C::ExecuteUbergraph_Mod_Incinerator_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Incinerator_Projectile.Mod_Incinerator_Projectile_C.ExecuteUbergraph_Mod_Incinerator_Projectile");

	AMod_Incinerator_Projectile_C_ExecuteUbergraph_Mod_Incinerator_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
