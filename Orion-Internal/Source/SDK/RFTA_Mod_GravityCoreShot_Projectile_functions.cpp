// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_GravityCoreShot_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_GravityCoreShot_Projectile_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.FilterIncomingDamage");

	AMod_GravityCoreShot_Projectile_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.OnProjectileHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMod_GravityCoreShot_Projectile_C::OnProjectileHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.OnProjectileHit");

	AMod_GravityCoreShot_Projectile_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AMod_GravityCoreShot_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.ReceiveBeginPlay");

	AMod_GravityCoreShot_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.OnProjectileShot
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_GravityCoreShot_Projectile_C::OnProjectileShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.OnProjectileShot");

	AMod_GravityCoreShot_Projectile_C_OnProjectileShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.ExecuteUbergraph_Mod_GravityCoreShot_Projectile
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_GravityCoreShot_Projectile_C::ExecuteUbergraph_Mod_GravityCoreShot_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_GravityCoreShot_Projectile.Mod_GravityCoreShot_Projectile_C.ExecuteUbergraph_Mod_GravityCoreShot_Projectile");

	AMod_GravityCoreShot_Projectile_C_ExecuteUbergraph_Mod_GravityCoreShot_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
