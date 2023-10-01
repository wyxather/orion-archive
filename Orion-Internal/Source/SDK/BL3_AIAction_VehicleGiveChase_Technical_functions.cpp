// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleGiveChase_Technical_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VehicleGiveChase_Technical.AIAction_VehicleGiveChase_Technical_C.ExecuteUbergraph_AIAction_VehicleGiveChase_Technical
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VehicleGiveChase_Technical_C::ExecuteUbergraph_AIAction_VehicleGiveChase_Technical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VehicleGiveChase_Technical.AIAction_VehicleGiveChase_Technical_C.ExecuteUbergraph_AIAction_VehicleGiveChase_Technical");

	UAIAction_VehicleGiveChase_Technical_C_ExecuteUbergraph_AIAction_VehicleGiveChase_Technical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
