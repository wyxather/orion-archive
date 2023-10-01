#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_PewPew_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_PewPew.Ability_PewPew_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_PewPew_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AmberManagement;// 0x0100(0x0028)
	class AWeapon*                                     MyWeapon;                                                 // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_PewPew.Ability_PewPew_C");
		return ptr;
	}


	void OnActivated();
	void CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Ability_PewPew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
