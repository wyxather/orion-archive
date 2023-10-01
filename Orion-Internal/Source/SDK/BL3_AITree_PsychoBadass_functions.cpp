// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PsychoBadass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PsychoBadass.AITree_PsychoBadass_C.ExecuteUbergraph_AITree_PsychoBadass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PsychoBadass_C::ExecuteUbergraph_AITree_PsychoBadass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PsychoBadass.AITree_PsychoBadass_C.ExecuteUbergraph_AITree_PsychoBadass");

	UAITree_PsychoBadass_C_ExecuteUbergraph_AITree_PsychoBadass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
