// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC2_Gifts_Stat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_DLC2_Gifts_Stat.Challenge_DLC2_Gifts_Stat_C.PlayCompletionVO
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDialogTimeSlotReference TimeSlot                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Played_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallenge_DLC2_Gifts_Stat_C::PlayCompletionVO(class AGbxPlayerController* PlayerController, const struct FDialogTimeSlotReference& TimeSlot, bool* Played_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_DLC2_Gifts_Stat.Challenge_DLC2_Gifts_Stat_C.PlayCompletionVO");

	UChallenge_DLC2_Gifts_Stat_C_PlayCompletionVO_Params params;
	params.PlayerController = PlayerController;
	params.TimeSlot = TimeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Played_ != nullptr)
		*Played_ = params.Played_;
}


// Function Challenge_DLC2_Gifts_Stat.Challenge_DLC2_Gifts_Stat_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_DLC2_Gifts_Stat_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_DLC2_Gifts_Stat.Challenge_DLC2_Gifts_Stat_C.CompletedChallenge");

	UChallenge_DLC2_Gifts_Stat_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_DLC2_Gifts_Stat.Challenge_DLC2_Gifts_Stat_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_DLC2_Gifts_Stat_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_DLC2_Gifts_Stat.Challenge_DLC2_Gifts_Stat_C.OnInitChallengeInstance");

	UChallenge_DLC2_Gifts_Stat_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_DLC2_Gifts_Stat.Challenge_DLC2_Gifts_Stat_C.ExecuteUbergraph_Challenge_DLC2_Gifts_Stat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_DLC2_Gifts_Stat_C::ExecuteUbergraph_Challenge_DLC2_Gifts_Stat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_DLC2_Gifts_Stat.Challenge_DLC2_Gifts_Stat_C.ExecuteUbergraph_Challenge_DLC2_Gifts_Stat");

	UChallenge_DLC2_Gifts_Stat_C_ExecuteUbergraph_Challenge_DLC2_Gifts_Stat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
