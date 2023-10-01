// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TravelGraph_DLC3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TravelGraph_DLC3.TravelGraph_DLC3_C.ExecuteUbergraph_TravelGraph_DLC3
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTravelGraph_DLC3_C::ExecuteUbergraph_TravelGraph_DLC3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelGraph_DLC3.TravelGraph_DLC3_C.ExecuteUbergraph_TravelGraph_DLC3");

	UTravelGraph_DLC3_C_ExecuteUbergraph_TravelGraph_DLC3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
