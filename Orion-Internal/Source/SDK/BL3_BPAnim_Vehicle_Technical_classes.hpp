#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Vehicle_Technical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C
// 0x3A94 (0x5544 - 0x1AB0)
class UBPAnim_Vehicle_Technical_C : public UTechnicalVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1AB0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AB9F769241EF12A1D8EBBDA823DEA421;      // 0x1AB8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_644030C542608D9355E7EFB0C22811BF;// 0x1B00(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1B48(0x0008) MISSED OFFSET
	struct FAnimNode_TechnicalHandler                  AnimGraphNode_TechnicalHandler_EBADFB6041C79332A96E5D84FC6A8B99;// 0x1B50(0x2D30)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F6FCD966446DAB1B75452D9BDBF323B7;// 0x4880(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E21FB82B4BF89E76CBF14BB295763DF5;// 0x48B8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E55DC6454E8FD0EF719E80ADDD0A5751;// 0x4900(0x0120)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4170D05447F3907016BAACA24DD234E5;// 0x4A20(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_67DAAF09417D4E9B02598DA6B4B7F22A;// 0x4B40(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_47DB830B49E961FD79397A97677E7356;// 0x4C20(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6B33453741A3DEF0C5CE798CFE18E382;// 0x4C70(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_131C07224D36E02355CB7D9E5FCD1E3A;// 0x4CC0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1D842E37454AFAFCDBCA79B0E7B88EA4;// 0x4DA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4FE727C14CBC4DF3EE79C4B34A5EE455;// 0x4DF0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F155AF2E4A3DD84854EC1685AEAC4AE6;      // 0x4E40(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_89E37BB24182E5AAE48EB08D4CEA4D0D;      // 0x4EF0(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_98E5299B41398F23572118ABAD4CF983;// 0x4FA0(0x0120)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_84AAA49942E728B517327F8DD7FA0720;// 0x50C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_97D17F6B4A83A1FC22356EB13E0B7C5A;// 0x51A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_015F7275486ACB8F2C04938F53B6E543;// 0x51F0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BB57FE7644C216C370BCFFACB86C3006;      // 0x5240(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2FFEA65E45530C60F31596B8E3461C89;      // 0x52F0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_49E875224126FA25BC9AB5883FFAF412;      // 0x53A0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4453DD38460566AC91C416B74EC9C6C1;      // 0x5450(0x00B0)
	class AOakVehicle*                                 AnimVehicle;                                              // 0x5500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BodyAddBlendWeight;                                       // 0x5508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendLandAlpha;                                           // 0x550C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendTurnAlpha;                                           // 0x5510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastAngularVelocity;                                      // 0x5514(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBraking;                                              // 0x5520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BouncePlaying;                                            // 0x5524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x5525(0x0003) MISSED OFFSET
	int                                                LastGear;                                                 // 0x5528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendBodyAlpha;                                           // 0x552C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnBouncePlaying;                                        // 0x5530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x5531(0x0003) MISSED OFFSET
	float                                              HoverPitch;                                               // 0x5534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverRoll;                                                // 0x5538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_1;                                                 // 0x553C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_2;                                                 // 0x5540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C");
		return ptr;
	}


	void Exit();
	void Enter();
	void OnLanded_Event(float TimeSpentInAir, float LandAngle, int NumWheelsOnGround, bool bAllWheelsLanded);
	void AllowJump();
	void CustomEvent_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ResetBumpAnim();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_98E5299B41398F23572118ABAD4CF983();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_4170D05447F3907016BAACA24DD234E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_E55DC6454E8FD0EF719E80ADDD0A5751();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_Vehicle_Technical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
