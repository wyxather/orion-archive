// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Punk_Anointed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_Punk_Anointed.AITree_Punk_Anointed_C.ExecuteUbergraph_AITree_Punk_Anointed
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_Punk_Anointed_C::ExecuteUbergraph_AITree_Punk_Anointed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_Punk_Anointed.AITree_Punk_Anointed_C.ExecuteUbergraph_AITree_Punk_Anointed");

	UAITree_Punk_Anointed_C_ExecuteUbergraph_AITree_Punk_Anointed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
