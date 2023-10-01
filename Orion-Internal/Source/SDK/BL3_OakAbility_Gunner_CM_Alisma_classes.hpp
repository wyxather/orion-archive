#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_Alisma_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C
// 0x006C (0x0164 - 0x00F8)
class UOakAbility_Gunner_CM_Alisma_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Gunner_CM_Hib;// 0x0100(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_OakAbility_Gunner_CM_Hib;// 0x0128(0x0028)
	class AOakCharacter_Player*                        PlayerCharacterOwner;                                     // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter_IronBear*                      ActiveIronBear;                                           // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              IronBearSpawnDelay;                                       // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void ExitedIronBear(class AOakCharacter_IronBear* IronBear);
	void EnteredIronBear(class AOakCharacter_IronBear* IronBear);
	void ExecuteUbergraph_OakAbility_Gunner_CM_Alisma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
