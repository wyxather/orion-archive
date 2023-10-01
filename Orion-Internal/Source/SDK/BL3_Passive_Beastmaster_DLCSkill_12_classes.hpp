#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_12_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C
// 0x0040 (0x01F0 - 0x01B0)
class UPassive_Beastmaster_DLCSkill_11_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_12;// 0x01B8(0x0028)
	class ABPChar_Beastmaster_C*                       Beastmaster;                                              // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               Pet;                                                      // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill11_OnBeastmasterPetSpawned(class AOakCharacter* Pet);
	void DLCSkill11_OnBeastmasterPetReleased(class AOakCharacter* Pet);
	void SetupPetEvents();
	void CleanupPetEvents();
	void DLCSkill11_Pet_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
