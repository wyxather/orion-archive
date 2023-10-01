#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerAbility_Weapon.PlayerAbility_Weapon_C
// 0x0008 (0x0138 - 0x0130)
class UPlayerAbility_Weapon_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Weapon.PlayerAbility_Weapon_C");
		return ptr;
	}


	void QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot);
	void GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_30(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Fire_K2Node_GbxInputActionEvent_Discrete_29(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_28(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Zoom_K2Node_GbxInputActionEvent_Discrete_27(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Reload_K2Node_GbxInputActionEvent_Discrete_26(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Grenade_K2Node_GbxInputActionEvent_Discrete_25(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_DropWeapon_K2Node_GbxInputActionEvent_Discrete_24(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_ToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_23(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_PrevWeapon_K2Node_GbxInputActionEvent_Discrete_22(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_NextWeapon_K2Node_GbxInputActionEvent_Discrete_21(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_SelectWeapon1_K2Node_GbxInputActionEvent_Discrete_20(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_SelectWeapon2_K2Node_GbxInputActionEvent_Discrete_19(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_SelectWeapon3_K2Node_GbxInputActionEvent_Discrete_18(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_SelectWeapon4_K2Node_GbxInputActionEvent_Discrete_17(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_PreToggleWeaponMode_K2Node_GbxInputActionEvent_Discrete_16(class UGbxInputActionData_Discrete* Action);
	void OnPaused();
	void ExecuteUbergraph_PlayerAbility_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
