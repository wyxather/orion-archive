#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Tizzy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Tizzy.Ability_Tizzy_C
// 0x0080 (0x0178 - 0x00F8)
class UAbility_Tizzy_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BinaryOperator;// 0x0100(0x0028)
	class UBPHeatComponent_CoV_C*                      HeatComponent;                                            // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      Player;                                                   // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UOakDamageCauserComponent*                   DamageCauserComponent;                                    // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Tizzy;// 0x0140(0x0028)
	int                                                Count;                                                    // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class AWeapon*                                     Weapon;                                                   // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Tizzy.Ability_Tizzy_C");
		return ptr;
	}


	void StopTizzy();
	void StartTizzy();
	void OnActivated();
	void NotifyHeatChange();
	void OnDeactivated();
	void WeaponUsed(class AWeapon* EventWeapon);
	void ExecuteUbergraph_Ability_Tizzy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
