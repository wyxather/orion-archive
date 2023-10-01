// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Enforcer_BountyPrologue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_Enforcer_BountyPrologue.AITree_Enforcer_BountyPrologue_C.ExecuteUbergraph_AITree_Enforcer_BountyPrologue
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_Enforcer_BountyPrologue_C::ExecuteUbergraph_AITree_Enforcer_BountyPrologue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_Enforcer_BountyPrologue.AITree_Enforcer_BountyPrologue_C.ExecuteUbergraph_AITree_Enforcer_BountyPrologue");

	UAITree_Enforcer_BountyPrologue_C_ExecuteUbergraph_AITree_Enforcer_BountyPrologue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
