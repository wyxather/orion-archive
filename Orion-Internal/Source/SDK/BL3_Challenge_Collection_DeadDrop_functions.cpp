// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Collection_DeadDrop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C.OnChallengeActivated
// (Event, Public, BlueprintEvent)

void UChallenge_Collection_DeadDrop_C::OnChallengeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C.OnChallengeActivated");

	UChallenge_Collection_DeadDrop_C_OnChallengeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C.ExecuteUbergraph_Challenge_Collection_DeadDrop
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Collection_DeadDrop_C::ExecuteUbergraph_Challenge_Collection_DeadDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C.ExecuteUbergraph_Challenge_Collection_DeadDrop");

	UChallenge_Collection_DeadDrop_C_ExecuteUbergraph_Challenge_Collection_DeadDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
