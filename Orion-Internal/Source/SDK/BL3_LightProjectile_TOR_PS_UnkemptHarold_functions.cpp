// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_PS_UnkemptHarold_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_PS_UnkemptHarold.LightProjectile_TOR_PS_UnkemptHarold_C.SplitMid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_PS_UnkemptHarold_C::SplitMid(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_PS_UnkemptHarold.LightProjectile_TOR_PS_UnkemptHarold_C.SplitMid");

	ULightProjectile_TOR_PS_UnkemptHarold_C_SplitMid_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_TOR_PS_UnkemptHarold.LightProjectile_TOR_PS_UnkemptHarold_C.SplitSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_PS_UnkemptHarold_C::SplitSide(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_PS_UnkemptHarold.LightProjectile_TOR_PS_UnkemptHarold_C.SplitSide");

	ULightProjectile_TOR_PS_UnkemptHarold_C_SplitSide_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
