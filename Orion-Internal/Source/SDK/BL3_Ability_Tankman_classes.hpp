#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Tankman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Tankman.Ability_Tankman_C
// 0x004C (0x0144 - 0x00F8)
class UAbility_Tankman_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class APlayerController*                           PlayerController;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectDamage;                                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageScalar;                                             // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectCritDamage;                                         // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SleepingGiant;// 0x0118(0x0028)
	float                                              DamageScalar_Bonus;                                       // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Tankman.Ability_Tankman_C");
		return ptr;
	}


	void OnResumed();
	void OnActivated();
	void OnRegistered();
	void ReloadStartedEvent(class AWeapon* EventWeapon, bool bAutoReload);
	void ReloadEndedEvent(class AWeapon* EventWeapon, bool bCompleted);
	void OnUnregistered();
	void OnCauseDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnDownStateStart_CE();
	void ExecuteUbergraph_Ability_Tankman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
