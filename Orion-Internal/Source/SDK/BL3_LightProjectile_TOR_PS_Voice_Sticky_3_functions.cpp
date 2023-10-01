// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_PS_Voice_Sticky_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnExplode
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_PS_Voice_Sticky_2_C::OnExplode(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnExplode");

	ULightProjectile_TOR_PS_Voice_Sticky_2_C_OnExplode_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnAttached
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 AttachedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_PS_Voice_Sticky_2_C::OnAttached(class ULightProjectile** Projectile, class AActor** AttachedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnAttached");

	ULightProjectile_TOR_PS_Voice_Sticky_2_C_OnAttached_Params params;
	params.Projectile = Projectile;
	params.AttachedActor = AttachedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_PS_Voice_Sticky_2_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C.OnLifetimeExpired");

	ULightProjectile_TOR_PS_Voice_Sticky_2_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
