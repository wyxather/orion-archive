#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_HuntingRifle_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_HuntingRifle_AnimsBP.Weapon_HuntingRifle_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_HuntingRifle_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F55CB7574D5E7F800D8AA884F56F1904;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_2A7915B64A279F53B9F44C88B5C09491;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_HuntingRifle_AnimsBP.Weapon_HuntingRifle_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_HuntingRifle_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
