#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_TutorialComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TutorialComponent.BP_TutorialComponent_C
// 0x0019 (0x0169 - 0x0150)
class UBP_TutorialComponent_C : public UTutorialComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0150(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter_Master_Player_C*                  WoundedCharacter;                                         // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                         Inventory;                                                // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enabled;                                                  // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorialComponent.BP_TutorialComponent_C");
		return ptr;
	}


	void IncrementCounter(struct FName* Counter);
	void GetSave(class USavedCharacter** Out);
	void CheckCounter(struct FName* Counter, int* MaxCount, bool* Out);
	void HasDragonHeart(bool* Out);
	void HasTwoRangedWeapons(bool* Out);
	void CanUseWeaponMod(bool* Out);
	void HasMeleeWeapon(bool* Out);
	void HasRangedWeapon(bool* Out);
	void SetCooldown(struct FName* Cooldown, float* Time);
	void CheckCooldown(struct FName* Cooldown, bool* Out);
	void NotifyWounded(class ACharacter_Master_Player_C** Character);
	void OnWoundedState_Event_1(class UWoundedComponent** WoundedComponent, EWoundedState* State);
	void SetupWoundedTutorial();
	void OnWoundedState_Event_2(class UWoundedComponent** WoundedComponent, EWoundedState* State);
	void SetupReloadTutorial();
	void OnReloadTutorialTimer();
	void SetupToggleWeaponTutorial();
	void OnToggleWeaponEvent(struct FName* EventName);
	void SetupAttackTutorial();
	void CheckForTarget();
	void SetupDodgeTutorial();
	void OnDodgeTutorialNotifyTakeDamage(struct FDamageInfo* DamageInfo);
	void SetupTraitsTutorial();
	void OnLevelUp_Event_1();
	void SetupHealthTutorial();
	void OnHealthTutorialNotifyTakeDamage(struct FDamageInfo* DamageInfo);
	void OnUsedDragonHeart();
	void ReceiveBeginPlay();
	void OnEvent_Event_1(struct FName* EventName);
	void ExecuteUbergraph_BP_TutorialComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
