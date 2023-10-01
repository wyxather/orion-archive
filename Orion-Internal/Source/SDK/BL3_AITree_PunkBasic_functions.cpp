// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PunkBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PunkBasic.AITree_PunkBasic_C.ExecuteUbergraph_AITree_PunkBasic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PunkBasic_C::ExecuteUbergraph_AITree_PunkBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PunkBasic.AITree_PunkBasic_C.ExecuteUbergraph_AITree_PunkBasic");

	UAITree_PunkBasic_C_ExecuteUbergraph_AITree_PunkBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
