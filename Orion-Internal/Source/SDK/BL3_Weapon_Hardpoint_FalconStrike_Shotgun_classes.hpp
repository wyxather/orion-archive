#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_FalconStrike_Shotgun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C
// 0x0010 (0x0B00 - 0x0AF0)
class AWeapon_Hardpoint_FalconStrike_Shotgun_C : public AWeapon_Hardpoint_FalconStrike_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	class UWeaponSingleFeedReloadComponent*            WeaponSingleFeedReload;                                   // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire();
	void ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
