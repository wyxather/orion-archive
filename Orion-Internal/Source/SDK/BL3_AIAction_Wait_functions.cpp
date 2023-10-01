// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_Wait_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_Wait.AIAction_Wait_C.ExecuteUbergraph_AIAction_Wait
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_Wait_C::ExecuteUbergraph_AIAction_Wait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Wait.AIAction_Wait_C.ExecuteUbergraph_AIAction_Wait");

	UAIAction_Wait_C_ExecuteUbergraph_AIAction_Wait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
