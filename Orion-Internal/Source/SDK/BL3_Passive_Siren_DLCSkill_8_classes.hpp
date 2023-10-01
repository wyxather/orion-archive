#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_8_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassive_Siren_DLCSkill_7_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Siren_DLCSkill_8;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill7_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Passive_Siren_DLCSkill_8(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
