// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedLook_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedLook.AIAction_ScriptedLook_C.ExecuteUbergraph_AIAction_ScriptedLook
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedLook_C::ExecuteUbergraph_AIAction_ScriptedLook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedLook.AIAction_ScriptedLook_C.ExecuteUbergraph_AIAction_ScriptedLook");

	UAIAction_ScriptedLook_C_ExecuteUbergraph_AIAction_ScriptedLook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
