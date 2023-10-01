#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Wasteland_Ruin_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Wasteland_Ruin_AnimsBP.Weapon_Wasteland_Ruin_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_Wasteland_Ruin_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E058267647D77E52795722B1A9EA5F6F;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_486D810D48A66D4A947B8CB7E07A29B7;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Wasteland_Ruin_AnimsBP.Weapon_Wasteland_Ruin_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Wasteland_Ruin_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
