// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TravelGraph_BloodyHarvest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TravelGraph_BloodyHarvest.TravelGraph_BloodyHarvest_C.ExecuteUbergraph_TravelGraph_BloodyHarvest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTravelGraph_BloodyHarvest_C::ExecuteUbergraph_TravelGraph_BloodyHarvest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelGraph_BloodyHarvest.TravelGraph_BloodyHarvest_C.ExecuteUbergraph_TravelGraph_BloodyHarvest");

	UTravelGraph_BloodyHarvest_C_ExecuteUbergraph_TravelGraph_BloodyHarvest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
