// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TedBehavior_Sludge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TedBehavior_Sludge.BP_TedBehavior_Sludge_C.K2_OnProjectileImpact
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ATedioreProjectile**     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_TedBehavior_Sludge_C::K2_OnProjectileImpact(class ATedioreProjectile** Projectile, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TedBehavior_Sludge.BP_TedBehavior_Sludge_C.K2_OnProjectileImpact");

	UBP_TedBehavior_Sludge_C_K2_OnProjectileImpact_Params params;
	params.Projectile = Projectile;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
