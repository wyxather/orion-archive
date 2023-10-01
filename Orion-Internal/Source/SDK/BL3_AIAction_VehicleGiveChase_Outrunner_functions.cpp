// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleGiveChase_Outrunner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VehicleGiveChase_Outrunner.AIAction_VehicleGiveChase_Outrunner_C.ExecuteUbergraph_AIAction_VehicleGiveChase_Outrunner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VehicleGiveChase_Outrunner_C::ExecuteUbergraph_AIAction_VehicleGiveChase_Outrunner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VehicleGiveChase_Outrunner.AIAction_VehicleGiveChase_Outrunner_C.ExecuteUbergraph_AIAction_VehicleGiveChase_Outrunner");

	UAIAction_VehicleGiveChase_Outrunner_C_ExecuteUbergraph_AIAction_VehicleGiveChase_Outrunner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
