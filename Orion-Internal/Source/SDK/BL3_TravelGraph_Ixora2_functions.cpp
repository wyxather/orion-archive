// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TravelGraph_Ixora2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TravelGraph_Ixora2.TravelGraph_Ixora2_C.ExecuteUbergraph_TravelGraph_Ixora2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTravelGraph_Ixora2_C::ExecuteUbergraph_TravelGraph_Ixora2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelGraph_Ixora2.TravelGraph_Ixora2_C.ExecuteUbergraph_TravelGraph_Ixora2");

	UTravelGraph_Ixora2_C_ExecuteUbergraph_TravelGraph_Ixora2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
