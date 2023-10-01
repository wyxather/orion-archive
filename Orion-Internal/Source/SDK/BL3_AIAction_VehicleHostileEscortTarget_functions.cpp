// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleHostileEscortTarget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VehicleHostileEscortTarget.AIAction_VehicleHostileEscortTarget_C.ExecuteUbergraph_AIAction_VehicleHostileEscortTarget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VehicleHostileEscortTarget_C::ExecuteUbergraph_AIAction_VehicleHostileEscortTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VehicleHostileEscortTarget.AIAction_VehicleHostileEscortTarget_C.ExecuteUbergraph_AIAction_VehicleHostileEscortTarget");

	UAIAction_VehicleHostileEscortTarget_C_ExecuteUbergraph_AIAction_VehicleHostileEscortTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
