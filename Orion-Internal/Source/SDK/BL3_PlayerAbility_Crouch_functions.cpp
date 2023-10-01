// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Crouch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.FlushCrouchInput
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerAbility_Crouch_C::FlushCrouchInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.FlushCrouchInput");

	UPlayerAbility_Crouch_C_FlushCrouchInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.IsCrouchToggle
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Crouch_C::IsCrouchToggle(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.IsCrouchToggle");

	UPlayerAbility_Crouch_C_IsCrouchToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Crouch_C::GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6");

	UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Crouch_C::GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5");

	UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Crouch_C::GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4");

	UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPlayerAbility_Crouch_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.OnPaused");

	UPlayerAbility_Crouch_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.ExecuteUbergraph_PlayerAbility_Crouch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Crouch_C::ExecuteUbergraph_PlayerAbility_Crouch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.ExecuteUbergraph_PlayerAbility_Crouch");

	UPlayerAbility_Crouch_C_ExecuteUbergraph_PlayerAbility_Crouch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
