#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_BearFist_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C
// 0x0028 (0x0240 - 0x0218)
class UAction_IronBear_BearFist_Base_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_IronBear*                      IronBear;                                                 // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class AOakWeapon_IronBearHardPoint*                Weapon;                                                   // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class UWeaponSlotData*                             WeaponSlotData;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UIronBearWeaponUseComponent_Jackhammer*      JackhammerUseComponent;                                   // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C");
		return ptr;
	}


	void NotifyUsed();
	void DoBearFistMeleeHit(bool NormalFireMode);
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_IronBear_BearFist_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
