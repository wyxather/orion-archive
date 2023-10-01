#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Shocker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Async_Shocker.Mission_Async_Shocker_C
// 0x0018 (0x0530 - 0x0518)
class UMission_Async_Shocker_C : public UOakMissionRareSpawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_KillShocker_ObjSetVar;                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillShocker_ObjVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_Shocker.Mission_Async_Shocker_C");
		return ptr;
	}


	void Obj_KillShocker(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillShocker(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_ShockerKilled(class UObject* Context);
	void ExecuteUbergraph_Mission_Async_Shocker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
