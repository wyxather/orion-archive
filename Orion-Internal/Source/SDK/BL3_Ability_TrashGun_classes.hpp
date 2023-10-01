#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_TrashGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_TrashGun.Ability_TrashGun_C
// 0x00A8 (0x01A0 - 0x00F8)
class UAbility_TrashGun_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FStatusEffectSpec                           FireRateStatus;                                           // 0x0100(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusEffectSpec                           HeatPerShotStatus;                                        // 0x0138(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_TrashGun;// 0x0170(0x0028)
	class AOakCharacter*                               OakCharacter;                                             // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_TrashGun.Ability_TrashGun_C");
		return ptr;
	}


	void OnActivated();
	void RandomRandomness();
	void KillCDM();
	void ExecuteUbergraph_Ability_TrashGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
