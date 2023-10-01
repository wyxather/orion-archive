// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Tediore_FriendZone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_Tediore_FriendZone.AITree_Tediore_FriendZone_C.ExecuteUbergraph_AITree_Tediore_FriendZone
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_Tediore_FriendZone_C::ExecuteUbergraph_AITree_Tediore_FriendZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_Tediore_FriendZone.AITree_Tediore_FriendZone_C.ExecuteUbergraph_AITree_Tediore_FriendZone");

	UAITree_Tediore_FriendZone_C_ExecuteUbergraph_AITree_Tediore_FriendZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
