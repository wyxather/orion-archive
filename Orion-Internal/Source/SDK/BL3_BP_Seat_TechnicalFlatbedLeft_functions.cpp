// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Seat_TechnicalFlatbedLeft_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Seat_TechnicalFlatbedLeft.BP_Seat_TechnicalFlatbedLeft_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Seat_TechnicalFlatbedLeft_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seat_TechnicalFlatbedLeft.BP_Seat_TechnicalFlatbedLeft_C.UserConstructionScript");

	ABP_Seat_TechnicalFlatbedLeft_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
