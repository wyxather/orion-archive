#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CineOnly_Troy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CineOnly_Troy.BPAnim_CineOnly_Troy_C
// 0x1E98 (0x22D8 - 0x0440)
class UBPAnim_CineOnly_Troy_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_62DE2CC744727BC079982CABC7D6A7C3;      // 0x0448(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CC246FA84DC7EB340AB8449702B13434;// 0x0490(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E794822546D24E68FAD005821CBF0DC9;      // 0x04D0(0x00B0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B15A4A724205BA9454459C9E723C043F; // 0x0580(0x0290)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4462247A4DBBBC57C14319AAE9937C84;// 0x0810(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0858(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8B9B8F9F4188D97E572C55AFDF3E8480;      // 0x0860(0x00B0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_7563D2E149E852C06FF937911B4A1598; // 0x0910(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6DE4D0174B951C07565CCD96E42918A8; // 0x0BA0(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_79DB2886431F247C2A68478C138D3B4B; // 0x0E30(0x0290)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6A5847AC43D32C75C28DA5B14F02F59E;// 0x10C0(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1108(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_522672B14AA60FC3577AD2AA2B876F1E;      // 0x1110(0x00B0)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_BF8DAB3F4D5934877E8CEAA02FBBF811;// 0x11C0(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CA4D64CC4E8D194FD77404BBA3493D89;// 0x1228(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D34CC3AD4D65AB8AE59B80A3D15402A5;// 0x1308(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_40BC63D14C76118E2774A9A4E8084EDA;// 0x1358(0x00E0)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_9A8F98B443F2AE1CB41696A8C376CFE4;// 0x1438(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B8630C934DACAED075B33AAC8236F963;// 0x1578(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_570EA61147D452904C010893F1C684CD;// 0x15C8(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_94965F664D520D0156513B9425CC51DA;// 0x1618(0x0140)
	struct FAnimNode_BlendFaceFXAnimation              AnimGraphNode_BlendFaceFXAnimation_8FA7B8094D48F4E6DD366E9D68C9334C;// 0x1758(0x0088)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B6EF3D5842BA7BA78F0CB082323D75A5;// 0x17E0(0x00E0)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_807AB23D49CAC27774305E8F7F4D97B6;// 0x18C0(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7DF6145942B60374E41384B64BE9BB5B;// 0x1A00(0x0050)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0DE6CFE84C123BF228B607A96BCBAFA0;// 0x1A50(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8B4D1ECE4981E2A13B24BB82A4FFD214;// 0x1A88(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CFE160694F4B3C7771C361BEFEC9E62A;// 0x1AC0(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_34651AC44A641A01D88B98B7328B1DA7;// 0x1AF8(0x0048)
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_90D3D754422CD78DE53935ACBB37D3D1;// 0x1B40(0x0730)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BAF8EDAF4C85A7226DF470B20F0E2A45;// 0x2270(0x0048)
	float                                              UseFaceFX;                                                // 0x22B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpperFaceOverride;                                        // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowerFaceOverride;                                        // 0x22C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FaceAnim;                                                 // 0x22C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyOnly;                                                 // 0x22C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandIKOverride;                                           // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootIKOverride;                                           // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardDynamics;                                          // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CineOnly_Troy.BPAnim_CineOnly_Troy_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_GbxAnimGraphNode_ForwardDynamics_90D3D754422CD78DE53935ACBB37D3D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_AnimGraphNode_BlendFaceFXAnimation_8FA7B8094D48F4E6DD366E9D68C9334C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_AnimGraphNode_LayeredBoneSetBlend_94965F664D520D0156513B9425CC51DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_AnimGraphNode_LayeredBoneSetBlend_9A8F98B443F2AE1CB41696A8C376CFE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_AnimGraphNode_TwoBoneIK_79DB2886431F247C2A68478C138D3B4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_AnimGraphNode_TwoBoneIK_6DE4D0174B951C07565CCD96E42918A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_AnimGraphNode_LayeredBoneSetBlend_807AB23D49CAC27774305E8F7F4D97B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_AnimGraphNode_TwoBoneIK_7563D2E149E852C06FF937911B4A1598();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Troy_AnimGraphNode_TwoBoneIK_B15A4A724205BA9454459C9E723C043F();
	void ExecuteUbergraph_BPAnim_CineOnly_Troy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
