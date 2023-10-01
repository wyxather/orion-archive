#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CineOnly_Punk_Male_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CineOnly_Punk_Male.BPAnim_CineOnly_Punk_Male_C
// 0x0CD8 (0x1118 - 0x0440)
class UBPAnim_CineOnly_Punk_Male_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C8B039974ACFEF3475BD1DBB0F298674;      // 0x0448(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_120C66D44742E34E859B6E8345798EC8;      // 0x0490(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4DDF29A4466E3F919E02649AAE5CF4B1;// 0x0540(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6A13F5E042B1411536D779BAA21A3A93; // 0x0590(0x0290)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A00DDD814239CD5A5EE0379CB57E85B2;// 0x0820(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0868(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9D77C2874F6699FF9FCF24BB1D12150B;      // 0x0870(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B4241D9B4895DBC35B9BC6A4400DB82A;// 0x0920(0x0038)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0958(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_0656380E42B5734800C7BCB761B1EB7F; // 0x0960(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6788776A4ED05BF4F0D3F5973A262D24; // 0x0BF0(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_07AEB5244F037E66CEB985BB3D2D5A97; // 0x0E80(0x0290)
	float                                              HandIKOverride;                                           // 0x1110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootIKOverride;                                           // 0x1114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CineOnly_Punk_Male.BPAnim_CineOnly_Punk_Male_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Punk_Male_AnimGraphNode_TwoBoneIK_07AEB5244F037E66CEB985BB3D2D5A97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Punk_Male_AnimGraphNode_TwoBoneIK_6788776A4ED05BF4F0D3F5973A262D24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Punk_Male_AnimGraphNode_TwoBoneIK_0656380E42B5734800C7BCB761B1EB7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Punk_Male_AnimGraphNode_TwoBoneIK_6A13F5E042B1411536D779BAA21A3A93();
	void ExecuteUbergraph_BPAnim_CineOnly_Punk_Male(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
