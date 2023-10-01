#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Anarchy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Anarchy.Ability_Anarchy_C
// 0x0044 (0x013C - 0x00F8)
class UAbility_Anarchy_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class APlayerController*                           PlayerController;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SleepingGiant;// 0x0108(0x0028)
	class UParticleSystemComponent*                    FX_Homicidal;                                             // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              RicochetChance;                                           // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Anarchy.Ability_Anarchy_C");
		return ptr;
	}


	void OnRegistered();
	void OnUnregistered();
	void OnCauseDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void Reload_Started(class AWeapon* EventWeapon, bool bAutoReload);
	void ExecuteUbergraph_Ability_Anarchy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
