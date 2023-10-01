#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_RoadDog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Async_RoadDog.Mission_Async_RoadDog_C
// 0x0018 (0x0530 - 0x0518)
class UMission_Async_RoadDog_C : public UOakMissionRareSpawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_KillRoadDog_ObjSetVar;                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillRoadDog_ObjVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_RoadDog.Mission_Async_RoadDog_C");
		return ptr;
	}


	void Obj_KillRoadDog(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillRoadDog(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_RoadDogKilled(class UObject* Context);
	void ExecuteUbergraph_Mission_Async_RoadDog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
