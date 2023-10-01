#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_IronSentinel_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C
// 0x0730 (0x1210 - 0x0AE0)
class UMod_IronSentinel_AnimBP_C : public URemnantAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D074791845C9CBA2599922AFBF591C5F;      // 0x0AE8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_C17621C64029EE94FCD461A7A0A20FEE;// 0x0B08(0x03C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D8DCAC9046B0A276F92513976643F22C;// 0x0EC8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_46BEB7594E6516F344A5F688E8F2C0BE;// 0x0FD0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FC23569249E7832A04851C8D14714E5E;// 0x0FF0(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EEEB638C482BB8F7688F5CA48EDAD9FE;      // 0x1010(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_979A5B8E468E48A8DE40549F8B0C5571;// 0x1058(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D62ABD35462A4082E9FA799AEBF572F7;// 0x10F8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_07609AEA4AA25BC742A79FB867E0AA98;// 0x11B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_581C8B8749E5AC6D4B8E2A94D4E15AE8;// 0x11D8(0x0028)
	float                                              TurretAimYaw;                                             // 0x1200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurretAimPitch;                                           // 0x1204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoLookPoses;                                              // 0x1208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1209(0x0003) MISSED OFFSET
	float                                              DummyAimRoll;                                             // 0x120C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mod_IronSentinel_AnimBP_AnimGraphNode_ModifyBone_D8DCAC9046B0A276F92513976643F22C();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Mod_IronSentinel_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
