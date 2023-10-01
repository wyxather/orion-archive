#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Vehicle_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_Vehicle_BaseWeapon.BPWeap_Vehicle_BaseWeapon_C
// 0x0020 (0x0990 - 0x0970)
class ABPWeap_Vehicle_BaseWeapon_C : public AOakWeapon_Vehicle
{
public:
	class UBodyWeaponHoldManagerComponent*             BodyWeaponHoldManager;                                    // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxAction;                                                // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponZoomComponent*                        WeaponZoom;                                               // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Mesh3P;                                                   // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Vehicle_BaseWeapon.BPWeap_Vehicle_BaseWeapon_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
