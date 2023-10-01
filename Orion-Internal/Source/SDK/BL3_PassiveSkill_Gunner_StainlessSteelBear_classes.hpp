#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_StainlessSteelBear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C
// 0x0038 (0x01E8 - 0x01B0)
class UPassiveSkill_Gunner_StainlessSteelBear_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_StainlessSteelBear;// 0x01B8(0x0028)
	class AOakCharacter_IronBear*                      CurrentIronBear;                                          // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C");
		return ptr;
	}


	void OnActivated();
	void StainlessSteelBear_AutoBearStarted();
	void StainlessSteelBear_IronBearEnteredAndReady(class AOakCharacter_IronBear* IronBear);
	void ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
