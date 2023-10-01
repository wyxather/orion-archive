#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_RiftWalker_Clone_Female_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_RiftWalker_Clone_Female_AnimBP.Character_RiftWalker_Clone_Female_AnimBP_C
// 0x0480 (0x0F30 - 0x0AB0)
class UCharacter_RiftWalker_Clone_Female_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9CFCA16B428D07F76250E5A44662A22B;      // 0x0AB8(0x0020)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_00FF54554E7B97B1C88C95B34EEB6732;// 0x0AD8(0x0098)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_939339FB4B93D8E3F376CF8A06AD3B0D;// 0x0B70(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_RiftWalker_Clone_Female_AnimBP.Character_RiftWalker_Clone_Female_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_RiftWalker_Clone_Female_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
