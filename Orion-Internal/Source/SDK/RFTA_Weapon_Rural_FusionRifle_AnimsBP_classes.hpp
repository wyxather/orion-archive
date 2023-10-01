#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_FusionRifle_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C
// 0x065C (0x110C - 0x0AB0)
class UWeapon_Rural_FusionRifle_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA76694746E0AF6440B3D0A5CD2AC674;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_95D89AEC48CCB0C530FA1CBFF00E7BB9;// 0x0AD8(0x03C0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_59C653B64EC9C5D13917B8B438ADC2DA;// 0x0E98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D83466146BA46CF110586A2B890E0E1;// 0x0EE0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_185F4541425C15FE1502F28E77F645A2;// 0x0F58(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9B7A9F2047313F4908B7BEAF6EA07862;// 0x0FF8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B2864884B49C1890FC766803DAA08B5;// 0x10B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BE3A31014A2D7657D478239EAC14CA1D;// 0x10D8(0x0028)
	bool                                               IsFiring;                                                 // 0x1100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1101(0x0003) MISSED OFFSET
	float                                              RateOfFire;                                               // 0x1104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRateOfFireBarrelSpinRateAdjustment;                    // 0x1108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C");
		return ptr;
	}


	float GetFireRate(class AWeapon_Rural_FusionRifle_C** WeaponReference);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void FireStart_Event_1();
	void FireEnd_Event_1();
	void ExecuteUbergraph_Weapon_Rural_FusionRifle_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
