// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleApproachAndHalt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VehicleApproachAndHalt.AIAction_VehicleApproachAndHalt_C.ExecuteUbergraph_AIAction_VehicleApproachAndHalt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VehicleApproachAndHalt_C::ExecuteUbergraph_AIAction_VehicleApproachAndHalt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VehicleApproachAndHalt.AIAction_VehicleApproachAndHalt_C.ExecuteUbergraph_AIAction_VehicleApproachAndHalt");

	UAIAction_VehicleApproachAndHalt_C_ExecuteUbergraph_AIAction_VehicleApproachAndHalt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
