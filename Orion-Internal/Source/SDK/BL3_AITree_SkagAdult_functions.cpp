// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_SkagAdult_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_SkagAdult.AITree_SkagAdult_C.ExecuteUbergraph_AITree_SkagAdult
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_SkagAdult_C::ExecuteUbergraph_AITree_SkagAdult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_SkagAdult.AITree_SkagAdult_C.ExecuteUbergraph_AITree_SkagAdult");

	UAITree_SkagAdult_C_ExecuteUbergraph_AITree_SkagAdult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
