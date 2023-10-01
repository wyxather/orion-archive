#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_BareKnuckle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Siren_BareKnuckle_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_BareKnuckle;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C");
		return ptr;
	}


	void IsConsideredMeleeDamage(class UClass* Source, bool* res);
	void OnActivated();
	void SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_PassiveSkill_Siren_BareKnuckle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
