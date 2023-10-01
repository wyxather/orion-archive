// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ReviveAlly_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ReviveAlly.AIAction_ReviveAlly_C.ExecuteUbergraph_AIAction_ReviveAlly
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ReviveAlly_C::ExecuteUbergraph_AIAction_ReviveAlly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ReviveAlly.AIAction_ReviveAlly_C.ExecuteUbergraph_AIAction_ReviveAlly");

	UAIAction_ReviveAlly_C_ExecuteUbergraph_AIAction_ReviveAlly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
