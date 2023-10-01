// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagChubby_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagChubby.AITree_SkagChubby_C.ExecuteUbergraph_AITree_SkagChubby
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagChubby_C::ExecuteUbergraph_AITree_SkagChubby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagChubby.AITree_SkagChubby_C.ExecuteUbergraph_AITree_SkagChubby");

	UAITree_SkagChubby_C_ExecuteUbergraph_AITree_SkagChubby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
