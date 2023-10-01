// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PunkBadass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PunkBadass.AITree_PunkBadass_C.ExecuteUbergraph_AITree_PunkBadass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PunkBadass_C::ExecuteUbergraph_AITree_PunkBadass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PunkBadass.AITree_PunkBadass_C.ExecuteUbergraph_AITree_PunkBadass");

	UAITree_PunkBadass_C_ExecuteUbergraph_AITree_PunkBadass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
