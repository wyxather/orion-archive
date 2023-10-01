// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TravelGraph_Cartels_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TravelGraph_Cartels.TravelGraph_Cartels_C.ExecuteUbergraph_TravelGraph_Cartels
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTravelGraph_Cartels_C::ExecuteUbergraph_TravelGraph_Cartels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelGraph_Cartels.TravelGraph_Cartels_C.ExecuteUbergraph_TravelGraph_Cartels");

	UTravelGraph_Cartels_C_ExecuteUbergraph_TravelGraph_Cartels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
