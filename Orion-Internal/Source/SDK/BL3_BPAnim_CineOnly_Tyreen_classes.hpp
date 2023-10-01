#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CineOnly_Tyreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CineOnly_Tyreen.BPAnim_CineOnly_Tyreen_C
// 0x25D8 (0x2A18 - 0x0440)
class UBPAnim_CineOnly_Tyreen_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_56629EA2499AB6523CCC5383A42BFA54;      // 0x0448(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A0CEDEEB41FDA14835D4AA8F060C461E;// 0x0490(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F39E23E2431CE02FD7B84EBC8A5BB4B5;      // 0x04D0(0x00B0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6B9AFAAC4642C28C3E6BEA91EC95BAA5; // 0x0580(0x0290)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E2D13C7D4C74FB70F1E81E9EAED20FE5;// 0x0810(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0858(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_34A95E164293DB478E7DB8AA39224F88;      // 0x0860(0x00B0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_44A6A88246D8213C0118B79B039CB5B7; // 0x0910(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_CF4F4511438CB2C3A326B7BBF5C778CA; // 0x0BA0(0x0290)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_7BF85CD54AF398BFE388FAA154C0AA49; // 0x0E30(0x0290)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1D4AF647420BAAC4649BEDB83ECBE90D;// 0x10C0(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1108(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0217B4BB43264BA5978F809225576504;      // 0x1110(0x00B0)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_E4FAA18746B973FB8203ECB839756E3E;// 0x11C0(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_95A60A5A4B495305D3BA858454227AC6;// 0x1228(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FE4D8A1A4FF850A2BBDF28B8F58FB040;// 0x1308(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1329031B43B2F52C17E2708AE4F713B1;// 0x1358(0x00E0)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_9D9E5A8D40D825E0DECA91A4F22794E6;// 0x1438(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_637B98EF4E539EFB8666D286D986FA9E;// 0x1578(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9C5DF2F14F3693D28A9366952DC6E7AB;// 0x15C8(0x0050)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_26D2E03F43539EFA2F2039A5F71338E2;// 0x1618(0x0140)
	struct FAnimNode_BlendFaceFXAnimation              AnimGraphNode_BlendFaceFXAnimation_5280469C4A82B11B877EFB87F1F08C6C;// 0x1758(0x0088)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2722C44D473D3782C0377AB0252D0E76;// 0x17E0(0x00E0)
	struct FAnimNode_LayeredBoneSetBlend               AnimGraphNode_LayeredBoneSetBlend_7EDBD96E4A633E20F0EA9690336205EF;// 0x18C0(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8B82465A430EBB8212108AB45693268D;// 0x1A00(0x0050)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_353F5F224A4CCC878E8337A3D4615927;// 0x1A50(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F6BCF5F047B1FB7F727BFEB586DBBDEF;// 0x1A88(0x0038)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2B0623CE44279E2A5A1E28A407362809;// 0x1AC0(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4D8EDB9D4FA727B5EAC055A35E4E594C;// 0x1AF8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E143CD904E8481133D247A98AC106739;// 0x1B40(0x0048)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1B88(0x0008) MISSED OFFSET
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_39A9C1F744C84EE179B0488D8361B094;// 0x1B90(0x0730)
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_D8920004440A422BCC7699857DC6693D;// 0x22C0(0x0730)
	float                                              UseFaceFX;                                                // 0x29F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpperFaceOverride;                                        // 0x29F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowerFaceOverride;                                        // 0x29F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FaceAnim;                                                 // 0x29FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandIKOverride;                                           // 0x2A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyOnly;                                                 // 0x2A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootIKOverride;                                           // 0x2A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoatDynamics;                                             // 0x2A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HairDynamics;                                             // 0x2A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllDynamics;                                              // 0x2A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CineOnly_Tyreen.BPAnim_CineOnly_Tyreen_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_GbxAnimGraphNode_ForwardDynamics_D8920004440A422BCC7699857DC6693D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_AnimGraphNode_BlendFaceFXAnimation_5280469C4A82B11B877EFB87F1F08C6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_AnimGraphNode_LayeredBoneSetBlend_26D2E03F43539EFA2F2039A5F71338E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_GbxAnimGraphNode_ForwardDynamics_39A9C1F744C84EE179B0488D8361B094();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_AnimGraphNode_LayeredBoneSetBlend_9D9E5A8D40D825E0DECA91A4F22794E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_AnimGraphNode_TwoBoneIK_7BF85CD54AF398BFE388FAA154C0AA49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_AnimGraphNode_TwoBoneIK_CF4F4511438CB2C3A326B7BBF5C778CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_AnimGraphNode_TwoBoneIK_44A6A88246D8213C0118B79B039CB5B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_AnimGraphNode_LayeredBoneSetBlend_7EDBD96E4A633E20F0EA9690336205EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_CineOnly_Tyreen_AnimGraphNode_TwoBoneIK_6B9AFAAC4642C28C3E6BEA91EC95BAA5();
	void ExecuteUbergraph_BPAnim_CineOnly_Tyreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
