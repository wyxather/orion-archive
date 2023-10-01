#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IronBearAbility_Eject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IronBearAbility_Eject.IronBearAbility_Eject_C
// 0x0010 (0x0140 - 0x0130)
class UIronBearAbility_Eject_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_IronBear*                      IronBear;                                                 // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IronBearAbility_Eject.IronBearAbility_Eject_C");
		return ptr;
	}


	void QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot);
	void GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_IronBear_Eject_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action);
	void OnActivated();
	void ExecuteUbergraph_IronBearAbility_Eject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
