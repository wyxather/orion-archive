// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleApproachAndGetOut_Shared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VehicleApproachAndGetOut_Shared.AIAction_VehicleApproachAndGetOut_Shared_C.ExecuteUbergraph_AIAction_VehicleApproachAndGetOut_Shared
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VehicleApproachAndGetOut_Shared_C::ExecuteUbergraph_AIAction_VehicleApproachAndGetOut_Shared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VehicleApproachAndGetOut_Shared.AIAction_VehicleApproachAndGetOut_Shared_C.ExecuteUbergraph_AIAction_VehicleApproachAndGetOut_Shared");

	UAIAction_VehicleApproachAndGetOut_Shared_C_ExecuteUbergraph_AIAction_VehicleApproachAndGetOut_Shared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
