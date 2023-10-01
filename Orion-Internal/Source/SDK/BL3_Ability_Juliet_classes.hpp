#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Juliet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Juliet.Ability_Juliet_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_Juliet_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class APlayerController*                           PlayerController;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SleepingGiant;// 0x0108(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Juliet.Ability_Juliet_C");
		return ptr;
	}


	void OnResumed();
	void OnActivated();
	void OnRegistered();
	void ReloadStartedEvent(class AWeapon* EventWeapon, bool bAutoReload);
	void OnUnregistered();
	void OnCausedDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Ability_Juliet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
