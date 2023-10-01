// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_SimpleAggro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_SimpleAggro.AIAction_SimpleAggro_C.ExecuteUbergraph_AIAction_SimpleAggro
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_SimpleAggro_C::ExecuteUbergraph_AIAction_SimpleAggro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_SimpleAggro.AIAction_SimpleAggro_C.ExecuteUbergraph_AIAction_SimpleAggro");

	UAIAction_SimpleAggro_C_ExecuteUbergraph_AIAction_SimpleAggro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
