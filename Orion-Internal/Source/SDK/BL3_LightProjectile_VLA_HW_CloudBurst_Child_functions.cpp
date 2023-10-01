// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_VLA_HW_CloudBurst_Child_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.OnExplode
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_VLA_HW_CloudBurst_Child_C::OnExplode(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.OnExplode");

	ULightProjectile_VLA_HW_CloudBurst_Child_C_OnExplode_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.Split
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_VLA_HW_CloudBurst_Child_C::Split(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.Split");

	ULightProjectile_VLA_HW_CloudBurst_Child_C_Split_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.OnLifetimeExpired
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_VLA_HW_CloudBurst_Child_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C.OnLifetimeExpired");

	ULightProjectile_VLA_HW_CloudBurst_Child_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
