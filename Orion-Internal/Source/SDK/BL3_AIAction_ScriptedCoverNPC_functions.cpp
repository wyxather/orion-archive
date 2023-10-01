// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedCoverNPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedCoverNPC.AIAction_ScriptedCoverNPC_C.ExecuteUbergraph_AIAction_ScriptedCoverNPC
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedCoverNPC_C::ExecuteUbergraph_AIAction_ScriptedCoverNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedCoverNPC.AIAction_ScriptedCoverNPC_C.ExecuteUbergraph_AIAction_ScriptedCoverNPC");

	UAIAction_ScriptedCoverNPC_C_ExecuteUbergraph_AIAction_ScriptedCoverNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
