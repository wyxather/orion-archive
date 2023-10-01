// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_PetShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_PetShared.AIAction_PetShared_C.BndEvt__PlayGbxAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetShared_C::BndEvt__PlayGbxAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetShared.AIAction_PetShared_C.BndEvt__PlayGbxAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared");

	UAIAction_PetShared_C_BndEvt__PlayGbxAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_PetShared.AIAction_PetShared_C.BndEvt__PlayGbxAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAction_PetShared_C::BndEvt__PlayGbxAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetShared.AIAction_PetShared_C.BndEvt__PlayGbxAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared");

	UAIAction_PetShared_C_BndEvt__PlayGbxAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_PetShared.AIAction_PetShared_C.ResetPetInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxCharacter*           NewChar                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetShared_C::ResetPetInteract(class AGbxCharacter* NewChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetShared.AIAction_PetShared_C.ResetPetInteract");

	UAIAction_PetShared_C_ResetPetInteract_Params params;
	params.NewChar = NewChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_PetShared.AIAction_PetShared_C.ExecuteUbergraph_AIAction_PetShared
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetShared_C::ExecuteUbergraph_AIAction_PetShared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetShared.AIAction_PetShared_C.ExecuteUbergraph_AIAction_PetShared");

	UAIAction_PetShared_C_ExecuteUbergraph_AIAction_PetShared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
