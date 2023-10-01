// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.SetBinds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BindSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_C::SetBinds(class AOakCharacter* Character, bool* BindSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.SetBinds");

	UBP_Challenge_CharacterSpecific_C_SetBinds_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BindSet != nullptr)
		*BindSet = params.BindSet;
}


// Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.OnInitChallengeInstance");

	UBP_Challenge_CharacterSpecific_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_C::ExecuteUbergraph_BP_Challenge_CharacterSpecific(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific");

	UBP_Challenge_CharacterSpecific_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
