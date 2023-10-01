// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Block_Concrete_1x2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PD_Block_Concrete_1x2.PD_Block_Concrete_1x2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APD_Block_Concrete_1x2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Block_Concrete_1x2.PD_Block_Concrete_1x2_C.UserConstructionScript");

	APD_Block_Concrete_1x2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
