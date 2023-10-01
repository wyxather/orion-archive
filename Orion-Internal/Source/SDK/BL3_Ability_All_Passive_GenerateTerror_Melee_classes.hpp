#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_GenerateTerror_Melee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_Passive_GenerateTerror_Melee.Ability_All_Passive_GenerateTerror_Melee_C
// 0x0048 (0x0140 - 0x00F8)
class UAbility_All_Passive_GenerateTerror_Melee_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_SkillEnd_AccuracyHandling;// 0x0100(0x0028)
	class ABPChar_Player_C*                            Player;                                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                GenerateTerrorRate;                                       // 0x0130(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                GenerateTerrorDuration;                                   // 0x0138(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_Passive_GenerateTerror_Melee.Ability_All_Passive_GenerateTerror_Melee_C");
		return ptr;
	}


	void OnActivated();
	void CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_All_Passive_GenerateTerror_Melee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
