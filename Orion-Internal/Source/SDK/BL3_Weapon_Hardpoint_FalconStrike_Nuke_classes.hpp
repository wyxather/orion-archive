#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_FalconStrike_Nuke_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C
// 0x0008 (0x0AF8 - 0x0AF0)
class AWeapon_Hardpoint_FalconStrike_Nuke_C : public AWeapon_Hardpoint_FalconStrike_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C");
		return ptr;
	}


	void UserConstructionScript();
	void InitAnimation(class UBPAnim_IronBear_FalconStrike_C** Anim);
	void K2_Initialize();
	void ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
