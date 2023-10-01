#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IronBearAbility_Eject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IronBearAbility_Eject.IronBearAbility_Eject_C.QuickSelectWeapon
struct UIronBearAbility_Eject_C_QuickSelectWeapon_Params
{
	class UInventorySlotData*                          InvSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWeaponSlotData*                             WeaponSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4
struct UIronBearAbility_Eject_C_GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Eject.IronBearAbility_Eject_C.GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3
struct UIronBearAbility_Eject_C_GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IronBearAbility_Eject.IronBearAbility_Eject_C.OnActivated
struct UIronBearAbility_Eject_C_OnActivated_Params
{
};

// Function IronBearAbility_Eject.IronBearAbility_Eject_C.ExecuteUbergraph_IronBearAbility_Eject
struct UIronBearAbility_Eject_C_ExecuteUbergraph_IronBearAbility_Eject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
