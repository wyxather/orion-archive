// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleDriver_Outrunner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VehicleDriver_Outrunner.AITree_VehicleDriver_Outrunner_C.ExecuteUbergraph_AITree_VehicleDriver_Outrunner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VehicleDriver_Outrunner_C::ExecuteUbergraph_AITree_VehicleDriver_Outrunner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehicleDriver_Outrunner.AITree_VehicleDriver_Outrunner_C.ExecuteUbergraph_AITree_VehicleDriver_Outrunner");

	UAITree_VehicleDriver_Outrunner_C_ExecuteUbergraph_AITree_VehicleDriver_Outrunner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
