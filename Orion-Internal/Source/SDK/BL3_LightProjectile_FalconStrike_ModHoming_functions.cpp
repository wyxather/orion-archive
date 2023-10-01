// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_FalconStrike_ModHoming_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C.OnExplode
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_FalconStrike_ModHoming_C::OnExplode(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C.OnExplode");

	ULightProjectile_FalconStrike_ModHoming_C_OnExplode_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C.HomeToTarget03
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_FalconStrike_ModHoming_C::HomeToTarget03(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C.HomeToTarget03");

	ULightProjectile_FalconStrike_ModHoming_C_HomeToTarget03_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C.HomeToTarget02
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_FalconStrike_ModHoming_C::HomeToTarget02(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C.HomeToTarget02");

	ULightProjectile_FalconStrike_ModHoming_C_HomeToTarget02_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C.HomeToTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_FalconStrike_ModHoming_C::HomeToTarget(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C.HomeToTarget");

	ULightProjectile_FalconStrike_ModHoming_C_HomeToTarget_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
