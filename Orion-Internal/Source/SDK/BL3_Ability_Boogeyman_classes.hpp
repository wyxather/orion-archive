#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Boogeyman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Boogeyman.Ability_Boogeyman_C
// 0x0110 (0x0208 - 0x00F8)
class UAbility_Boogeyman_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakWeapon*                                  BaseWeapon;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_WarlordAmmoRegen;// 0x0108(0x0028)
	struct FEnvQueryParams                             Query;                                                    // 0x0130(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      Target;                                                   // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FanLoc;                                                   // 0x01F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    FanRot;                                                   // 0x01FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Boogeyman.Ability_Boogeyman_C");
		return ptr;
	}


	void OnActivated();
	void WeaponFired();
	void OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Ability_Boogeyman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
