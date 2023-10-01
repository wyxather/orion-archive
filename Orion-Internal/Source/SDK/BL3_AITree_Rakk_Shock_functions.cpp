// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Rakk_Shock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_Rakk_Shock.AITree_Rakk_Shock_C.BndEvt__Random_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBadass_Shock
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_Rakk_Shock_C::BndEvt__Random_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBadass_Shock(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_Rakk_Shock.AITree_Rakk_Shock_C.BndEvt__Random_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBadass_Shock");

	UAITree_Rakk_Shock_C_BndEvt__Random_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBadass_Shock_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_Rakk_Shock.AITree_Rakk_Shock_C.BndEvt__MeleeSwoop.MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_Rakk_Shock
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_Rakk_Shock_C::BndEvt__MeleeSwoop_MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_Rakk_Shock(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_Rakk_Shock.AITree_Rakk_Shock_C.BndEvt__MeleeSwoop.MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_Rakk_Shock");

	UAITree_Rakk_Shock_C_BndEvt__MeleeSwoop_MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_Rakk_Shock_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_Rakk_Shock.AITree_Rakk_Shock_C.BndEvt__MeleeSwoop.MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_Rakk_Shock
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_Rakk_Shock_C::BndEvt__MeleeSwoop_MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_Rakk_Shock(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_Rakk_Shock.AITree_Rakk_Shock_C.BndEvt__MeleeSwoop.MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_Rakk_Shock");

	UAITree_Rakk_Shock_C_BndEvt__MeleeSwoop_MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_Rakk_Shock_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_Rakk_Shock.AITree_Rakk_Shock_C.ExecuteUbergraph_AITree_Rakk_Shock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_Rakk_Shock_C::ExecuteUbergraph_AITree_Rakk_Shock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_Rakk_Shock.AITree_Rakk_Shock_C.ExecuteUbergraph_AITree_Rakk_Shock");

	UAITree_Rakk_Shock_C_ExecuteUbergraph_AITree_Rakk_Shock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
