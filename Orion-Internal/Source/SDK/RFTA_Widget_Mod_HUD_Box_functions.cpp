// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Mod_HUD_Box_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnAnyChange
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::OnAnyChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnAnyChange");

	UWidget_Mod_HUD_Box_C_OnAnyChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PlayActivateSound
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::PlayActivateSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PlayActivateSound");

	UWidget_Mod_HUD_Box_C_PlayActivateSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PlayDeactivateSound
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::PlayDeactivateSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PlayDeactivateSound");

	UWidget_Mod_HUD_Box_C_PlayDeactivateSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Repeater_PowerUp
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::Repeater_PowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Repeater_PowerUp");

	UWidget_Mod_HUD_Box_C_Repeater_PowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshActive
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::RefreshActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshActive");

	UWidget_Mod_HUD_Box_C_RefreshActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.GetMaxCharges
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MaxCharges                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Mod_HUD_Box_C::GetMaxCharges(int* MaxCharges)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.GetMaxCharges");

	UWidget_Mod_HUD_Box_C_GetMaxCharges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxCharges != nullptr)
		*MaxCharges = params.MaxCharges;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshMod
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::RefreshMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshMod");

	UWidget_Mod_HUD_Box_C_RefreshMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Refresh
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Refresh");

	UWidget_Mod_HUD_Box_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshModSlot
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_Mod_HUD_Box_C::RefreshModSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshModSlot");

	UWidget_Mod_HUD_Box_C_RefreshModSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Construct");

	UWidget_Mod_HUD_Box_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnInventoryChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::OnInventoryChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnInventoryChanged_Event_1");

	UWidget_Mod_HUD_Box_C_OnInventoryChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.SetWeapon
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantRangedWeapon**   Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Mod_HUD_Box_C::SetWeapon(class ARemnantRangedWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.SetWeapon");

	UWidget_Mod_HUD_Box_C_SetWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnPowerChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Mod_HUD_Box_C::OnPowerChanged_Event_1(float* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnPowerChanged_Event_1");

	UWidget_Mod_HUD_Box_C_OnPowerChanged_Event_1_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnChargesChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Mod_HUD_Box_C::OnChargesChanged_Event_1(float* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnChargesChanged_Event_1");

	UWidget_Mod_HUD_Box_C_OnChargesChanged_Event_1_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnActivateMod_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EModActiveState*               ActiveState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Mod_HUD_Box_C::OnActivateMod_Event_1(EModActiveState* ActiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnActivateMod_Event_1");

	UWidget_Mod_HUD_Box_C_OnActivateMod_Event_1_Params params;
	params.ActiveState = ActiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnUpdateActive
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::OnUpdateActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnUpdateActive");

	UWidget_Mod_HUD_Box_C_OnUpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PowerUp
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::PowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PowerUp");

	UWidget_Mod_HUD_Box_C_PowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PowerUpRepeater
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::PowerUpRepeater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PowerUpRepeater");

	UWidget_Mod_HUD_Box_C_PowerUpRepeater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.ReadyToBeUsed
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::ReadyToBeUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.ReadyToBeUsed");

	UWidget_Mod_HUD_Box_C_ReadyToBeUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnInstanceDataChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Mod_HUD_Box_C::OnInstanceDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnInstanceDataChanged");

	UWidget_Mod_HUD_Box_C_OnInstanceDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.ExecuteUbergraph_Widget_Mod_HUD_Box
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Mod_HUD_Box_C::ExecuteUbergraph_Widget_Mod_HUD_Box(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.ExecuteUbergraph_Widget_Mod_HUD_Box");

	UWidget_Mod_HUD_Box_C_ExecuteUbergraph_Widget_Mod_HUD_Box_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
