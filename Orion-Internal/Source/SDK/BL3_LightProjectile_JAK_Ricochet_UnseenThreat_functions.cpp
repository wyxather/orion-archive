// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_JAK_Ricochet_UnseenThreat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_JAK_Ricochet_UnseenThreat.LightProjectile_JAK_Ricochet_UnseenThreat_C.OnRicochet
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ULightProjectile_JAK_Ricochet_UnseenThreat_C::OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_JAK_Ricochet_UnseenThreat.LightProjectile_JAK_Ricochet_UnseenThreat_C.OnRicochet");

	ULightProjectile_JAK_Ricochet_UnseenThreat_C_OnRicochet_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_JAK_Ricochet_UnseenThreat.LightProjectile_JAK_Ricochet_UnseenThreat_C.HomeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_JAK_Ricochet_UnseenThreat_C::HomeIn(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_JAK_Ricochet_UnseenThreat.LightProjectile_JAK_Ricochet_UnseenThreat_C.HomeIn");

	ULightProjectile_JAK_Ricochet_UnseenThreat_C_HomeIn_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
