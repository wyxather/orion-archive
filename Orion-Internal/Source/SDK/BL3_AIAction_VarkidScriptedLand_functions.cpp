// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VarkidScriptedLand_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_VarkidScriptedLand.AIAction_VarkidScriptedLand_C.ExecuteUbergraph_AIAction_VarkidScriptedLand
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_VarkidScriptedLand_C::ExecuteUbergraph_AIAction_VarkidScriptedLand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_VarkidScriptedLand.AIAction_VarkidScriptedLand_C.ExecuteUbergraph_AIAction_VarkidScriptedLand");

	UAIAction_VarkidScriptedLand_C_ExecuteUbergraph_AIAction_VarkidScriptedLand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
