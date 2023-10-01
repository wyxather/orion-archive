#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_HitAndRun11_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C
// 0x0034 (0x01E4 - 0x01B0)
class UPassive_Beastmaster_HitAndRun11_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_HitAndRun11;// 0x01B8(0x0028)
	float                                              FullHealthMultiplier;                                     // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C");
		return ptr;
	}


	void OnActivated();
	void OnActionSkillActivated_HitAndRun11(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_Passive_Beastmaster_HitAndRun11(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
