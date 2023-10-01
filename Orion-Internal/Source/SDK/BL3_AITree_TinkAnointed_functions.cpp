// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TinkAnointed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__TeleportShoot_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_TinkAnointed_C::BndEvt__TeleportShoot_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__TeleportShoot_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__TeleportShoot_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__TeleportShoot_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkAnointed_C::BndEvt__TeleportShoot_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__TeleportShoot_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__TeleportShoot_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__Sequence_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkAnointed_C::BndEvt__Sequence_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__Sequence_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__Sequence_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__Sequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_TinkAnointed_C::BndEvt__Sequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__Sequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__Sequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__Retreat_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_TinkAnointed_C::BndEvt__Retreat_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__Retreat_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__Retreat_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__Retreat_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkAnointed_C::BndEvt__Retreat_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__Retreat_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__Retreat_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_TinkAnointed_C::BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkAnointed_C::BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__SimpleMelee_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_TinkAnointed_C::BndEvt__SimpleMelee_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__SimpleMelee_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__SimpleMelee_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkAnointed_C::BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__SimpleMelee_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__VehTeleportGunner_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_TinkAnointed_C::BndEvt__VehTeleportGunner_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__VehTeleportGunner_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__VehTeleportGunner_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__VehTeleportGunner_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkAnointed_C::BndEvt__VehTeleportGunner_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.BndEvt__VehTeleportGunner_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_BndEvt__VehTeleportGunner_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TinkAnointed_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_TinkAnointed.AITree_TinkAnointed_C.ExecuteUbergraph_AITree_TinkAnointed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_TinkAnointed_C::ExecuteUbergraph_AITree_TinkAnointed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_TinkAnointed.AITree_TinkAnointed_C.ExecuteUbergraph_AITree_TinkAnointed");

	UAITree_TinkAnointed_C_ExecuteUbergraph_AITree_TinkAnointed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
