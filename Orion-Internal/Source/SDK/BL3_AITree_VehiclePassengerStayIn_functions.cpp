// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehiclePassengerStayIn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VehiclePassengerStayIn.AITree_VehiclePassengerStayIn_C.ExecuteUbergraph_AITree_VehiclePassengerStayIn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VehiclePassengerStayIn_C::ExecuteUbergraph_AITree_VehiclePassengerStayIn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehiclePassengerStayIn.AITree_VehiclePassengerStayIn_C.ExecuteUbergraph_AITree_VehiclePassengerStayIn");

	UAITree_VehiclePassengerStayIn_C_ExecuteUbergraph_AITree_VehiclePassengerStayIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
