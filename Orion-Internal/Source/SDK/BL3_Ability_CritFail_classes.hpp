#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CritFail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_CritFail.Ability_CritFail_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_CritFail_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	float                                              DropChance;                                               // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_CritFail;// 0x0108(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CritFail.Ability_CritFail_C");
		return ptr;
	}


	void OnActivated();
	void ReloadStartedEvent(class AWeapon* EventWeapon, bool bAutoReload);
	void ExecuteUbergraph_Ability_CritFail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
