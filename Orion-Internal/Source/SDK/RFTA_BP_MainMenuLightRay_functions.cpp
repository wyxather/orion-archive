// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_MainMenuLightRay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MainMenuLightRay.BP_MainMenuLightRay_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainMenuLightRay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuLightRay.BP_MainMenuLightRay_C.UserConstructionScript");

	ABP_MainMenuLightRay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
