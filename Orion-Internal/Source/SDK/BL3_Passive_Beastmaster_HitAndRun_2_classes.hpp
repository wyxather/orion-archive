#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_HitAndRun_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_HitAndRun_2.Passive_Beastmaster_HitAndRun_1_C
// 0x0048 (0x01F8 - 0x01B0)
class UPassive_Beastmaster_HitAndRun_1_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_HitAndRun_2;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       PetEffectDuration;                                        // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_HitAndRun_2.Passive_Beastmaster_HitAndRun_1_C");
		return ptr;
	}


	void OnActivated();
	void CausedDamage_HitAndRun1(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Passive_Beastmaster_HitAndRun_2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
