// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleDriver_Technical_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VehicleDriver_Technical.AITree_VehicleDriver_Technical_C.ExecuteUbergraph_AITree_VehicleDriver_Technical
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VehicleDriver_Technical_C::ExecuteUbergraph_AITree_VehicleDriver_Technical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehicleDriver_Technical.AITree_VehicleDriver_Technical_C.ExecuteUbergraph_AITree_VehicleDriver_Technical");

	UAITree_VehicleDriver_Technical_C_ExecuteUbergraph_AITree_VehicleDriver_Technical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
