#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Swamp_ElfQueen_ExplosiveBug_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Swamp_ElfQueen_ExplosiveBug_AnimBP.Character_Swamp_ElfQueen_ExplosiveBug_AnimBP_C
// 0x0688 (0x1138 - 0x0AB0)
class UCharacter_Swamp_ElfQueen_ExplosiveBug_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6171BF9348CB8CF68F67E4983CD88973;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_41AD46E24F32FE0677B23B84500FFE97;// 0x0AD8(0x03C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F11676E544ADCCB0289BE38811B82DDE;// 0x0E98(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C93BFB3A4C0FF1E24583C89FDB4873F7;// 0x0F78(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21C2B6474208A52059EDFA9A82D12D25;// 0x1058(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Swamp_ElfQueen_ExplosiveBug_AnimBP.Character_Swamp_ElfQueen_ExplosiveBug_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Swamp_ElfQueen_ExplosiveBug_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
