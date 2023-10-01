#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_BearFist_Mod2Jackhammer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C
// 0x0010 (0x0AC0 - 0x0AB0)
class AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C : public AWeaponType_Hardpoints_BearFist_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (Transient, DuplicateTransient)
	class UIronBearWeaponUseComponent_Jackhammer*      IronBearWeaponUseComponent_Jackhammer;                    // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C");
		return ptr;
	}


	void UserConstructionScript();
	void CausedDamage_BearFist(class AActor** DamageInstigator, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AActor** DamagedActor, struct FCausedDamageDetails* Details);
	void K2_InitializeMod();
	void ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Mod2Jackhammer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
