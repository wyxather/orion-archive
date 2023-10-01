// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehiclePatrol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VehiclePatrol.AIAction_VehiclePatrol_C.ExecuteUbergraph_AIAction_VehiclePatrol
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VehiclePatrol_C::ExecuteUbergraph_AIAction_VehiclePatrol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VehiclePatrol.AIAction_VehiclePatrol_C.ExecuteUbergraph_AIAction_VehiclePatrol");

	UAIAction_VehiclePatrol_C_ExecuteUbergraph_AIAction_VehiclePatrol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
