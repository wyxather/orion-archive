// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleTechOutrRam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VehicleTechOutrRam.AIAction_VehicleTechOutrRam_C.ExecuteUbergraph_AIAction_VehicleTechOutrRam
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VehicleTechOutrRam_C::ExecuteUbergraph_AIAction_VehicleTechOutrRam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VehicleTechOutrRam.AIAction_VehicleTechOutrRam_C.ExecuteUbergraph_AIAction_VehicleTechOutrRam");

	UAIAction_VehicleTechOutrRam_C_ExecuteUbergraph_AIAction_VehicleTechOutrRam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
