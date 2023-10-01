#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_VehicleWeapon_Catapult_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_VehicleWeapon_Catapult.BPAnim_VehicleWeapon_Catapult_C
// 0x1790 (0x25B0 - 0x0E20)
class UBPAnim_VehicleWeapon_Catapult_C : public UWeaponVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E20(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0302E2304410A794B0640782F1DF5DEB;      // 0x0E28(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BAB9A9784E5EFE75255AB387F3B4656A;      // 0x0E70(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_09E5CE4E4C733C0C29D47DAE966EBEE4;// 0x0F20(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0F68(0x0008) MISSED OFFSET
	struct FAnimNode_WeaponVehicleHandler              AnimGraphNode_WeaponVehicleHandler_95B7C2CC46744DACDEB0D8A16E761060;// 0x0F70(0x15C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4E8C091642A3A3CD8C29448CB1ACB96C;// 0x2530(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0D4223A4407DD533AAE27FB38141439F;// 0x2578(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_VehicleWeapon_Catapult.BPAnim_VehicleWeapon_Catapult_C");
		return ptr;
	}


	void ExecuteUbergraph_BPAnim_VehicleWeapon_Catapult(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
