#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Book_AnimBP2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Interactive_Book_AnimBP2.Interactive_Book_AnimBP2_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UInteractive_Book_AnimBP2_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0BBCA094E6AD3DFF662D4A52C853889;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_7FC34DA14CD27360F29C3AB2861D01BA;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Interactive_Book_AnimBP2.Interactive_Book_AnimBP2_C");
		return ptr;
	}


	void ExecuteUbergraph_Interactive_Book_AnimBP2(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
