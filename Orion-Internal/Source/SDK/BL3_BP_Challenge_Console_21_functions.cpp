// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_21_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_21.BP_Challenge_Console_20_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_20_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_21.BP_Challenge_Console_20_C.OnInitChallengeInstance");

	UBP_Challenge_Console_20_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_21.BP_Challenge_Console_20_C.AreaDiscovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DisplayText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWwiseEvent*             DiscoverySound                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_20_C::AreaDiscovered(const struct FText& DisplayText, class UWwiseEvent* DiscoverySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_21.BP_Challenge_Console_20_C.AreaDiscovered");

	UBP_Challenge_Console_20_C_AreaDiscovered_Params params;
	params.DisplayText = DisplayText;
	params.DiscoverySound = DiscoverySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_21.BP_Challenge_Console_20_C.ExecuteUbergraph_BP_Challenge_Console_21
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_20_C::ExecuteUbergraph_BP_Challenge_Console_21(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_21.BP_Challenge_Console_20_C.ExecuteUbergraph_BP_Challenge_Console_21");

	UBP_Challenge_Console_20_C_ExecuteUbergraph_BP_Challenge_Console_21_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
