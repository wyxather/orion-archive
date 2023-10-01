// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_IronCub_v2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_IronCub_v2.AIAction_IronCub_v2_C.ExecuteUbergraph_AIAction_IronCub_v2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_IronCub_v2_C::ExecuteUbergraph_AIAction_IronCub_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_IronCub_v2.AIAction_IronCub_v2_C.ExecuteUbergraph_AIAction_IronCub_v2");

	UAIAction_IronCub_v2_C_ExecuteUbergraph_AIAction_IronCub_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
