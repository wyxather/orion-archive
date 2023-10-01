// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GlobalTravelGraph_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalTravelGraph.GlobalTravelGraph_C.ExecuteUbergraph_GlobalTravelGraph
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalTravelGraph_C::ExecuteUbergraph_GlobalTravelGraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalTravelGraph.GlobalTravelGraph_C.ExecuteUbergraph_GlobalTravelGraph");

	UGlobalTravelGraph_C_ExecuteUbergraph_GlobalTravelGraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
