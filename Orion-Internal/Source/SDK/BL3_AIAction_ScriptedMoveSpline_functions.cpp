// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_ScriptedMoveSpline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_ScriptedMoveSpline.AIAction_ScriptedMoveSpline_C.ExecuteUbergraph_AIAction_ScriptedMoveSpline
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_ScriptedMoveSpline_C::ExecuteUbergraph_AIAction_ScriptedMoveSpline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedMoveSpline.AIAction_ScriptedMoveSpline_C.ExecuteUbergraph_AIAction_ScriptedMoveSpline");

	UAIAction_ScriptedMoveSpline_C_ExecuteUbergraph_AIAction_ScriptedMoveSpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
