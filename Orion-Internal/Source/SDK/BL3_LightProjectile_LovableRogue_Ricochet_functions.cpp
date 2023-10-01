// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_LovableRogue_Ricochet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_LovableRogue_Ricochet.LightProjectile_LovableRogue_Ricochet_C.HomeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_LovableRogue_Ricochet_C::HomeIn(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_LovableRogue_Ricochet.LightProjectile_LovableRogue_Ricochet_C.HomeIn");

	ULightProjectile_LovableRogue_Ricochet_C_HomeIn_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
