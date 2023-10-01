// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Shield_Aurelia_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_Shield_Aurelia.LightProjectile_Shield_Aurelia_C.GoToTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     LightProjectile                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Shield_Aurelia_C::GoToTarget(class UOakLightProjectile* LightProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Shield_Aurelia.LightProjectile_Shield_Aurelia_C.GoToTarget");

	ULightProjectile_Shield_Aurelia_C_GoToTarget_Params params;
	params.LightProjectile = LightProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
