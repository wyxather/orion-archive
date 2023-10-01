// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IronBearAbility_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetRightFireHardPointSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOakActionAbilityAugmentSlotData* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::GetRightFireHardPointSlot(class UOakActionAbilityAugmentSlotData** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetRightFireHardPointSlot");

	UIronBearAbility_Weapon_C_GetRightFireHardPointSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetLeftFireHardPointSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOakActionAbilityAugmentSlotData* res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::GetLeftFireHardPointSlot(class UOakActionAbilityAugmentSlotData** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetLeftFireHardPointSlot");

	UIronBearAbility_Weapon_C_GetLeftFireHardPointSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.QuickSelectWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      InvSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWeaponSlotData*         WeaponSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.QuickSelectWeapon");

	UIronBearAbility_Weapon_C_QuickSelectWeapon_Params params;
	params.InvSlot = InvSlot;
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10");

	UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9");

	UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8");

	UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7");

	UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6");

	UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UIronBearAbility_Weapon_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnActivated");

	UIronBearAbility_Weapon_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UIronBearAbility_Weapon_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnPaused");

	UIronBearAbility_Weapon_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.ExecuteUbergraph_IronBearAbility_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Weapon_C::ExecuteUbergraph_IronBearAbility_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.ExecuteUbergraph_IronBearAbility_Weapon");

	UIronBearAbility_Weapon_C_ExecuteUbergraph_IronBearAbility_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
