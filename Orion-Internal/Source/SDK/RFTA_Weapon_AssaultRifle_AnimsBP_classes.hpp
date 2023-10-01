#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_AssaultRifle_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_AssaultRifle_AnimsBP.Weapon_AssaultRifle_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_AssaultRifle_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2881A75E4E37947A571EDA998AA02675;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_C8E77A654537D71E698AB796EC98BB23;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_AssaultRifle_AnimsBP.Weapon_AssaultRifle_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_AssaultRifle_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
