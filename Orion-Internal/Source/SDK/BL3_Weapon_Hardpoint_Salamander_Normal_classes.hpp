#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Salamander_Normal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C
// 0x0058 (0x0BD0 - 0x0B78)
class AWeapon_Hardpoint_Salamander_Normal_C : public AWeapon_Hardpoint_Salamander_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B78(0x0008) (Transient, DuplicateTransient)
	class UWeaponFireBeamComponent*                    WeaponFireBeam;                                           // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAttributeEffectData                        AttEffect_Mod1_EffectDamage;                              // 0x0B88(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C");
		return ptr;
	}


	void SetupMod1();
	void UserConstructionScript();
	void K2_InitializeMod();
	void ExecuteUbergraph_Weapon_Hardpoint_Salamander_Normal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
