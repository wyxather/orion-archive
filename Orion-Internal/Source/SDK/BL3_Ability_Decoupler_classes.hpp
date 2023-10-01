#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Decoupler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Decoupler.Ability_Decoupler_C
// 0x0044 (0x013C - 0x00F8)
class UAbility_Decoupler_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class UOakDamageCauserComponent*                   OakDamageCauser;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Quickdraw;// 0x0108(0x0028)
	class AOakCharacter*                               OakChar;                                                  // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentLoaded;                                            // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Decoupler.Ability_Decoupler_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void OnUnregistered();
	void OnPaused();
	void ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void ReloadFinished(class AWeapon* EventWeapon, bool bCompleted);
	void ExecuteUbergraph_Ability_Decoupler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
