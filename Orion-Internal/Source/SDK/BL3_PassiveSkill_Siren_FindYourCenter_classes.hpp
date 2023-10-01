#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_FindYourCenter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C
// 0x0048 (0x0230 - 0x01E8)
class UPassiveSkill_Siren_FindYourCenter_C : public UOakPassiveAbility_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       ExecutionerActiveTime;                                    // 0x01F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_FindYourCenter;// 0x0208(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C");
		return ptr;
	}


	void OnActivated();
	void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
