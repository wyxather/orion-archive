#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C
// 0x00A8 (0x0258 - 0x01B0)
class UPassive_Beastmaster_DLCSkill_2_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Passive_Beastmaster_DLCSkill_3;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       CooldownTime;                                             // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       Damage;                                                   // 0x01F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABPChar_Beastmaster_C*                       Beastmaster;                                              // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       Radius;                                                   // 0x0218(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_3;// 0x0230(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C");
		return ptr;
	}


	void DamageCalc(float* res);
	void OnActivated();
	void DLCSkill2_TriggerSkill(const struct FGameResourcePoolReference& ResourcePool);
	void OnPetSpawned(class AOakCharacter* Pet);
	void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
