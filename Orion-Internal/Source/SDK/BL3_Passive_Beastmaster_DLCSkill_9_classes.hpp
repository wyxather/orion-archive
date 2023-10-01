#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_9_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassive_Beastmaster_DLCSkill_8_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_9;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C");
		return ptr;
	}


	void RemoveShield();
	void ConfigureShield(class AOakCharacter* Pet);
	void OnActivated();
	void UpdateShield();
	void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
