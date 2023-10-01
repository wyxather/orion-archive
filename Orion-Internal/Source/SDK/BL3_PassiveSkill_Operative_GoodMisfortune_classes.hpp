#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_GoodMisfortune_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C
// 0x0040 (0x0220 - 0x01E0)
class UPassiveSkill_Operative_GoodMisfortune_C : public UPassiveSkill_Operative_KillSkillParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)
	int                                                SNTRYCount;                                               // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_GoodMisfortune;// 0x01F0(0x0028)
	int                                                BarrierCount;                                             // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CloneCount;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C");
		return ptr;
	}


	void GetDurationReturn(int Count, float MaxDuration, float* res);
	void OnActivated();
	void GoodMisfortuneSNTRYActivated(class UOakActionAbility* ActionAbility);
	void OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy);
	void ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
