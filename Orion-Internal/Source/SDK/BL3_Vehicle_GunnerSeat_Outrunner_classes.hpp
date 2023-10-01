#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Vehicle_GunnerSeat_Outrunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Vehicle_GunnerSeat_Outrunner.Vehicle_GunnerSeat_Outrunner_C
// 0x0020 (0x0568 - 0x0548)
class AVehicle_GunnerSeat_Outrunner_C : public AVehicleSeatPawn
{
public:
	class UBoxComponent*                               Interact;                                                 // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTurretMovementComponent*                 OakTurretMovement;                                        // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActiveWeaponsComponent*                     ActiveWeapons;                                            // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vehicle_GunnerSeat_Outrunner.Vehicle_GunnerSeat_Outrunner_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
