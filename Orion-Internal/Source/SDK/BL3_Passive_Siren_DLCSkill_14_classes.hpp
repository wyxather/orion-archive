#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_14_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_DLCSkill_14.Passive_Siren_DLCSkill_13_C
// 0x0060 (0x0210 - 0x01B0)
class UPassive_Siren_DLCSkill_13_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Siren_DLCSkill_14;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       Chance;                                                   // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       CooldownTime;                                             // 0x01F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DLCSkill_14.Passive_Siren_DLCSkill_13_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill13_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Passive_Siren_DLCSkill_14(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
