#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Swamp_ElfQueen_Bug_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Swamp_ElfQueen_Bug_AnimBP.Character_Swamp_ElfQueen_Bug_AnimBP_C
// 0x04C8 (0x0F78 - 0x0AB0)
class UCharacter_Swamp_ElfQueen_Bug_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_760430F24DBBC5C3DC5A06AA4FE1C336;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_68DD827B4AD02BFE7B2BC4B7D115A9E1;// 0x0AD8(0x03C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1887D0D44E02DB2322E93B8FDC31790D;// 0x0E98(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Swamp_ElfQueen_Bug_AnimBP.Character_Swamp_ElfQueen_Bug_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
