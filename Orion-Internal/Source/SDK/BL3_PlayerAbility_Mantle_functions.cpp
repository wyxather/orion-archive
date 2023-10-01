// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Mantle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Mantle_C::GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4");

	UPlayerAbility_Mantle_C_GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Mantle_C::GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3");

	UPlayerAbility_Mantle_C_GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPlayerAbility_Mantle_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.OnPaused");

	UPlayerAbility_Mantle_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.ExecuteUbergraph_PlayerAbility_Mantle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Mantle_C::ExecuteUbergraph_PlayerAbility_Mantle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Mantle.PlayerAbility_Mantle_C.ExecuteUbergraph_PlayerAbility_Mantle");

	UPlayerAbility_Mantle_C_ExecuteUbergraph_PlayerAbility_Mantle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
