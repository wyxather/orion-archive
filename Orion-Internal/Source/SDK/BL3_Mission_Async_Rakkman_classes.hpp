#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Rakkman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Async_Rakkman.Mission_Async_Rakkman_C
// 0x0018 (0x0530 - 0x0518)
class UMission_Async_Rakkman_C : public UOakMissionRareSpawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_KillRakkman_ObjSetVar;                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillRakkman_ObjVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_Rakkman.Mission_Async_Rakkman_C");
		return ptr;
	}


	void Obj_KillRakkman(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillRakkman(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_RakkmanKilled(class UObject* Context);
	void ExecuteUbergraph_Mission_Async_Rakkman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
