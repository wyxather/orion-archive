// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VarkidBadass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VarkidBadass.AITree_VarkidBadass_C.ExecuteUbergraph_AITree_VarkidBadass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VarkidBadass_C::ExecuteUbergraph_AITree_VarkidBadass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VarkidBadass.AITree_VarkidBadass_C.ExecuteUbergraph_AITree_VarkidBadass");

	UAITree_VarkidBadass_C_ExecuteUbergraph_AITree_VarkidBadass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
