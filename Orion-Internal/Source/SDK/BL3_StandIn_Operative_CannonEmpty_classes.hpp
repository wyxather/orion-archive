#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_CannonEmpty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Operative_CannonEmpty.StandIn_Operative_CannonEmpty_C
// 0x0018 (0x0598 - 0x0580)
class AStandIn_Operative_CannonEmpty_C : public AStandInAuxiliaryActor
{
public:
	class UGameplayTasksComponent*                     GameplayTasks;                                            // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Cannon;                                                   // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABPChar_StandIn_Operative_SkillScreen_C*     AssociatedStandIn;                                        // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Operative_CannonEmpty.StandIn_Operative_CannonEmpty_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
