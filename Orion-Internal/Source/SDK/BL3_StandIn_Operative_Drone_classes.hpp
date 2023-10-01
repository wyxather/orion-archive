#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_Drone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Operative_Drone.StandIn_Operative_Drone_C
// 0x0008 (0x0588 - 0x0580)
class AStandIn_Operative_Drone_C : public AStandInAuxiliaryActor
{
public:
	class UGbxSkeletalMeshComponent*                   Mesh;                                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Operative_Drone.StandIn_Operative_Drone_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
