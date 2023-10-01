#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_MatchedSet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C
// 0x00B8 (0x0268 - 0x01B0)
class UPassive_Gunner_MatchedSet_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	float                                              EquippedGearMultiplier;                                   // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_MatchedSet;// 0x01C0(0x0028)
	TArray<class UInventorySlotData*>                  InventorySlotsToIterate;                                  // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UManufacturerData*                           RightHandGunManufacturer;                                 // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UInventorySlotData*, TEnumAsByte<Enum_Gunner_MatchedSet_InentorySlots>> InventorySlotsToEnum;                                     // 0x0200(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GrenadeModifier;                                          // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldModifier;                                           // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weapon1Modifier;                                          // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weapon2Modifier;                                          // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weapon3Modifier;                                          // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weapon4Modifier;                                          // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void SetGearModifierPerInventorySlot(class UInventorySlotData* SlotToUse, bool NewModifyValue);
	void CalculateTotalGearModifierBonus();
	void GetIsNewRightHandWeapon_(class AActor* ModifiedEquipment, bool* ItIs_);
	void CleanupGearBonus();
	void SetRightHandManufacturer();
	void GetItemManufacturer(class AActor* GearToTest, class UManufacturerData** Manufacturer);
	void TryToModifyIndividualGearBonus(class UInventorySlotData* NewSlot, bool Add_);
	void MatchedSet_EquippedItem(class AActor* EquippedActor, class UInventorySlotData* SlotData);
	void MatchedSet_UnequippedItem(class AActor* UnequippedActor, class UInventorySlotData* SlotData);
	void DetermineTotalGearBonus();
	void HandleNewEquippedItem(class AActor* NewModifiedActor, class UInventorySlotData* NewSlotData, bool Add_);
	void OnActivated();
	void OnResumed();
	void OnPaused();
	void MatchedSet_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
	void OnForcedRefresh();
	void ExecuteUbergraph_Passive_Gunner_MatchedSet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
