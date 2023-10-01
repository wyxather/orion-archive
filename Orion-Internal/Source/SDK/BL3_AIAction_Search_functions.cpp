// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_Search_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_Search.AIAction_Search_C.ExecuteUbergraph_AIAction_Search
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_Search_C::ExecuteUbergraph_AIAction_Search(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Search.AIAction_Search_C.ExecuteUbergraph_AIAction_Search");

	UAIAction_Search_C_ExecuteUbergraph_AIAction_Search_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
