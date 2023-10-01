#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_SirenWings_Troy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_SirenWings_Troy.BPAnim_SirenWings_Troy_C
// 0x0D53 (0x1843 - 0x0AF0)
class UBPAnim_SirenWings_Troy_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E397202A459756F4CEF2818F93F5E7CD;      // 0x0AF8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4BB4378C4A5B738B895DA09D746E564C;      // 0x0B40(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D6C1B0C54A4DE401BC829F8414FDE4E5;      // 0x0BF0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6EF8ECA5454182AA7CDBC090113492EC;      // 0x0CA0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DBE0D6584351125307EFA389E19C9E2F;      // 0x0D50(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C876F91D4CCEF8F26E4FE18F4D41EE3C;// 0x0E00(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5CB6A9174461527C2A39EF90C199DF1E;// 0x0E50(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A72B7C6342A560096DB60E9A897CD1E4;// 0x0EA0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D44D3854F452276A9E72D8BFD25C1F1;// 0x0EF0(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B65F484465B1C57F1F470A157EBB892;// 0x0F40(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_585862F24816E6A449467EB4CD66BCAB;// 0x0F90(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_101321A94B270F0DDAA219BA68EEB288;// 0x0FE0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A3B624244CEA19C1DBBCCA32180754C;// 0x1030(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6DF0DBB046E438FDE2FB32931BE9637A;// 0x1120(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95AE77C7458A396EA64AD8BC3FC79F64;// 0x1168(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_33DC1F89496EC9AC5BEE9580C16D542E;// 0x1258(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87421FF0487E56B4DCC187AF0058F68F;// 0x12A0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CB7A245A4FECE0835DFEA6A16883F44D;// 0x1390(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0577EFE54C8C48ADC0EB8382FB8127A6;// 0x13D8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3D7324B340FB18D894FD97B87E8804A1;// 0x1538(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB6B7084483AD16EE05A15A1E937B787;// 0x1580(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_76975B094AD812CAE683DDB6BA036D35;// 0x1670(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_92BF539C42C16C001B477DAE0834CA6F;// 0x16B8(0x0188)
	bool                                               InPassive;                                                // 0x1840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCombat;                                                 // 0x1841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyWeapon;                                              // 0x1842(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SirenWings_Troy.BPAnim_SirenWings_Troy_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SirenWings_Troy_AnimGraphNode_TransitionResult_101321A94B270F0DDAA219BA68EEB288();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SirenWings_Troy_AnimGraphNode_BlendSpacePlayer_0577EFE54C8C48ADC0EB8382FB8127A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SirenWings_Troy_AnimGraphNode_TransitionResult_7B65F484465B1C57F1F470A157EBB892();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SirenWings_Troy_AnimGraphNode_TransitionResult_C876F91D4CCEF8F26E4FE18F4D41EE3C();
	void OnStanceChanged();
	void ExecuteUbergraph_BPAnim_SirenWings_Troy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
