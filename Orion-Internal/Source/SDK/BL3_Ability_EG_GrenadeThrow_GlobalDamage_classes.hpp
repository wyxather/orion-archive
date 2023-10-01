#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_GrenadeThrow_GlobalDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C
// 0x0070 (0x0168 - 0x00F8)
class UAbility_EG_GrenadeThrow_GlobalDamage_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ABPChar_Player_C*                            Player;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                BonusDamageTimer;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                RemoveCDMTimer;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_EG_Generic_KillStackReloadDamage;// 0x0118(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_EG_GrenadeThrow_GlobalDamage;// 0x0140(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C");
		return ptr;
	}


	void OnActivated();
	void GrenadeThrown();
	void ApplyCDM();
	void RemoveCDM();
	void ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
