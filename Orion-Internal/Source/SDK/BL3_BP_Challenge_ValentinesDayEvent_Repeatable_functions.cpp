// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_ValentinesDayEvent_Repeatable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_ValentinesDayEvent_Repeatable_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.OnInitChallengeInstance");

	UBP_Challenge_ValentinesDayEvent_Repeatable_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.OnChallengeActivated
// (Event, Public, BlueprintEvent)

void UBP_Challenge_ValentinesDayEvent_Repeatable_C::OnChallengeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.OnChallengeActivated");

	UBP_Challenge_ValentinesDayEvent_Repeatable_C_OnChallengeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_ValentinesDayEvent_Repeatable_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.CompletedChallenge");

	UBP_Challenge_ValentinesDayEvent_Repeatable_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Repeatable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_ValentinesDayEvent_Repeatable_C::ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Repeatable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Repeatable.BP_Challenge_ValentinesDayEvent_Repeatable_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Repeatable");

	UBP_Challenge_ValentinesDayEvent_Repeatable_C_ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Repeatable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
