#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_FrozenDevil_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Weapon_FrozenDevil.Ability_Weapon_FrozenDevil_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_Weapon_FrozenDevil_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Weapon_CloudKill;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Weapon_FrozenDevil.Ability_Weapon_FrozenDevil_C");
		return ptr;
	}


	void OnRegistered();
	void OnCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Weapon_FrozenDevil(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
