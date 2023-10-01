#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_HardType_FalconStrike_Targeting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C
// 0x0018 (0x0B08 - 0x0AF0)
class AWeapon_HardType_FalconStrike_Targeting_C : public AWeapon_Hardpoint_FalconStrike_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	class UWeaponSingleFeedReloadComponent*            WeaponSingleFeedReload;                                   // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFalconStrikeTargetingComponent*             FalconStrikeTargeting;                                    // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C");
		return ptr;
	}


	void PlayFeedback();
	void UserConstructionScript();
	void BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting(class AActor* Target);
	void BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire();
	void ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
