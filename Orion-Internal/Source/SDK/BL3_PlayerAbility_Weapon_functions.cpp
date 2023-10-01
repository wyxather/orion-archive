// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.QuickSelectWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      InvSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWeaponSlotData*         WeaponSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.QuickSelectWeapon");

	UPlayerAbility_Weapon_C_QuickSelectWeapon_Params params;
	params.InvSlot = InvSlot;
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16");

	UPlayerAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPlayerAbility_Weapon_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.OnPaused");

	UPlayerAbility_Weapon_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.ExecuteUbergraph_PlayerAbility_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAbility_Weapon_C::ExecuteUbergraph_PlayerAbility_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.ExecuteUbergraph_PlayerAbility_Weapon");

	UPlayerAbility_Weapon_C_ExecuteUbergraph_PlayerAbility_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
