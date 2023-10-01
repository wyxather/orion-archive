#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_AbstractGrenades_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C
// 0x0020 (0x0200 - 0x01E0)
class UPassiveSkill_Operative_AbstractGrenades_C : public UPassiveSkill_Operative_KillSkillParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       GrenadeChance;                                            // 0x01E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C");
		return ptr;
	}


	void OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy);
	void ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
