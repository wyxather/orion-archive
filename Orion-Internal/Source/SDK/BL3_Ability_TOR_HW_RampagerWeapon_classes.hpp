#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_TOR_HW_RampagerWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C
// 0x003C (0x0134 - 0x00F8)
class UAbility_TOR_HW_RampagerWeapon_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TOR_HW_RampagerWeapon;// 0x0100(0x0028)
	class UWeaponFireProjectileComponent*              FireProjectile;                                           // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Counter;                                                  // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C");
		return ptr;
	}


	void OnRegistered();
	void WeaponFired();
	void ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
