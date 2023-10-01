#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_WarlordAmmoRegen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_WarlordAmmoRegen_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakWeapon*                                  BaseWeapon;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_WarlordAmmoRegen;// 0x0108(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C");
		return ptr;
	}


	void OnActivated();
	void WeaponFired();
	void Mode2Fired();
	void ExecuteUbergraph_Ability_WarlordAmmoRegen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
