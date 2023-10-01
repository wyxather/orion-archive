#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_6_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C
// 0x0058 (0x0208 - 0x01B0)
class UPassive_Gunner_DLCSkill_5_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	TArray<class UInventorySlotData*>                  InventorySlotsToIterate;                                  // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CorrosiveEquipped;                                        // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CryoEquipped;                                             // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FireEquipped;                                             // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RadiationEquipped;                                        // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShockEquipped;                                            // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfStacks;                                           // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_DLCSkill_6;// 0x01E0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C");
		return ptr;
	}


	void GetNumberOfBonuses();
	void CleanupVariables();
	void GetItemDamageType(class AActor* InvSlot);
	void OnActivated();
	void OnResumed();
	void DetermineTotalMatchingElements();
	void ApplyBonuses();
	void RemoveBonuses();
	void OpenGate();
	void DLCSkill5_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
	void AddBonusStack();
	void DLCSkill5_UpdateMatchingElements();
	void DLC5_OnGrenadeSlotChanged(class AActor* EquippedActor, class UInventorySlotData* SlotData);
	void DLCSkill5_IronBearExitedAndPlayerReady(class AOakCharacter_IronBear* IronBear);
	void DLCSkill5_OnDownStateStart();
	void ExecuteUbergraph_Passive_Gunner_DLCSkill_6(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
