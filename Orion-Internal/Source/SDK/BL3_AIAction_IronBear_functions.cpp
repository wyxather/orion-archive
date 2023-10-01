// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_IronBear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_IronBear.AIAction_IronBear_C.ExecuteUbergraph_AIAction_IronBear
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_IronBear_C::ExecuteUbergraph_AIAction_IronBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_IronBear.AIAction_IronBear_C.ExecuteUbergraph_AIAction_IronBear");

	UAIAction_IronBear_C_ExecuteUbergraph_AIAction_IronBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
