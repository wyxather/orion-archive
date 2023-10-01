// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_15_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_14_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.OnInitChallengeInstance");

	UBP_Challenge_Console_14_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.OnAnyChallengeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    ChallengeComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ChallengeClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_14_C::OnAnyChallengeCompleted(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.OnAnyChallengeCompleted");

	UBP_Challenge_Console_14_C_OnAnyChallengeCompleted_Params params;
	params.ChallengeComponent = ChallengeComponent;
	params.ChallengeClass = ChallengeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.ExecuteUbergraph_BP_Challenge_Console_15
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_14_C::ExecuteUbergraph_BP_Challenge_Console_15(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.ExecuteUbergraph_BP_Challenge_Console_15");

	UBP_Challenge_Console_14_C_ExecuteUbergraph_BP_Challenge_Console_15_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
