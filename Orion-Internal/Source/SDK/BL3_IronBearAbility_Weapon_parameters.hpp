#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IronBearAbility_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetRightFireHardPointSlot
struct UIronBearAbility_Weapon_C_GetRightFireHardPointSlot_Params
{
	class UOakActionAbilityAugmentSlotData*            res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GetLeftFireHardPointSlot
struct UIronBearAbility_Weapon_C_GetLeftFireHardPointSlot_Params
{
	class UOakActionAbilityAugmentSlotData*            res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.QuickSelectWeapon
struct UIronBearAbility_Weapon_C_QuickSelectWeapon_Params
{
	class UInventorySlotData*                          InvSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWeaponSlotData*                             WeaponSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10
struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9
struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8
struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7
struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6
struct UIronBearAbility_Weapon_C_GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnActivated
struct UIronBearAbility_Weapon_C_OnActivated_Params
{
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.OnPaused
struct UIronBearAbility_Weapon_C_OnPaused_Params
{
};

// Function IronBearAbility_Weapon.IronBearAbility_Weapon_C.ExecuteUbergraph_IronBearAbility_Weapon
struct UIronBearAbility_Weapon_C_ExecuteUbergraph_IronBearAbility_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
