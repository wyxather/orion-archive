#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_VeryGoodBoy_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Wasteland_VeryGoodBoy_AnimsBP.Character_Wasteland_VeryGoodBoy_AnimsBP_C
// 0x1900 (0x23E0 - 0x0AE0)
class UCharacter_Wasteland_VeryGoodBoy_AnimsBP_C : public URemnantAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6AAE4D0B4B0DCDC3EC9EFAAE7AC59AE5;// 0x0AE8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3F6C7CEF480643B76269018909F6D065;// 0x0B10(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_36B9B4844A53F38971F2228A99B6CDEC;// 0x0BC8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_413E0BC046438F94F3D149AAEC0C7524;// 0x0BF0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_B71814B84BD65F500ED2889E70395EBA;// 0x0C18(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_96A098CF46BBD86F14FA9A80499A0A86;// 0x0DA0(0x00A0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_1A01E5A94BC07B2A620E7A8D61E35F95;// 0x0E40(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_C9730F9D4DC608665DF1C7974636D056;// 0x0E88(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BEBA093C4A3BFDEDC00B80ADEFD2A96C;// 0x0EF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BEBF458B471CCEEE6CD8B89A13D82F3E;// 0x0F18(0x0028)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_306FD1E44C99656D652347A10FC12EB4;// 0x0F40(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_77EAF81A4BDAAAB2CA08B38D74180C11;// 0x1008(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_99C383A5427A263C57AB8FBF9099391C;// 0x10E8(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FC9096A249E63129E51014BF93C58BC4;// 0x11C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D56F8FB40167047185EED901B1106C0;// 0x11F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5EE8397148ED4588B3C0A4A86C8E6D00;// 0x1218(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0FBE0BBD4E43819409E713AD105AA9EE;// 0x1240(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6A42CCC84AD0CF1006378DAE574E009B;// 0x1268(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_246F92B747223E5B6256C7A93C80DEC7;// 0x1348(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92C8EC2845B1042EC358ABAF949CE577;// 0x1368(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_668869CC45ABBEB757DDE49C04DBE2D3;// 0x13E0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1A228B0F44217D94FAB19E87D4B0A544;// 0x1400(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C0422D4848BC3B16C48D80B6B404877B;// 0x1420(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2951812B49C2F0DAADD10CA44260954D;// 0x14D0(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B0B42AF8450F8DD136EF5FA2D89CC0B0;// 0x1588(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F765A0774F0BD26511F6EFA915F5A3EE;      // 0x1640(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F6C2375E4867A3EC2F629FB4FA34D458;      // 0x1688(0x0048)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_36ADA400405D30CBE4AE94B984EB02AB;// 0x16D0(0x03C0)
	struct FAnimNode_RandomBlend                       AnimGraphNode_RandomBlend_BE190C60457C31B161F31FB6D694B85D;// 0x1A90(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A55B61A74432549A1DF47DA1881E9A7F;// 0x1B70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B743B4344C4D9939DDD993B1E342957A;// 0x1B98(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FB2690E14F70AFECFC41CA90D2D87ABB;// 0x1BC0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_782F3BD24AC781425602AF9E70B2FCF7;// 0x1CA0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7379846242C273C03993B08644335BE9;// 0x1CC0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DFECE51A4CB9A51415FD17B1C1AAD80B;// 0x1D38(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2D8AE65047ADBB9B86F8E39D14AA13D2;// 0x1D58(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_459DF32044EA6E75F4F39480FC0463B5;// 0x1D78(0x00B0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1E28(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_86A3A9E3498E9FEE3C7A359FB9BBCC32; // 0x1E30(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0D136DC04F5DEC04106152872E4FA2A7;// 0x2380(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root_114A6C75435F9B06EB7FD88F52E19CC8;      // 0x23A0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6045646E449553172241659BEF37C544;// 0x23C0(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Wasteland_VeryGoodBoy_AnimsBP.Character_Wasteland_VeryGoodBoy_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Wasteland_VeryGoodBoy_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
