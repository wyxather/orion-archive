#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Wraith_Screamer_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Root_Wraith_Screamer_AnimsBP.Character_Root_Wraith_Screamer_AnimsBP_C
// 0x0F88 (0x1A68 - 0x0AE0)
class UCharacter_Root_Wraith_Screamer_AnimsBP_C : public URemnantAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2272FDF9459201C78DE91092FE2FCF4F;      // 0x0AE8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B08(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4E296DAA4AE79047433C2AAF715D0C03;// 0x0B10(0x0310)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2F9E3C754ED035FEA0E2D6AE2B613DB3;// 0x0E20(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A58B30174E0837AB0F4637B290402E0E;// 0x0E40(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ADF3BBAC455B6E4794A95E8501E6E5CD;// 0x0E60(0x0310)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_98D0826F44ED484FDBD5DEB02574DC9B;// 0x1170(0x0188)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_F516401E448FF7248919119718FC201A;// 0x12F8(0x03C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BA5570204ADEC283511936969089B16B;      // 0x16B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E5F2E5A642BF2F0E916A508AAF10B17D;// 0x1700(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CFD34F9F4C1679E45BB5859DE9A6001B;// 0x1778(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2EB13108459D86D82C5DAE866B82A562;// 0x17A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A8941CB476D0675CDCD29975D4C2CFF;// 0x17C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE71BA1E455CF893B4BE4BAAEC2A6E69;// 0x17F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_787651CA4DA59D5E9C1E629E15D51D95;// 0x1818(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA99D1534F88222BFDBC57B24F8A3E28;// 0x1840(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AD46B944444D0483119C21A177AC954A;// 0x18B8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD4527774BB6760F87218084E5F225B3;// 0x18D8(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B77F727841BDC975972D96BCBD4DE607;// 0x1900(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33192C5A42D4D5A9AEBFFFA51C556147;// 0x1920(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3CD8F0F34A300B305079E788CB7A84FF;// 0x1998(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5DDFAA7D4C7CEA9F5DE4CF859E9912A7;// 0x19B8(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Root_Wraith_Screamer_AnimsBP.Character_Root_Wraith_Screamer_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Root_Wraith_Screamer_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
