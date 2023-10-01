// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TedBehavior_ETech_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TedBehavior_ETech.BP_TedBehavior_ETech_C.K2_OnProjectileExplode
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ATedioreProjectile**     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TedBehavior_ETech_C::K2_OnProjectileExplode(class ATedioreProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TedBehavior_ETech.BP_TedBehavior_ETech_C.K2_OnProjectileExplode");

	UBP_TedBehavior_ETech_C_K2_OnProjectileExplode_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
