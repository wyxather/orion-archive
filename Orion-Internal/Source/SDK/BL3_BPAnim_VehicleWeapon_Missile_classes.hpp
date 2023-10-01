#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_VehicleWeapon_Missile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_VehicleWeapon_Missile.BPAnim_VehicleWeapon_Missile_C
// 0x1790 (0x25B0 - 0x0E20)
class UBPAnim_VehicleWeapon_Missile_C : public UWeaponVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E20(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E30CF08D4161BB6A8437E6BA1931766D;      // 0x0E28(0x0048)
	struct FAnimNode_WeaponVehicleHandler              AnimGraphNode_WeaponVehicleHandler_6100679D40DB82D64E3A11B3186DAD98;// 0x0E70(0x15C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_135A26714B6D34CFD8F65A92E01A7D79;// 0x2430(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EFD424A2450A8E0DCEE7C4AA4F841D43;// 0x2478(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_888FEEB745B09A35556968911A96B618;      // 0x24B0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A34936C94BC43C23C144A8A0610DFD13;// 0x2560(0x0048)
	class ACharacter*                                  NewVar_1;                                                 // 0x25A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_VehicleWeapon_Missile.BPAnim_VehicleWeapon_Missile_C");
		return ptr;
	}


	void ExecuteUbergraph_BPAnim_VehicleWeapon_Missile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
