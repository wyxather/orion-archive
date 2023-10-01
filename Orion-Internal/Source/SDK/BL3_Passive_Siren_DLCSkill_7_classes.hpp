#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_7_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_DLCSkill_7.Passive_Siren_DLCSkill_6_C
// 0x0048 (0x01F8 - 0x01B0)
class UPassive_Siren_DLCSkill_6_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Siren_DLCSkill_7;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       Scalar;                                                   // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DLCSkill_7.Passive_Siren_DLCSkill_6_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill6_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Passive_Siren_DLCSkill_7(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
