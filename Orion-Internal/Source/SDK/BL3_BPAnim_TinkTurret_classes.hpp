#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_TinkTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_TinkTurret.BPAnim_TinkTurret_C
// 0x0F40 (0x1A30 - 0x0AF0)
class UBPAnim_TinkTurret_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D5AA54114D15556A4C20A8ADEAF5AFF7;      // 0x0AF8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_461118B24E20DE0321453AA7DFB95705;      // 0x0B40(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B2B6DB4F432BD9A67D18CBB64339AFE2;      // 0x0BF0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7D01CC484EE67A757BEFE3BBA8A4D2AE;// 0x0CA0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_039FFA2D4C1486728F39548CB4D0C713;// 0x0CE8(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_9ACFF66C487F128D9BE10FB478D79613;// 0x0D30(0x00F8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E28(0x0008) MISSED OFFSET
	struct FGbxAnimNode_LookAt                         GbxAnimGraphNode_LookAt_ECB760BF4A3B3798946C168A3F52AD1E; // 0x0E30(0x02D0)
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_AFEDEED441B304A4BA7E609537E70589;// 0x1100(0x0730)
	struct FGbxAnimNode_BlendListByFloatComparison     GbxAnimGraphNode_BlendListByFloatComparison_ED9C22B748BB861E2698EBAD8FE108AA;// 0x1830(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F94C8204A0B937AE3E09FB55A734144;// 0x1908(0x00F0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_ADC2B5E547AA1CE165F1A7B9E8983D53;// 0x19F8(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_TinkTurret.BPAnim_TinkTurret_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_TinkTurret_GbxAnimGraphNode_BlendListByFloatComparison_ED9C22B748BB861E2698EBAD8FE108AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_TinkTurret_GbxAnimGraphNode_LookAt_ECB760BF4A3B3798946C168A3F52AD1E();
	void ExecuteUbergraph_BPAnim_TinkTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
