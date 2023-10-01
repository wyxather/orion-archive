#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_BlindBandit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_BlindBandit.Ability_BlindBandit_C
// 0x01B8 (0x02B0 - 0x00F8)
class UAbility_BlindBandit_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakWeapon*                                  BaseWeapon;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BlindBandit;// 0x0108(0x0028)
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0130(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      KilledActor;                                              // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumChildProj;                                          // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FEnvQueryParams                             EnvFindStatusQuery;                                       // 0x01F8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_BlindBandit.Ability_BlindBandit_C");
		return ptr;
	}


	void OnActivated();
	void OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_BlindBandit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
