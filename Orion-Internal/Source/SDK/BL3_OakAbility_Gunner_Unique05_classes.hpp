#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_Unique05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C
// 0x0038 (0x0130 - 0x00F8)
class UOakAbility_Gunner_Unique05_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Gunner_Unique05;// 0x0100(0x0028)
	class ABPClass_ClassMod_C*                         BaseClassModLmao;                                         // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Gunner_Unique05.OakAbility_Gunner_Unique05_C");
		return ptr;
	}


	void OnActivated();
	void OnWeaponStartReloaded_UniqueClassMod05(class AWeapon* EventWeapon, bool bAutoReload);
	void DontNeedNoAbilityTimers();
	void ExecuteUbergraph_OakAbility_Gunner_Unique05(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
