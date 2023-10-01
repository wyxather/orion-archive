#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_PlayingDirty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C
// 0x0070 (0x0250 - 0x01E0)
class UPassiveSkill_Operative_PlayingDirty_C : public UPassiveSkill_Operative_KillSkillParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_PlayingDirty;// 0x01E8(0x0028)
	struct FDataTableValueHandle                       ExtraShotChance;                                          // 0x0210(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ExtraShots;                                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FDataTableValueHandle                       KillSkillTime;                                            // 0x0230(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                RicochetTimer;                                            // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C");
		return ptr;
	}


	void GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining);
	void PlayingDirtyOnWeaponUsed(class AWeapon* EventWeapon);
	void OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy);
	void ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
