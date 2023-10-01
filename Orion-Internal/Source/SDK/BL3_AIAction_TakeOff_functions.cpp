// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_TakeOff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_TakeOff.AIAction_TakeOff_C.ExecuteUbergraph_AIAction_TakeOff
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_TakeOff_C::ExecuteUbergraph_AIAction_TakeOff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_TakeOff.AIAction_TakeOff_C.ExecuteUbergraph_AIAction_TakeOff");

	UAIAction_TakeOff_C_ExecuteUbergraph_AIAction_TakeOff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
