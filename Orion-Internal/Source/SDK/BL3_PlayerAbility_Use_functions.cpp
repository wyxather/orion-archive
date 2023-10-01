// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Use_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerAbility_Use.PlayerAbility_Use_C.StopGiveUpInner
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerAbility_Use_C::StopGiveUpInner()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.StopGiveUpInner");

	UPlayerAbility_Use_C_StopGiveUpInner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.StartGiveUpInner
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerAbility_Use_C::StartGiveUpInner()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.StartGiveUpInner");

	UPlayerAbility_Use_C_StartGiveUpInner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GetFFYLComponent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFightForYourLifeComponent* res                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerAbility_Use_C::GetFFYLComponent(class UFightForYourLifeComponent** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GetFFYLComponent");

	UPlayerAbility_Use_C_GetFFYLComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.FlushLatentUses
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerAbility_Use_C::FlushLatentUses()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.FlushLatentUses");

	UPlayerAbility_Use_C_FlushLatentUses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GetUseComponent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUseComponent*           res                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerAbility_Use_C::GetUseComponent(class UUseComponent** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GetUseComponent");

	UPlayerAbility_Use_C_GetUseComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.StopUseInner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUsabilityType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::StopUseInner(EUsabilityType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.StopUseInner");

	UPlayerAbility_Use_C_StopUseInner_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.StartUseInner
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUsabilityType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::StartUseInner(EUsabilityType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.StartUseInner");

	UPlayerAbility_Use_C_StartUseInner_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14");

	UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_14_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13");

	UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_UseAlt_K2Node_GbxInputActionEvent_Discrete_13_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12");

	UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_12_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11");

	UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_GiveUp_K2Node_GbxInputActionEvent_Discrete_11_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10");

	UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_10_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9");

	UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_Use_K2Node_GbxInputActionEvent_Discrete_9_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8");

	UPlayerAbility_Use_C_GbxInpActEvt_InputAction_Discrete_ExitSeat_K2Node_GbxInputActionEvent_Discrete_8_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPlayerAbility_Use_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.OnPaused");

	UPlayerAbility_Use_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Use.PlayerAbility_Use_C.ExecuteUbergraph_PlayerAbility_Use
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Use_C::ExecuteUbergraph_PlayerAbility_Use(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Use.PlayerAbility_Use_C.ExecuteUbergraph_PlayerAbility_Use");

	UPlayerAbility_Use_C_ExecuteUbergraph_PlayerAbility_Use_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
