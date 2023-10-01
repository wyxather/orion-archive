#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SM_TED_DarkArmy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C
// 0x0050 (0x0148 - 0x00F8)
class UAbility_SM_TED_DarkArmy_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class UWeaponFireProjectileComponent*              MyFireComponent;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BinaryOperator;// 0x0108(0x0028)
	class ABPWeap_SM_TED_C*                            BPWeap;                                                   // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ADroneProj_TED_DarkArmy_C*>           DroneArray;                                               // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C");
		return ptr;
	}


	void OnRegistered();
	void ReloadStartedDelegate(class AWeapon* EventWeapon, bool bCompleted);
	void OnDeactivated();
	void OnUnregistered();
	void OnPaused();
	void OnActivated();
	void ExecuteUbergraph_Ability_SM_TED_DarkArmy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
