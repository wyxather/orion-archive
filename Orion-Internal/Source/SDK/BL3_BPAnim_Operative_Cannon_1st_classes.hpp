#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Operative_Cannon_1st_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Operative_Cannon_1st.BPAnim_Operative_Cannon_1st_C
// 0x0350 (0x0890 - 0x0540)
class UBPAnim_Operative_Cannon_1st_C : public UGbxAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_27823D5748097C1658FBDF88C291855F;      // 0x0548(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2335328749219AEA5080F482061C2275;// 0x0590(0x00F0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5FC1FBF04A3136AF88E3E1BC50374F2C;      // 0x0680(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_314CF21048986FE5F836F984C2CAFA16;      // 0x0730(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B53155E14D1F6291516D318AB9488040;      // 0x07E0(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Operative_Cannon_1st.BPAnim_Operative_Cannon_1st_C");
		return ptr;
	}


	void ExecuteUbergraph_BPAnim_Operative_Cannon_1st(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
