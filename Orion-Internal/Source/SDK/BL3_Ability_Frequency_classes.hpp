#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Frequency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Frequency.Ability_Frequency_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_Frequency_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Weapon_CloudKill;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Frequency.Ability_Frequency_C");
		return ptr;
	}


	void OnUnregistered();
	void OnDeactivated();
	void OnKilled(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnRegistered();
	void OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void ExecuteUbergraph_Ability_Frequency(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
