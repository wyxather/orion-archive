// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedMove_NPCLook_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedMove_NPCLook.AIAction_ScriptedMove_NPCLook_C.ExecuteUbergraph_AIAction_ScriptedMove_NPCLook
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedMove_NPCLook_C::ExecuteUbergraph_AIAction_ScriptedMove_NPCLook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedMove_NPCLook.AIAction_ScriptedMove_NPCLook_C.ExecuteUbergraph_AIAction_ScriptedMove_NPCLook");

	UAIAction_ScriptedMove_NPCLook_C_ExecuteUbergraph_AIAction_ScriptedMove_NPCLook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
