#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Redeye_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Redeye.Ability_Redeye_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_Redeye_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD;// 0x0100(0x0028)
	class UWeaponFireProjectileComponent*              WeaponFireProjectileComponent;                            // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Redeye.Ability_Redeye_C");
		return ptr;
	}


	void OnActivated();
	void WeaponFired(class AWeapon* EventWeapon);
	void OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void UpdateWeapon();
	void ExecuteUbergraph_Ability_Redeye(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
