// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedLead_Combat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedLead_Combat.AIAction_ScriptedLead_Combat_C.ExecuteUbergraph_AIAction_ScriptedLead_Combat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedLead_Combat_C::ExecuteUbergraph_AIAction_ScriptedLead_Combat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedLead_Combat.AIAction_ScriptedLead_Combat_C.ExecuteUbergraph_AIAction_ScriptedLead_Combat");

	UAIAction_ScriptedLead_Combat_C_ExecuteUbergraph_AIAction_ScriptedLead_Combat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
