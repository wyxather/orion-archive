// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Mission_Plot_04_EarnSpaceship_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Mission_Plot_04_EarnSpaceship_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C.CompletedChallenge");

	UChallenge_Mission_Plot_04_EarnSpaceship_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C.ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Mission_Plot_04_EarnSpaceship_C::ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C.ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship");

	UChallenge_Mission_Plot_04_EarnSpaceship_C_ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
