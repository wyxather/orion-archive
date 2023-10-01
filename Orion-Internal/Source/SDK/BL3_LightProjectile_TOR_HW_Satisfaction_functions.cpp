// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_HW_Satisfaction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_HW_Satisfaction.LightProjectile_TOR_HW_Satisfaction_C.HomeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_HW_Satisfaction_C::HomeIn(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_HW_Satisfaction.LightProjectile_TOR_HW_Satisfaction_C.HomeIn");

	ULightProjectile_TOR_HW_Satisfaction_C_HomeIn_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
