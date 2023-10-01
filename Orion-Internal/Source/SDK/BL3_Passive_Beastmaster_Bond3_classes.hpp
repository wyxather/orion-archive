#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C
// 0x0048 (0x01F8 - 0x01B0)
class UPassive_Beastmaster_Bond3_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	float                                              NewDamageDealt;                                           // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	class UDamageSource*                               NewDamageSource;                                          // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               ActivePet;                                                // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Bond3;// 0x01D0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C");
		return ptr;
	}


	void CanHealPet(class UObject* DamageInst, class UDamageSource* DamageSource, bool* res);
	void DoPetHeal();
	void OnActivated();
	void OnCausedDamage_Bond3(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_Passive_Beastmaster_Bond3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
