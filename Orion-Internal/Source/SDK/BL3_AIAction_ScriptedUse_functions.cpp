// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedUse_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedUse.AIAction_ScriptedUse_C.ExecuteUbergraph_AIAction_ScriptedUse
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedUse_C::ExecuteUbergraph_AIAction_ScriptedUse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedUse.AIAction_ScriptedUse_C.ExecuteUbergraph_AIAction_ScriptedUse");

	UAIAction_ScriptedUse_C_ExecuteUbergraph_AIAction_ScriptedUse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
