#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_MindMelt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Artifact_MindMelt.Ability_Artifact_MindMelt_C
// 0x006E (0x0188 - 0x011A)
class UAbility_Artifact_MindMelt_C : public UBP_InventoryAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (Transient, DuplicateTransient)
	float                                              BonusDamage;                                              // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UClass*                                      ElementalDamageType;                                      // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_ToxicRevenger;// 0x0138(0x0028)
	bool                                               AOEAvailable;                                             // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	class ABPChar_Player_C*                            Player;                                                   // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    AuraFX;                                                   // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                SlamTimer;                                                // 0x0178(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      MindMeltAction;                                           // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_MindMelt.Ability_Artifact_MindMelt_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void SlamEnd(const struct FGroundSlamEndedDetails& Details);
	void StopEffect();
	void ExecuteUbergraph_Ability_Artifact_MindMelt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
