// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_ImaginaryNumber_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.SpawnOffshoots2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_ImaginaryNumber_C::SpawnOffshoots2(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.SpawnOffshoots2");

	ULightProjectile_ImaginaryNumber_C_SpawnOffshoots2_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.SpawnOffshoots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_ImaginaryNumber_C::SpawnOffshoots(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.SpawnOffshoots");

	ULightProjectile_ImaginaryNumber_C_SpawnOffshoots_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.OnDamage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bCritical                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_ImaginaryNumber_C::OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_ImaginaryNumber.LightProjectile_ImaginaryNumber_C.OnDamage");

	ULightProjectile_ImaginaryNumber_C_OnDamage_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;
	params.bCritical = bCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
