// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedFollow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedFollow.AIAction_ScriptedFollow_C.ExecuteUbergraph_AIAction_ScriptedFollow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedFollow_C::ExecuteUbergraph_AIAction_ScriptedFollow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedFollow.AIAction_ScriptedFollow_C.ExecuteUbergraph_AIAction_ScriptedFollow");

	UAIAction_ScriptedFollow_C_ExecuteUbergraph_AIAction_ScriptedFollow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
