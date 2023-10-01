// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Kaleidoscope_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.RefillOtherWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 EquippedWeapon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Kaleidoscope_C::RefillOtherWeapon(class AOakCharacter* Character, class UInventorySlotData* InventorySlot, class AWeapon* EquippedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.RefillOtherWeapon");

	UAbility_Kaleidoscope_C_RefillOtherWeapon_Params params;
	params.Character = Character;
	params.InventorySlot = InventorySlot;
	params.EquippedWeapon = EquippedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Kaleidoscope_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnActivated");

	UAbility_Kaleidoscope_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Kaleidoscope_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnDeactivated");

	UAbility_Kaleidoscope_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Kaleidoscope_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnUnregistered");

	UAbility_Kaleidoscope_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_Kaleidoscope_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnPaused");

	UAbility_Kaleidoscope_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedIn_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Kaleidoscope_C::NotifyZoomedIn_Event(unsigned char Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedIn_Event");

	UAbility_Kaleidoscope_C_NotifyZoomedIn_Event_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedOut_Event
// (BlueprintCallable, BlueprintEvent)

void UAbility_Kaleidoscope_C::NotifyZoomedOut_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedOut_Event");

	UAbility_Kaleidoscope_C_NotifyZoomedOut_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifySwitchedMode_Event
// (BlueprintCallable, BlueprintEvent)

void UAbility_Kaleidoscope_C::NotifySwitchedMode_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifySwitchedMode_Event");

	UAbility_Kaleidoscope_C_NotifySwitchedMode_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.ExecuteUbergraph_Ability_Kaleidoscope
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Kaleidoscope_C::ExecuteUbergraph_Ability_Kaleidoscope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.ExecuteUbergraph_Ability_Kaleidoscope");

	UAbility_Kaleidoscope_C_ExecuteUbergraph_Ability_Kaleidoscope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
