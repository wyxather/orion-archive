#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_Fearmonger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C
// 0x0040 (0x0138 - 0x00F8)
class UAbility_Weapon_Fearmonger_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ABPChar_Player_C*                            Player;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CheckTerror;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_Weapon_Fearmonger;// 0x0110(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C");
		return ptr;
	}


	void OnRegistered();
	void TerrorUpdated(const struct FGameResourcePoolReference& ResourcePool);
	void ExecuteUbergraph_Ability_Weapon_Fearmonger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
