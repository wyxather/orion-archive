#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorBonus_CryoDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C
// 0x0070 (0x0168 - 0x00F8)
class UAbility_All_Passive_TerrorBonus_CryoDamage_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ABPChar_Player_C*                            Player;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                GenerateTerrorRate;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                GenerateTerrorDuration;                                   // 0x0110(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_All_Passive_TerrorBonus_CryoDamage;// 0x0118(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_All_Passive_TerrorBonus_CryoDamage;// 0x0140(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C");
		return ptr;
	}


	void OnActivated();
	void CheckTerror(const struct FGameResourcePoolReference& ResourcePool);
	void TerrorDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void ExecuteUbergraph_Ability_All_Passive_TerrorBonus_CryoDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
