#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_IronBear_ShortFuse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C
// 0x0039 (0x01E9 - 0x01B0)
class UPassiveSkill_IronBear_ShortFuse_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_LongFuse;// 0x01B8(0x0028)
	struct FRandomStream                               RandomStream_ShortFuse;                                   // 0x01E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bCanBeTriggered;                                          // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C");
		return ptr;
	}


	void NewFunction_1(float Damage, class UDamageSource* DamageSource, const struct FVector& HitLoc);
	void OnActivated();
	void CausedDamage_ShortFuse(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_PassiveSkill_IronBear_ShortFuse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
