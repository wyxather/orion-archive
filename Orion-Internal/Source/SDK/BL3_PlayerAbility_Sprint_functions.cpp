// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Sprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.IsSprintToggle
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Sprint_C::IsSprintToggle(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.IsSprintToggle");

	UPlayerAbility_Sprint_C_IsSprintToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Sprint_C::GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4");

	UPlayerAbility_Sprint_C_GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_4_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Sprint_C::GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3");

	UPlayerAbility_Sprint_C_GbxInpActEvt_InputAction_Discrete_Sprint_K2Node_GbxInputActionEvent_Discrete_3_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.ExecuteUbergraph_PlayerAbility_Sprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Sprint_C::ExecuteUbergraph_PlayerAbility_Sprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Sprint.PlayerAbility_Sprint_C.ExecuteUbergraph_PlayerAbility_Sprint");

	UPlayerAbility_Sprint_C_ExecuteUbergraph_PlayerAbility_Sprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
