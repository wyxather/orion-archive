// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VarkidLarva_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VarkidLarva.AITree_VarkidLarva_C.ExecuteUbergraph_AITree_VarkidLarva
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VarkidLarva_C::ExecuteUbergraph_AITree_VarkidLarva(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VarkidLarva.AITree_VarkidLarva_C.ExecuteUbergraph_AITree_VarkidLarva");

	UAITree_VarkidLarva_C_ExecuteUbergraph_AITree_VarkidLarva_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
