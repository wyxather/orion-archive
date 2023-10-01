#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_NextMagBonus_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C
// 0x007F (0x0240 - 0x01C1)
class UAbility_All_SkillEnd_NextMagBonus_C : public UAbility_AnointParent_SkillEnd_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_SkillEnd_AccuracyHandling;// 0x01D0(0x0028)
	int                                                ReloadCount;                                              // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	class AOakCharacter*                               OakCharacterOwner;                                        // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FAttributeInitializationData                MaxReloads;                                               // 0x0208(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C");
		return ptr;
	}


	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void OnActivated();
	void BindReloadEvent();
	void UnbindReloadEvent();
	void AnointRemoveEffect();
	void ReloadedWeapon(class AWeapon* EventWeapon, bool bCompleted);
	void ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
