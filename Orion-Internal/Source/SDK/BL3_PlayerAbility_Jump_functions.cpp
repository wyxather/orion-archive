// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Jump_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerAbility_Jump.PlayerAbility_Jump_C.GbxInpActEvt_InputAction_Discrete_Jump_K2Node_GbxInputActionEvent_Discrete_4
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Jump_C::GbxInpActEvt_InputAction_Discrete_Jump_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Jump.PlayerAbility_Jump_C.GbxInpActEvt_InputAction_Discrete_Jump_K2Node_GbxInputActionEvent_Discrete_4");

	UPlayerAbility_Jump_C_GbxInpActEvt_InputAction_Discrete_Jump_K2Node_GbxInputActionEvent_Discrete_4_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Jump.PlayerAbility_Jump_C.GbxInpActEvt_InputAction_Discrete_Jump_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Jump_C::GbxInpActEvt_InputAction_Discrete_Jump_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Jump.PlayerAbility_Jump_C.GbxInpActEvt_InputAction_Discrete_Jump_K2Node_GbxInputActionEvent_Discrete_3");

	UPlayerAbility_Jump_C_GbxInpActEvt_InputAction_Discrete_Jump_K2Node_GbxInputActionEvent_Discrete_3_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Jump.PlayerAbility_Jump_C.ExecuteUbergraph_PlayerAbility_Jump
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Jump_C::ExecuteUbergraph_PlayerAbility_Jump(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Jump.PlayerAbility_Jump_C.ExecuteUbergraph_PlayerAbility_Jump");

	UPlayerAbility_Jump_C_ExecuteUbergraph_PlayerAbility_Jump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
