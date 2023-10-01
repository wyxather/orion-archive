// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleTurretStayIn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VehicleTurretStayIn.AITree_VehicleTurretStayIn_C.ExecuteUbergraph_AITree_VehicleTurretStayIn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VehicleTurretStayIn_C::ExecuteUbergraph_AITree_VehicleTurretStayIn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehicleTurretStayIn.AITree_VehicleTurretStayIn_C.ExecuteUbergraph_AITree_VehicleTurretStayIn");

	UAITree_VehicleTurretStayIn_C_ExecuteUbergraph_AITree_VehicleTurretStayIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
