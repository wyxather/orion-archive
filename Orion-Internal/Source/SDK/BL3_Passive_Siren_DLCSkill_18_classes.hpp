#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_18_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C
// 0x0059 (0x0209 - 0x01B0)
class UPassive_Siren_DLCSkill_17_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Passive_Siren_DLCSkill_18;// 0x01B8(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Siren_DLCSkill_18;// 0x01E0(0x0028)
	bool                                               SkillReadied;                                             // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill17_OnResourcePoolDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void DLCSkill17_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ExecuteUbergraph_Passive_Siren_DLCSkill_18(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
