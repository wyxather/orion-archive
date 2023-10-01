#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged11_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C
// 0x0050 (0x0200 - 0x01B0)
class UPassive_Beastmaster_Ranged11_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGameResourcePoolReference                  NewResourcePool;                                          // 0x01B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                               Stream_RandomChance;                                      // 0x01D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged11;// 0x01D8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C");
		return ptr;
	}


	void NewFunction_1();
	EGbxAbilityState CalculateAbilityState();
	bool RandomChanceByGrade();
	void OnResumed();
	void OnCausedDamage_Ranged11(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_Passive_Beastmaster_Ranged11(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
