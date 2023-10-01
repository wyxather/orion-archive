// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_ActionSkill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetPlayerCharacterComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayerCharacterComponent* res                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GetPlayerCharacterComponent(class UPlayerCharacterComponent** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetPlayerCharacterComponent");

	UPlayerAbility_ActionSkill_C_GetPlayerCharacterComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStopActionSkillHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::HandleStopActionSkillHold(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStopActionSkillHold");

	UPlayerAbility_ActionSkill_C_HandleStopActionSkillHold_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStartActionSkillHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::HandleStartActionSkillHold(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStartActionSkillHold");

	UPlayerAbility_ActionSkill_C_HandleStartActionSkillHold_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStopActionSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::HandleStopActionSkill(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStopActionSkill");

	UPlayerAbility_ActionSkill_C_HandleStopActionSkill_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStartActionSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::HandleStartActionSkill(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.HandleStartActionSkill");

	UPlayerAbility_ActionSkill_C_HandleStartActionSkill_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetSecondaryActionSkill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOakActionAbility*       res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GetSecondaryActionSkill(class UOakActionAbility** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetSecondaryActionSkill");

	UPlayerAbility_ActionSkill_C_GetSecondaryActionSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetPrimaryActionSkill
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOakActionAbility*       res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GetPrimaryActionSkill(class UOakActionAbility** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GetPrimaryActionSkill");

	UPlayerAbility_ActionSkill_C_GetPrimaryActionSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_22
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_22(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_22");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_22_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_21
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_21(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_21");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_ActionSkill_K2Node_GbxInputActionEvent_Discrete_21_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_20
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_20(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_20");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_20_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_19
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_19(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_19");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_K2Node_GbxInputActionEvent_Discrete_19_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_18
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_18(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_18");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_18_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_17
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_17(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_17");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_ActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_17_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_16
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_16(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_16");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_16_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_15
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_15(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_15");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_SecondaryActionSkill_Hold_K2Node_GbxInputActionEvent_Discrete_15_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_14
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_14(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_14");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_14_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_13
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_13(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_13");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_ActionSkillOverride_K2Node_GbxInputActionEvent_Discrete_13_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_PreActionSkill_K2Node_GbxInputActionEvent_Discrete_12
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::GbxInpActEvt_InputAction_Discrete_PreActionSkill_K2Node_GbxInputActionEvent_Discrete_12(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.GbxInpActEvt_InputAction_Discrete_PreActionSkill_K2Node_GbxInputActionEvent_Discrete_12");

	UPlayerAbility_ActionSkill_C_GbxInpActEvt_InputAction_Discrete_PreActionSkill_K2Node_GbxInputActionEvent_Discrete_12_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.ExecuteUbergraph_PlayerAbility_ActionSkill
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_ActionSkill_C::ExecuteUbergraph_PlayerAbility_ActionSkill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C.ExecuteUbergraph_PlayerAbility_ActionSkill");

	UPlayerAbility_ActionSkill_C_ExecuteUbergraph_PlayerAbility_ActionSkill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
