#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Salamander_Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C
// 0x0015 (0x0B8D - 0x0B78)
class AWeapon_Hardpoint_Salamander_Projectile_C : public AWeapon_Hardpoint_Salamander_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B78(0x0008) (Transient, DuplicateTransient)
	class UBPWeaponFireProjectile_Salamander_C*        BPWeaponFireProjectile_Salamander;                        // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                nCounter;                                                 // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReadyForSplat;                                           // 0x0B8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_Salamander_Projectile.Weapon_Hardpoint_Salamander_Projectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_InitializeMod();
	void BndEvt__BPWeaponFireProjectile_Salamander_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Projectile();
	void ExecuteUbergraph_Weapon_Hardpoint_Salamander_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
