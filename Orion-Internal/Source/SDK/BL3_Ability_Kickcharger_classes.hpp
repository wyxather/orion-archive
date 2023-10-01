#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Kickcharger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Kickcharger.Ability_Kickcharger_C
// 0x0042 (0x013A - 0x00F8)
class UAbility_Kickcharger_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD;// 0x0100(0x0028)
	struct FGbxAttributeModifierHandle                 ChargeTimeAttributeModifierHandle;                        // 0x0128(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isCharging;                                               // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isFullyCharged;                                           // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Kickcharger.Ability_Kickcharger_C");
		return ptr;
	}


	void OnDeactivated();
	void WeaponFired(class AWeapon* EventWeapon);
	void StopSliding(const struct FSlideEndedDetails& Details);
	void InstantChargeExpired();
	void FullyChargedAudio();
	void OnActivated();
	void ChargeTicker();
	void ExecuteUbergraph_Ability_Kickcharger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
