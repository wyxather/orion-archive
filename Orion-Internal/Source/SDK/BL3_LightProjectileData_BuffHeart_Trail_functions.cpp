// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectileData_BuffHeart_Trail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectileData_BuffHeart_Trail.LightProjectileData_BuffHeart_Trail_C.OnProxyImpact
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULightProjectileData_BuffHeart_Trail_C::OnProxyImpact(class ULightProjectile** Projectile, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectileData_BuffHeart_Trail.LightProjectileData_BuffHeart_Trail_C.OnProxyImpact");

	ULightProjectileData_BuffHeart_Trail_C_OnProxyImpact_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
