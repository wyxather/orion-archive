// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Decorator_LensFlare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_LensFlare.Decorator_LensFlare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADecorator_LensFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_LensFlare.Decorator_LensFlare_C.UserConstructionScript");

	ADecorator_LensFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
