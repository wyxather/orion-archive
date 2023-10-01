#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Ellie_Cine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Ellie_Cine.BPAnim_Ellie_Cine_C
// 0x0A84 (0x0EC4 - 0x0440)
class UBPAnim_Ellie_Cine_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_64E2622F49FA26D2143213823063915F;      // 0x0448(0x0048)
	struct FAnimNode_BlendFaceFXAnimation              AnimGraphNode_BlendFaceFXAnimation_86CC55F847CF70E6B163D2B2570E0362;// 0x0490(0x0088)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F51EF1E6489AF591C8D129A1F25819D5;// 0x0518(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F39C732C4645958C9B95E28BC320BD26;      // 0x0560(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A5850C80458DF395E49DCB9B9425375E;// 0x0610(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DA94F147438E09E2F92FD3B9E776482D;// 0x0658(0x0120)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_02960C7341BDCCEFADAF869C3AE7BFA3;// 0x0778(0x0118)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_04750C3E420B18E144C016963A608E0C;      // 0x0890(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0741DE4147637B33E6C9899E1A5E98A0;// 0x0940(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9F0F57394AB29CD54DCFCE8D7B5EAACB;// 0x0A20(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_43562E0D4680FDBAC6CE02A963C4DB47;// 0x0A70(0x0120)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A5807449489684C25F4B3EB3BD9645C3;// 0x0B90(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_06407AD2403B0F43D20337847B2E7470;// 0x0BE0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60DA686C4931F55F80D210ADDDFB952C;// 0x0CC0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_607A27704F708BCE4632F69E25CD545E;// 0x0D10(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F76AD514B573C785B4A958762CE05B6;// 0x0D60(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_503E038F4794BD68FC8598BAC8DBF7D7;// 0x0DB0(0x00F0)
	float                                              Eye_Brow_Alpha;                                           // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FaceFX_Alpha;                                             // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddPose_Alpha;                                            // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0EAC(0x0004) MISSED OFFSET
	class ABPCine_Actor_Ellie_C*                       BPCine_Actor;                                             // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LowerFace_Alpha;                                          // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FaceFX_BlendWeight;                                       // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta_Time;                                               // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Ellie_Cine.BPAnim_Ellie_Cine_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Ellie_Cine_AnimGraphNode_LayeredBoneBlend_DA94F147438E09E2F92FD3B9E776482D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Ellie_Cine_AnimGraphNode_ApplyAdditive_02960C7341BDCCEFADAF869C3AE7BFA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Ellie_Cine_AnimGraphNode_LayeredBoneBlend_43562E0D4680FDBAC6CE02A963C4DB47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Ellie_Cine_AnimGraphNode_BlendFaceFXAnimation_86CC55F847CF70E6B163D2B2570E0362();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void Update_FaceFX_BlendWeight();
	void ExecuteUbergraph_BPAnim_Ellie_Cine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
