#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C
// 0x0060 (0x0158 - 0x00F8)
class UOakAbility_Siren_ClassMod_Unique_04_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FOakAbilityResourceController_SirenRushStack RsrcCntrlr_OakAbilityResourceController_SirenRushStack_OakAbility_Siren_Unique04;// 0x0100(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_Unique04;// 0x0128(0x0028)
	struct FTimerHandle                                RushTimer;                                                // 0x0150(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C");
		return ptr;
	}


	void SirenUnique04_ActivatedRushBonus(int RushStacks);
	void TickDownRushStacks();
	void OnActivated();
	void ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
