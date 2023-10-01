#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_NextMag_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C
// 0x007D (0x0288 - 0x020B)
class UAbility_Gunner_NextMag_Parent_C : public UAbility_AnointParent_Gunner_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x020B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame;// 0x0218(0x0028)
	int                                                ReloadCount;                                              // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class AOakCharacter*                               OakCharacterOwner;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FAttributeInitializationData                MaxReloads;                                               // 0x0250(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C");
		return ptr;
	}


	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void OnActivated();
	void ReloadedWeapon(class AWeapon* EventWeapon, bool bAutoReload);
	void AnointAutoBearStarted();
	void ExecuteUbergraph_Ability_Gunner_NextMag_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
