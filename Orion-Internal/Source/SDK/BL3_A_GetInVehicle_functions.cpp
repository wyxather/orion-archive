// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_GetInVehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_GetInVehicle.A_GetInVehicle_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_GetInVehicle_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_GetInVehicle.A_GetInVehicle_C.OnBegin");

	UA_GetInVehicle_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_GetInVehicle.A_GetInVehicle_C.ExecuteUbergraph_A_GetInVehicle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_GetInVehicle_C::ExecuteUbergraph_A_GetInVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_GetInVehicle.A_GetInVehicle_C.ExecuteUbergraph_A_GetInVehicle");

	UA_GetInVehicle_C_ExecuteUbergraph_A_GetInVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
