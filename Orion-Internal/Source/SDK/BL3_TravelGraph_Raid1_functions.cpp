// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TravelGraph_Raid1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TravelGraph_Raid1.TravelGraph_Raid1_C.ExecuteUbergraph_TravelGraph_Raid1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTravelGraph_Raid1_C::ExecuteUbergraph_TravelGraph_Raid1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravelGraph_Raid1.TravelGraph_Raid1_C.ExecuteUbergraph_TravelGraph_Raid1");

	UTravelGraph_Raid1_C_ExecuteUbergraph_TravelGraph_Raid1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
