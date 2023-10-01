// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Melee_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerAbility_Melee.PlayerAbility_Melee_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_2
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Melee_C::GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_2(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Melee.PlayerAbility_Melee_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_2");

	UPlayerAbility_Melee_C_GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_2_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Melee.PlayerAbility_Melee_C.ExecuteUbergraph_PlayerAbility_Melee
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Melee_C::ExecuteUbergraph_PlayerAbility_Melee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Melee.PlayerAbility_Melee_C.ExecuteUbergraph_PlayerAbility_Melee");

	UPlayerAbility_Melee_C_ExecuteUbergraph_PlayerAbility_Melee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
