#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Vehicle_Turret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C
// 0x1948 (0x2768 - 0x0E20)
class UBPAnim_Vehicle_Turret_C : public UWeaponVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E20(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F89CAD204B2DED8A4794AD8A4385E11B;      // 0x0E28(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0196D44F4E9905B8B4C540803D0A3FC5;// 0x0E70(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0EB8(0x0008) MISSED OFFSET
	struct FAnimNode_WeaponVehicleHandler              AnimGraphNode_WeaponVehicleHandler_C41F6267492BD37309F423BD858A50BA;// 0x0EC0(0x15C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2BB333F64599620D5DCD12B161BC0E53;// 0x2480(0x0038)
	unsigned char                                      UnknownData01[0x8];                                       // 0x24B8(0x0008) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E3FC2ACB4074791826A9E09E006CCFDF;      // 0x24C0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5B28A03B4A450B0366FB28BC2011F1FF;// 0x2570(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_201F4D644383549A1D62DA839BEE6B00;// 0x25B8(0x0198)
	struct FRotator                                    ThrowerNoise;                                             // 0x2750(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              XValue;                                                   // 0x275C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFireThrowing;                                           // 0x2760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2761(0x0003) MISSED OFFSET
	float                                              Persistence;                                              // 0x2764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Vehicle_Turret.BPAnim_Vehicle_Turret_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Turret_AnimGraphNode_ModifyBone_201F4D644383549A1D62DA839BEE6B00();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BPAnim_Vehicle_Turret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
