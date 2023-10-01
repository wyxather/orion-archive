// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagRare01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagRare01.AITree_SkagRare01_C.ExecuteUbergraph_AITree_SkagRare01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagRare01_C::ExecuteUbergraph_AITree_SkagRare01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagRare01.AITree_SkagRare01_C.ExecuteUbergraph_AITree_SkagRare01");

	UAITree_SkagRare01_C_ExecuteUbergraph_AITree_SkagRare01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
