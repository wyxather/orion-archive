// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_DoUntoOthers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_DoUntoOthers.LightProjectile_DoUntoOthers_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_DoUntoOthers_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_DoUntoOthers.LightProjectile_DoUntoOthers_C.OnLifetimeExpired");

	ULightProjectile_DoUntoOthers_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_DoUntoOthers.LightProjectile_DoUntoOthers_C.TryEnableProjectileHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_DoUntoOthers_C::TryEnableProjectileHoming(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_DoUntoOthers.LightProjectile_DoUntoOthers_C.TryEnableProjectileHoming");

	ULightProjectile_DoUntoOthers_C_TryEnableProjectileHoming_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_DoUntoOthers.LightProjectile_DoUntoOthers_C.EnableProjectileHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     LightProjectile                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_DoUntoOthers_C::EnableProjectileHoming(class UOakLightProjectile* LightProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_DoUntoOthers.LightProjectile_DoUntoOthers_C.EnableProjectileHoming");

	ULightProjectile_DoUntoOthers_C_EnableProjectileHoming_Params params;
	params.LightProjectile = LightProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
