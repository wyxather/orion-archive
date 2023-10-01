// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_LookAtPlayer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_LookAtPlayer.AITree_LookAtPlayer_C.ExecuteUbergraph_AITree_LookAtPlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_LookAtPlayer_C::ExecuteUbergraph_AITree_LookAtPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_LookAtPlayer.AITree_LookAtPlayer_C.ExecuteUbergraph_AITree_LookAtPlayer");

	UAITree_LookAtPlayer_C_ExecuteUbergraph_AITree_LookAtPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
