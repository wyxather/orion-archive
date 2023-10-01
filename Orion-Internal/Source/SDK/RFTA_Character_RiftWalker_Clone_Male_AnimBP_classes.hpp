#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_RiftWalker_Clone_Male_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_RiftWalker_Clone_Male_AnimBP.Character_RiftWalker_Clone_Male_AnimBP_C
// 0x0480 (0x0F30 - 0x0AB0)
class UCharacter_RiftWalker_Clone_Male_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_89A5DAF0453751CD3A06BE920724A9E7;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_64777824422A420A821B498EC52469F2;// 0x0AD8(0x03C0)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_3433BE9541DB07612B0B28BDC3F44C22;// 0x0E98(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_RiftWalker_Clone_Male_AnimBP.Character_RiftWalker_Clone_Male_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_RiftWalker_Clone_Male_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
