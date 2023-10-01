#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPVehicleAnim_Outrunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C
// 0x2210 (0x3D50 - 0x1B40)
class UBPVehicleAnim_Outrunner_C : public UOutrunnerVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B40(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E08078A74E8A3CB2C43D689F42A3313A;      // 0x1B48(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A1E705CA45011000C862B984237259F5;// 0x1B90(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1BD8(0x0008) MISSED OFFSET
	struct FAnimNode_OutrunnerHandler                  AnimGraphNode_OutrunnerHandler_34882C54402D243138FD04B5FFEBFEDE;// 0x1BE0(0x1840)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5758A8CA4BC1C1F3DFA43AA40B33E041;// 0x3420(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8D06C35C496F2F1A55824386556A6839;// 0x3458(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_66355985447C34E8BD5CBE90AA3625BE;// 0x34A0(0x0120)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3E8D854146F1372DB9074F815CB42FE6;      // 0x35C0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_32A22AA44FEACA23591AF0814BC25AA8;// 0x3670(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A38774884F8DC81B733BFBBAE3B26C40;// 0x36C0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_56D5478E4387ADE1B84D09980B374BBF;      // 0x3710(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_703898EC4664374070DE7FAC0B4BA207;// 0x37C0(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_85FF8810421D722234D51CABD3A879D4;// 0x38E0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_66CB14C448AEBF2D061226A3A56B2A1A;// 0x39C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78AA2C174B6B9A45CF2B57AEE3CCEF9C;// 0x3AA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21B51ADE435CE7EA1712BAB951CB29F4;// 0x3AF0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B84A824A48E0B364B36D54ABB6F0E532;      // 0x3B40(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9A9E1EA5413CE997D9B243AF265153C9;      // 0x3BF0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6ABCEFAC4A73C17DDD4941BAB25B30BC;      // 0x3CA0(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPVehicleAnim_Outrunner.BPVehicleAnim_Outrunner_C");
		return ptr;
	}


	void Sinusoidal(float Time, float Offset, float Frequency, float Amplitude, float* Value);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_703898EC4664374070DE7FAC0B4BA207();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPVehicleAnim_Outrunner_AnimGraphNode_TwoWayBlend_66355985447C34E8BD5CBE90AA3625BE();
	void ExecuteUbergraph_BPVehicleAnim_Outrunner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
