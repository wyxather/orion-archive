// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_PetJabbermon_Evo1_Beefcake_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_PetJabbermon_Evo1_Beefcake.AIAction_PetJabbermon_Evo1_Beefcake_C.BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Evo1_Beefcake
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetJabbermon_Evo1_Beefcake_C::BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Evo1_Beefcake(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetJabbermon_Evo1_Beefcake.AIAction_PetJabbermon_Evo1_Beefcake_C.BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Evo1_Beefcake");

	UAIAction_PetJabbermon_Evo1_Beefcake_C_BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Evo1_Beefcake_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_PetJabbermon_Evo1_Beefcake.AIAction_PetJabbermon_Evo1_Beefcake_C.BndEvt__SimpleWeapon_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon_Evo1_Beefcake
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAction_PetJabbermon_Evo1_Beefcake_C::BndEvt__SimpleWeapon_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon_Evo1_Beefcake(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetJabbermon_Evo1_Beefcake.AIAction_PetJabbermon_Evo1_Beefcake_C.BndEvt__SimpleWeapon_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon_Evo1_Beefcake");

	UAIAction_PetJabbermon_Evo1_Beefcake_C_BndEvt__SimpleWeapon_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon_Evo1_Beefcake_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_PetJabbermon_Evo1_Beefcake.AIAction_PetJabbermon_Evo1_Beefcake_C.ExecuteUbergraph_AIAction_PetJabbermon_Evo1_Beefcake
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetJabbermon_Evo1_Beefcake_C::ExecuteUbergraph_AIAction_PetJabbermon_Evo1_Beefcake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetJabbermon_Evo1_Beefcake.AIAction_PetJabbermon_Evo1_Beefcake_C.ExecuteUbergraph_AIAction_PetJabbermon_Evo1_Beefcake");

	UAIAction_PetJabbermon_Evo1_Beefcake_C_ExecuteUbergraph_AIAction_PetJabbermon_Evo1_Beefcake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
