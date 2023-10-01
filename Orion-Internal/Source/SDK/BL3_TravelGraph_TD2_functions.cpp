// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TravelGraph_TD2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TravelGraph_TD2.TravelGraph_TD2_C.ExecuteUbergraph_TravelGraph_TD2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTravelGraph_TD2_C::ExecuteUbergraph_TravelGraph_TD2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelGraph_TD2.TravelGraph_TD2_C.ExecuteUbergraph_TravelGraph_TD2");

	UTravelGraph_TD2_C_ExecuteUbergraph_TravelGraph_TD2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
