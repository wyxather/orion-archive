// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Remnant_TemporaryWaypoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C.ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMap_Remnant_TemporaryWaypoint_C::ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C.ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint");

	UMiniMap_Remnant_TemporaryWaypoint_C_ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
