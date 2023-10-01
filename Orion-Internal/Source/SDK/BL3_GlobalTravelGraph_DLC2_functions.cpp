// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GlobalTravelGraph_DLC2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalTravelGraph_DLC2.GlobalTravelGraph_DLC2_C.ExecuteUbergraph_GlobalTravelGraph_DLC2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalTravelGraph_DLC2_C::ExecuteUbergraph_GlobalTravelGraph_DLC2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalTravelGraph_DLC2.GlobalTravelGraph_DLC2_C.ExecuteUbergraph_GlobalTravelGraph_DLC2");

	UGlobalTravelGraph_DLC2_C_ExecuteUbergraph_GlobalTravelGraph_DLC2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
