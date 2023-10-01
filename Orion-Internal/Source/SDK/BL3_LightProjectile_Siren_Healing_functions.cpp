// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_Healing_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_Siren_Healing.LightProjectile_Siren_Healing_C.TryToEnabledHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Siren_Healing_C::TryToEnabledHoming(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Siren_Healing.LightProjectile_Siren_Healing_C.TryToEnabledHoming");

	ULightProjectile_Siren_Healing_C_TryToEnabledHoming_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
