// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_Rakk_Regroup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__SetRallyPoint_OnArrivedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAction_Rakk_Regroup_C::BndEvt__SetRallyPoint_OnArrivedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__SetRallyPoint_OnArrivedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup");

	UAIAction_Rakk_Regroup_C_BndEvt__SetRallyPoint_OnArrivedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAction_Rakk_Regroup_C::BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup");

	UAIAction_Rakk_Regroup_C_BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_Rakk_Regroup_C::BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup");

	UAIAction_Rakk_Regroup_C_BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__SetRallyPoint_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_Rakk_Regroup_C::BndEvt__SetRallyPoint_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__SetRallyPoint_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup");

	UAIAction_Rakk_Regroup_C_BndEvt__SetRallyPoint_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAction_Rakk_Regroup_C::BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup");

	UAIAction_Rakk_Regroup_C_BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Rakk_Regroup_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.ExecuteUbergraph_AIAction_Rakk_Regroup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_Rakk_Regroup_C::ExecuteUbergraph_AIAction_Rakk_Regroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Rakk_Regroup.AIAction_Rakk_Regroup_C.ExecuteUbergraph_AIAction_Rakk_Regroup");

	UAIAction_Rakk_Regroup_C_ExecuteUbergraph_AIAction_Rakk_Regroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
