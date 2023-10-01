#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wallace_Sims_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Wallace_Sims_AnimsBP.Character_Wallace_Sims_AnimsBP_C
// 0x2939 (0x33E9 - 0x0AB0)
class UCharacter_Wallace_Sims_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_68515E214261E163C0B2D28F6AFD2B3A;      // 0x0AB8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AD8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F3488954EED407861C42286DB096E9E;// 0x0AE0(0x0310)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_346480AD4CB52F163070868F4A0D8C52;// 0x0DF0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_559D8150495CE4AED90C1DBF8EEBF8E3;// 0x0E10(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FA4E86414AE10AEB088BE5BE66DC3CEA;// 0x0E30(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16C9835D43EB4444023D91BB8FA0E6BA;// 0x1140(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_607A4EDA4F51FEA0D688DB8291852D6D;// 0x1450(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2718497843A6E1492A7395AFAA4B6C8F;// 0x1760(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C10240134FEADFE4950346ADA436867C;// 0x1A70(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0A7F58E742D6DCA8B105E98F628F23F4;// 0x1D80(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F8FDAAB849F6591971E2B7A3D3423AA9;// 0x2090(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B6D426874EBDA1BBA0244CA8EA7A9BFD;// 0x23A0(0x0310)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_87F2F64E4B4665770645E6BAFF4F9DAE;// 0x26B0(0x03C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_731BA1A54C6488D7D3368AA79B3655B8;// 0x2A70(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_580514234FA1640F967BD183C1A07C81;// 0x2B50(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9AC6D5C346A40834EDF88CAE5B20AF25;// 0x2C30(0x0188)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode_B7A1A5F244EDC695BAC45CBF4F17C9C1;// 0x2DB8(0x0088)
	struct FAnimNode_CurveSource                       AnimGraphNode_CurveSource_C4927A1F41DBED2C23DA0BA04213887F;// 0x2E40(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C255E614411F878E62AC7870C5E869C;// 0x2E80(0x0078)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_6EBE964B4E416AAE2802E2B36C1016EB;// 0x2EF8(0x00C8)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_7FCD57F0487F8A953BC8FD95EB3C923B;// 0x2FC0(0x0068)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_3FCCAB124F9E378474BD94BD5C8BE0F0;// 0x3028(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5DB672BD433530D0B33CCEA2965E72AD;      // 0x3090(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F846C97E48244CCCA4CE908C3605D23B;// 0x30D8(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E44F027344E93847AE10C09B20A20F49;// 0x3150(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_92AF7FF84D335663729E6F9EF2696BC2;// 0x3208(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65134E0D4185F8254004659FACF94538;// 0x3230(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DCE7F535455423311291B98EF85FB460;// 0x3258(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A52F34444D3D617DE4F34495D6FDB840;// 0x32F8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7301772443456B5D0282588C3567348B;// 0x3370(0x0078)
	bool                                               NoLookPoses;                                              // 0x33E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Wallace_Sims_AnimsBP.Character_Wallace_Sims_AnimsBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Character_Wallace_Sims_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
