// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Omniloader_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Omniloader.Ability_Omniloader_C.RefillOtherWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 EquippedWeapon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Omniloader_C::RefillOtherWeapon(class AOakCharacter* Character, class UInventorySlotData* InventorySlot, class AWeapon* EquippedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Omniloader.Ability_Omniloader_C.RefillOtherWeapon");

	UAbility_Omniloader_C_RefillOtherWeapon_Params params;
	params.Character = Character;
	params.InventorySlot = InventorySlot;
	params.EquippedWeapon = EquippedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Omniloader.Ability_Omniloader_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Omniloader_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Omniloader.Ability_Omniloader_C.OnActivated");

	UAbility_Omniloader_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Omniloader.Ability_Omniloader_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Omniloader_C::CustomEvent_1(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Omniloader.Ability_Omniloader_C.CustomEvent_1");

	UAbility_Omniloader_C_CustomEvent_1_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Omniloader.Ability_Omniloader_C.ExecuteUbergraph_Ability_Omniloader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Omniloader_C::ExecuteUbergraph_Ability_Omniloader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Omniloader.Ability_Omniloader_C.ExecuteUbergraph_Ability_Omniloader");

	UAbility_Omniloader_C_ExecuteUbergraph_Ability_Omniloader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
