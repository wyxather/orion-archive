// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedLead_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedLead.AIAction_ScriptedLead_C.ExecuteUbergraph_AIAction_ScriptedLead
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedLead_C::ExecuteUbergraph_AIAction_ScriptedLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedLead.AIAction_ScriptedLead_C.ExecuteUbergraph_AIAction_ScriptedLead");

	UAIAction_ScriptedLead_C_ExecuteUbergraph_AIAction_ScriptedLead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
