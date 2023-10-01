// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Tannis_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Tannis.BPI_Tannis_C.ToggleWings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowWings                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tannis_C::ToggleWings(bool ShowWings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tannis.BPI_Tannis_C.ToggleWings");

	UBPI_Tannis_C_ToggleWings_Params params;
	params.ShowWings = ShowWings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
