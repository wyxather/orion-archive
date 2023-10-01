#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_ColdBore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C
// 0x0059 (0x0209 - 0x01B0)
class UPassiveSkill_Operative_ColdBore_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_HotSwap;// 0x01B8(0x0028)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_PassiveSkill_Operative_HotSwap;// 0x01E0(0x0028)
	bool                                               bIsListeningForFirstShot;                                 // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C");
		return ptr;
	}


	void GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining);
	void OnActivated();
	void OnWeaponUsed(class AWeapon* EventWeapon);
	void ColdBore_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
	void ExecuteUbergraph_PassiveSkill_Operative_ColdBore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
