#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Grasp_TerrorSkulls_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C
// 0x0040 (0x0138 - 0x00F8)
class UAbility_Siren_Grasp_TerrorSkulls_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0100(0x0028)
	class UClass*                                      ActionSkillElement;                                       // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABPChar_Player_C*                            Player;                                                   // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C");
		return ptr;
	}


	void OnActivated();
	void GraspedTarget(class AActor* Enemy, EPhaseTranceElementalType Element);
	void ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
