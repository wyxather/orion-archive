#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_AceUpIronBear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Gunner_AceUpIronBear.PassiveSkill_Gunner_AceUpIronBear_C
// 0x0034 (0x01E4 - 0x01B0)
class UPassiveSkill_Gunner_AceUpIronBear_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_AceUpIronBear;// 0x01B8(0x0028)
	int                                                nGrenadeThrownCounter;                                    // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_AceUpIronBear.PassiveSkill_Gunner_AceUpIronBear_C");
		return ptr;
	}


	void TryGrenadeDrop();
	void OnActivated();
	void DownStateStart_AceUpIronBear();
	void DownStateStop_AceUpIronBear();
	void GrenadeTossed_AceUpIronBear();
	void OnResumed();
	void OnPaused();
	void OnDeactivated();
	void ExecuteUbergraph_PassiveSkill_Gunner_AceUpIronBear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
