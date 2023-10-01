#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_EyeOfTheStorm_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm_AnimsBP.Weapon_Pan_EyeOfTheStorm_AnimsBP_C
// 0x07E8 (0x1298 - 0x0AB0)
class UWeapon_Pan_EyeOfTheStorm_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FD4E5233415AFD349A37E5B3C576AB70;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_09B7DB8D4B89062B74311594FA51B5C4;// 0x0AD8(0x03C0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BAAA380842A6513CB2344FB9A5C98C7E;// 0x0E98(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D3C381C4738ECA76F80958C04B19AAE;// 0x0EC0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5529A1D44BB83718EA8B6B82220A3EDA;// 0x0F38(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C8CB5C1646B616B97D60D38956A761F6;// 0x0F58(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EFA325C94DC73492054E7B974D218E40;// 0x0FD0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4889BEC84D4847880787E59833D709E6;// 0x0FF0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E32C30744FBAF081F6A40298F6502DE9;// 0x10A0(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_F0567B744EDE5FDB63735EB25A52DC32;// 0x1118(0x0048)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_CD317A5341B37D51A53D8A9817B99BC7;// 0x1160(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EC5186C94C725C2A6B279D9BD050CF46;// 0x11A8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3128A914815A6F8D7F28E916590A5A9;// 0x1220(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm_AnimsBP.Weapon_Pan_EyeOfTheStorm_AnimsBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_AnimsBP_AnimGraphNode_TransitionResult_BAAA380842A6513CB2344FB9A5C98C7E();
	void ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
