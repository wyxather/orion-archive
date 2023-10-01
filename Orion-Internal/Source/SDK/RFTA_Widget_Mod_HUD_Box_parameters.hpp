#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Mod_HUD_Box_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnAnyChange
struct UWidget_Mod_HUD_Box_C_OnAnyChange_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PlayActivateSound
struct UWidget_Mod_HUD_Box_C_PlayActivateSound_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PlayDeactivateSound
struct UWidget_Mod_HUD_Box_C_PlayDeactivateSound_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Repeater_PowerUp
struct UWidget_Mod_HUD_Box_C_Repeater_PowerUp_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshActive
struct UWidget_Mod_HUD_Box_C_RefreshActive_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.GetMaxCharges
struct UWidget_Mod_HUD_Box_C_GetMaxCharges_Params
{
	int                                                MaxCharges;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshMod
struct UWidget_Mod_HUD_Box_C_RefreshMod_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Refresh
struct UWidget_Mod_HUD_Box_C_Refresh_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.RefreshModSlot
struct UWidget_Mod_HUD_Box_C_RefreshModSlot_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.Construct
struct UWidget_Mod_HUD_Box_C_Construct_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnInventoryChanged_Event_1
struct UWidget_Mod_HUD_Box_C_OnInventoryChanged_Event_1_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.SetWeapon
struct UWidget_Mod_HUD_Box_C_SetWeapon_Params
{
	class ARemnantRangedWeapon**                       Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnPowerChanged_Event_1
struct UWidget_Mod_HUD_Box_C_OnPowerChanged_Event_1_Params
{
	float*                                             Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnChargesChanged_Event_1
struct UWidget_Mod_HUD_Box_C_OnChargesChanged_Event_1_Params
{
	float*                                             Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnActivateMod_Event_1
struct UWidget_Mod_HUD_Box_C_OnActivateMod_Event_1_Params
{
	EModActiveState*                                   ActiveState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnUpdateActive
struct UWidget_Mod_HUD_Box_C_OnUpdateActive_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PowerUp
struct UWidget_Mod_HUD_Box_C_PowerUp_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.PowerUpRepeater
struct UWidget_Mod_HUD_Box_C_PowerUpRepeater_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.ReadyToBeUsed
struct UWidget_Mod_HUD_Box_C_ReadyToBeUsed_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.OnInstanceDataChanged
struct UWidget_Mod_HUD_Box_C_OnInstanceDataChanged_Params
{
};

// Function Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C.ExecuteUbergraph_Widget_Mod_HUD_Box
struct UWidget_Mod_HUD_Box_C_ExecuteUbergraph_Widget_Mod_HUD_Box_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
