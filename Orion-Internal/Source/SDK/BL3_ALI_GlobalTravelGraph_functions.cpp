// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_GlobalTravelGraph_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALI_GlobalTravelGraph.ALI_GlobalTravelGraph_C.ExecuteUbergraph_ALI_GlobalTravelGraph
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_GlobalTravelGraph_C::ExecuteUbergraph_ALI_GlobalTravelGraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_GlobalTravelGraph.ALI_GlobalTravelGraph_C.ExecuteUbergraph_ALI_GlobalTravelGraph");

	UALI_GlobalTravelGraph_C_ExecuteUbergraph_ALI_GlobalTravelGraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
