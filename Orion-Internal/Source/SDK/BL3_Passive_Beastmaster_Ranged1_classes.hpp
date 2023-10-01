#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Ranged1.Passive_Beastmaster_Ranged1_C
// 0x0038 (0x01E8 - 0x01B0)
class UPassive_Beastmaster_Ranged1_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FRandomStream                               RandomStream_BulletRefundChance;                          // 0x01B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged1;// 0x01C0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged1.Passive_Beastmaster_Ranged1_C");
		return ptr;
	}


	void OnActivated();
	void CausedDamage_Ranged1(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ResetLNTClamp();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_Passive_Beastmaster_Ranged1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
