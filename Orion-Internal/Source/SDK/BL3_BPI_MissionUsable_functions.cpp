// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_MissionUsable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_MissionUsable.BPI_MissionUsable_C.SetUsableState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_MissionUsableState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_MissionUsable_C::SetUsableState(TEnumAsByte<Enum_MissionUsableState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MissionUsable.BPI_MissionUsable_C.SetUsableState");

	UBPI_MissionUsable_C_SetUsableState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
