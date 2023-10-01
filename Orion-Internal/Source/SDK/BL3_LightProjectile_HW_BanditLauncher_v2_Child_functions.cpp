// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_BanditLauncher_v2_Child_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_HW_BanditLauncher_v2_Child.LightProjectile_HW_BanditLauncher_v2_Child_C.Home
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_HW_BanditLauncher_v2_Child_C::Home(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_HW_BanditLauncher_v2_Child.LightProjectile_HW_BanditLauncher_v2_Child_C.Home");

	ULightProjectile_HW_BanditLauncher_v2_Child_C_Home_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
