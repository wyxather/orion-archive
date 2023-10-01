// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TinkBadass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_TinkBadass.AITree_TinkBadass_C.ExecuteUbergraph_AITree_TinkBadass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkBadass_C::ExecuteUbergraph_AITree_TinkBadass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkBadass.AITree_TinkBadass_C.ExecuteUbergraph_AITree_TinkBadass");

	UAITree_TinkBadass_C_ExecuteUbergraph_AITree_TinkBadass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
