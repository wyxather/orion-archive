#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_VehicleWeapon_Catapult_Override_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPAnim_VehicleWeapon_Catapult_Override.BPAnim_VehicleWeapon_Catapult_Override_C
// 0x024C (0x0274 - 0x0028)
class UBPAnim_VehicleWeapon_Catapult_Override_C : public UObject
{
public:
	struct FRotator                                    ArmPitchOffsetRot;                                        // 0x0028(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ProjectileSocketCompensation;                             // 0x0034(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDriverWeapon;                                          // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSeatedWeapon;                                          // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              DualWeaponDownOffset;                                     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DualWeaponDownElbowOffset;                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DualWeaponDownArmEndOffset;                               // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DualWeaponTopOffset;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DualWeaponTopElbowOffset;                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DualWeaponTopArmEndOffset;                                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DualWeaponSideOffset;                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxIKStretchRatio;                                        // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartIKStretchingRatio;                                   // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CircleZone;                                               // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CircleDeadZone;                                           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRuntimeFloatCurve                          DualWeaponRightCurveStartArmExtensionByYaw;               // 0x0070(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          DualWeaponRightCurveEndArmExtensionByYaw;                 // 0x00E8(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          DualWeaponLeftCurveStartArmExtensionByYaw;                // 0x0160(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          DualWeaponLeftCurveEndArmExtensionByYaw;                  // 0x01D8(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              StretchWheelBase;                                         // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERootMotionMode>                       RootMotionMode;                                           // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	TArray<struct FGbxAnimSetPair>                     AnimSets;                                                 // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    NewVar_1;                                                 // 0x0268(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPAnim_VehicleWeapon_Catapult_Override.BPAnim_VehicleWeapon_Catapult_Override_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
