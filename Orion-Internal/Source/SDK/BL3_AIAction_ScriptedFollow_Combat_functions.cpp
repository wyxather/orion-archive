// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedFollow_Combat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedFollow_Combat.AIAction_ScriptedFollow_Combat_C.ExecuteUbergraph_AIAction_ScriptedFollow_Combat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedFollow_Combat_C::ExecuteUbergraph_AIAction_ScriptedFollow_Combat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedFollow_Combat.AIAction_ScriptedFollow_Combat_C.ExecuteUbergraph_AIAction_ScriptedFollow_Combat");

	UAIAction_ScriptedFollow_Combat_C_ExecuteUbergraph_AIAction_ScriptedFollow_Combat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
