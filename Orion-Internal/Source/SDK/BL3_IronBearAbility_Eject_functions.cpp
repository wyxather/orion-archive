// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IronBearAbility_Eject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IronBearAbility_Eject.IronBearAbility_Eject_C.QuickSelectWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      InvSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWeaponSlotData*         WeaponSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Eject_C::QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.QuickSelectWeapon");

	UIronBearAbility_Eject_C_QuickSelectWeapon_Params params;
	params.InvSlot = InvSlot;
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Eject_C::GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4");

	UIronBearAbility_Eject_C_GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3
// (BlueprintEvent)
// Parameters:
// class UGbxInputActionData_Discrete* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Eject_C::GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3");

	UIronBearAbility_Eject_C_GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Eject.IronBearAbility_Eject_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UIronBearAbility_Eject_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.OnActivated");

	UIronBearAbility_Eject_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronBearAbility_Eject.IronBearAbility_Eject_C.ExecuteUbergraph_IronBearAbility_Eject
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIronBearAbility_Eject_C::ExecuteUbergraph_IronBearAbility_Eject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronBearAbility_Eject.IronBearAbility_Eject_C.ExecuteUbergraph_IronBearAbility_Eject");

	UIronBearAbility_Eject_C_ExecuteUbergraph_IronBearAbility_Eject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
