#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_Reload_TerrorNova_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_Gunner_Reload_TerrorNova_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0100(0x0028)
	class ABPChar_Player_C*                            Player;                                                   // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C");
		return ptr;
	}


	void OnActivated();
	void ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
