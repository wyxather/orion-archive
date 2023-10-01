// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_NonPlayerCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_NonPlayerCharacter.AIAction_NonPlayerCharacter_C.BndEvt__ReviveSequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_NonPlayerCharacter
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAction_NonPlayerCharacter_C::BndEvt__ReviveSequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_NonPlayerCharacter(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_NonPlayerCharacter.AIAction_NonPlayerCharacter_C.BndEvt__ReviveSequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_NonPlayerCharacter");

	UAIAction_NonPlayerCharacter_C_BndEvt__ReviveSequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_NonPlayerCharacter_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_NonPlayerCharacter.AIAction_NonPlayerCharacter_C.ExecuteUbergraph_AIAction_NonPlayerCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_NonPlayerCharacter_C::ExecuteUbergraph_AIAction_NonPlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_NonPlayerCharacter.AIAction_NonPlayerCharacter_C.ExecuteUbergraph_AIAction_NonPlayerCharacter");

	UAIAction_NonPlayerCharacter_C_ExecuteUbergraph_AIAction_NonPlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
