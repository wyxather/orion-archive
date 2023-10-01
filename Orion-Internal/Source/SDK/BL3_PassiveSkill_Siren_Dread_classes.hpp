#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Dread_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassiveSkill_Siren_Dread_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Overcharge;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C");
		return ptr;
	}


	void OnActivated();
	void OnGraspedTarget(class AGbxCharacter* GraspedTarget);
	void OnKilledGraspedTarget(class AActor* Killer, class AGbxCharacter* GraspedTarget);
	void ExecuteUbergraph_PassiveSkill_Siren_Dread(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
