#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_Barrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Operative_Barrier.StandIn_Operative_Barrier_C
// 0x0008 (0x0588 - 0x0580)
class AStandIn_Operative_Barrier_C : public AStandInAuxiliaryActor
{
public:
	class UGbxSkeletalMeshComponent*                   Barrier;                                                  // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Operative_Barrier.StandIn_Operative_Barrier_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
