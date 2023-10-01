#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Kaleidoscope_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.RefillOtherWeapon
struct UAbility_Kaleidoscope_C_RefillOtherWeapon_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     EquippedWeapon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnActivated
struct UAbility_Kaleidoscope_C_OnActivated_Params
{
};

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnDeactivated
struct UAbility_Kaleidoscope_C_OnDeactivated_Params
{
};

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnUnregistered
struct UAbility_Kaleidoscope_C_OnUnregistered_Params
{
};

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnPaused
struct UAbility_Kaleidoscope_C_OnPaused_Params
{
};

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedIn_Event
struct UAbility_Kaleidoscope_C_NotifyZoomedIn_Event_Params
{
	unsigned char                                      Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedOut_Event
struct UAbility_Kaleidoscope_C_NotifyZoomedOut_Event_Params
{
};

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifySwitchedMode_Event
struct UAbility_Kaleidoscope_C_NotifySwitchedMode_Event_Params
{
};

// Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.ExecuteUbergraph_Ability_Kaleidoscope
struct UAbility_Kaleidoscope_C_ExecuteUbergraph_Ability_Kaleidoscope_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
