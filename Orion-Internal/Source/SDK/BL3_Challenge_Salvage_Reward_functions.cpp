// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Salvage_Reward_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Salvage_Reward.Challenge_Salvage_Reward_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Salvage_Reward_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Salvage_Reward.Challenge_Salvage_Reward_C.CompletedChallenge");

	UChallenge_Salvage_Reward_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Salvage_Reward.Challenge_Salvage_Reward_C.ExecuteUbergraph_Challenge_Salvage_Reward
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Salvage_Reward_C::ExecuteUbergraph_Challenge_Salvage_Reward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Salvage_Reward.Challenge_Salvage_Reward_C.ExecuteUbergraph_Challenge_Salvage_Reward");

	UChallenge_Salvage_Reward_C_ExecuteUbergraph_Challenge_Salvage_Reward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
