#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_Hound_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Wasteland_Hound_AnimsBP.Character_Wasteland_Hound_AnimsBP_C
// 0x1E78 (0x2958 - 0x0AE0)
class UCharacter_Wasteland_Hound_AnimsBP_C : public URemnantAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0E4D0B354E7C3A52D9C50292DDD62F46;// 0x0AE8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F0A5F61449FD9BB859B25BA23E1BBE90;// 0x0B10(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_161D0DD449B2ECEE96C751A244DDC257;// 0x0BC8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F120FD9844093B771B87EB9FD9CCB4CA;// 0x0BF0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F33085B0433E01E5AE620A901F7426B0;// 0x0C18(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0D76688D46764F8E9CFDA0BFF36083CF;// 0x0DA0(0x00A0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_BB2EA3AA48E9C9E51B0FF6974E0031F5;// 0x0E40(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_6EFFF7924E8DDE7A6FBE77AFEF1370C6;// 0x0E88(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B286DE6D4BED8561372F25A483A581B9;// 0x0EF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CBE4C8A94F8170302C6E139513F70C5A;// 0x0F18(0x0028)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_B147880946966D9B464841A059B28956;// 0x0F40(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5E5218074091CA585C977C988445A2CC;// 0x1008(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A28BE8F4490819B5BA4E7CBD0978E4CE;// 0x10E8(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_625670224172345C2A43A0A28917EDFC;// 0x11C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F01CFF414368D42F347BDAB9A71E540C;// 0x11F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DADDD22B4B3E5C76CEC81DB13744C0E4;// 0x1218(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39566D8F4991F06A87C987A8E174886D;// 0x1240(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31735F23410073D5031EAA8D26270A50;// 0x1268(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2D00EED9409FCB4B705E079AA01B50C9;// 0x1348(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D40F82F4B465E9D0441AA8874DFBBF7;// 0x1368(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EB1938D84189A22D600311A812EF03C4;// 0x13E0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2D53D7A543E8FC8DFDD3EAB5DB0EE45C;// 0x1400(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7C2756124A830A90CEAABE82429CDACC;// 0x1420(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_55F7A40D415D69DC0F28D7B75EB8D149;// 0x14D0(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_74FD2C744EA4B6EFAB13B7BBB0419175;// 0x1588(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7CE6B88E4EF13A38DCBFA6B6ADFA30D6;      // 0x1640(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2D7DD23649129F00B59009B4F7A4C980;      // 0x1688(0x0048)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_8C37F1BB4F078CE3AF396884E67EE96F;// 0x16D0(0x03C0)
	struct FAnimNode_RandomBlend                       AnimGraphNode_RandomBlend_B88B25A44847A6180E0670BDA8331B6B;// 0x1A90(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91E2C44A4E5BC5EAF3C5B5AC07089B06;// 0x1B70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFA0654241095B51ACF3289DB95294B0;// 0x1B98(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EF25C30245FCB190D037BD9A96E4C25D;// 0x1BC0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_584B3A8940199C4CC937D28443DB2C7D;// 0x1CA0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B014BCD4995B7BEC7C45B93267E7AC9;// 0x1CC0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5CD0DA9449373E7CBE7BD0A9BE1CC6B4;// 0x1D38(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_114531CA4A31F302A7BB81894796607F;// 0x1D58(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4C2CC92A423D04084827859791138AC9;// 0x1D78(0x00B0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1E28(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_FF9BB6AB4C1D2B71E0D3BC88B7524A62; // 0x1E30(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B6AF68A94916AABA395059A17D3C97FA;// 0x2380(0x0020)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_8EEB4B584F0DF1B3E810EEAC6609CEE7;// 0x23A0(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6E9180E44FAA402F3E4E0C8943A425F8;// 0x2468(0x00E0)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_8E4F6CD14D4C9565BF76F8B996F1515A;// 0x2548(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16C60EFA4AE6FA8A6A8DD8967F22DC56;// 0x2610(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60E00DD440C541E1DAF13BB7E13EC244;// 0x2638(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E1273A64A0B7A6623E2A6888DF2C4D9;// 0x2660(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94B12E5A4FF6560640E9A2A043250451;// 0x2688(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_78382B4A40738422FFD02A90E742632A;// 0x26B0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C2F59B074FE020287D02468CFA2FF132;// 0x2790(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_141B73834AC2A72C2EAD638287225C3F;// 0x27B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1DAB0CE54DDDCFCBBB3E2E9B2E1D609F;// 0x2828(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1739BEDA430EF745F64B0285C052502E;// 0x2848(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E76CC49C46E3512672118389C16D8FA9;// 0x2868(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_5B74822C42DC141C2DAA5A92A9581DFE;      // 0x2918(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6791C0E04FAB13CE02719C8C2AE2E176;// 0x2938(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Wasteland_Hound_AnimsBP.Character_Wasteland_Hound_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Wasteland_Hound_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
