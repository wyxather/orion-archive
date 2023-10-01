#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Submachinegun_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Submachinegun_AnimsBP.Weapon_Submachinegun_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_Submachinegun_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_64554F8748798F5915C95580802B0A24;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_BC28973A4C077077818EF4B57B5F857F;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Submachinegun_AnimsBP.Weapon_Submachinegun_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Submachinegun_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
