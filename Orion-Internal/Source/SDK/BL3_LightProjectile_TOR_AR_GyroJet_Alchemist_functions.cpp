// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_AR_GyroJet_Alchemist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_AR_GyroJet_Alchemist.LightProjectile_TOR_AR_GyroJet_Alchemist_C.OnAttached
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 AttachedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_AR_GyroJet_Alchemist_C::OnAttached(class ULightProjectile** Projectile, class AActor** AttachedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_AR_GyroJet_Alchemist.LightProjectile_TOR_AR_GyroJet_Alchemist_C.OnAttached");

	ULightProjectile_TOR_AR_GyroJet_Alchemist_C_OnAttached_Params params;
	params.Projectile = Projectile;
	params.AttachedActor = AttachedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_TOR_AR_GyroJet_Alchemist.LightProjectile_TOR_AR_GyroJet_Alchemist_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_AR_GyroJet_Alchemist_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_AR_GyroJet_Alchemist.LightProjectile_TOR_AR_GyroJet_Alchemist_C.OnLifetimeExpired");

	ULightProjectile_TOR_AR_GyroJet_Alchemist_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
