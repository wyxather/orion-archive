// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_PetJabbermon_Ingenuity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_PetJabbermon_Ingenuity.AIAction_PetJabbermon_Ingenuity_C.BndEvt__IngenuityBarrelToss_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Ingenuity
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetJabbermon_Ingenuity_C::BndEvt__IngenuityBarrelToss_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Ingenuity(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetJabbermon_Ingenuity.AIAction_PetJabbermon_Ingenuity_C.BndEvt__IngenuityBarrelToss_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Ingenuity");

	UAIAction_PetJabbermon_Ingenuity_C_BndEvt__IngenuityBarrelToss_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Ingenuity_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_PetJabbermon_Ingenuity.AIAction_PetJabbermon_Ingenuity_C.ExecuteUbergraph_AIAction_PetJabbermon_Ingenuity
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetJabbermon_Ingenuity_C::ExecuteUbergraph_AIAction_PetJabbermon_Ingenuity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetJabbermon_Ingenuity.AIAction_PetJabbermon_Ingenuity_C.ExecuteUbergraph_AIAction_PetJabbermon_Ingenuity");

	UAIAction_PetJabbermon_Ingenuity_C_ExecuteUbergraph_AIAction_PetJabbermon_Ingenuity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
