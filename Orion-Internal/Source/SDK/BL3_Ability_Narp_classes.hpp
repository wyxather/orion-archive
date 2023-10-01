#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Narp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Narp.Ability_Narp_C
// 0x003C (0x0134 - 0x00F8)
class UAbility_Narp_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Killed;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD;// 0x0108(0x0028)
	int                                                LoadedAmmo;                                               // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Narp.Ability_Narp_C");
		return ptr;
	}


	void OnActivated();
	void OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void OnReloadEnded(class AWeapon* EventWeapon, bool bCompleted);
	void OnDeactivated();
	void OnUnregistered();
	void ExecuteUbergraph_Ability_Narp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
