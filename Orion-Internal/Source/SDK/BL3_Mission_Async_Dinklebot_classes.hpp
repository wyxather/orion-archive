#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_Dinklebot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Async_Dinklebot.Mission_Async_Dinklebot_C
// 0x0018 (0x0530 - 0x0518)
class UMission_Async_Dinklebot_C : public UOakMissionRareSpawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_KillDinklebot_ObjSetVar;                              // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillDinklebot_ObjVar;                                 // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_Dinklebot.Mission_Async_Dinklebot_C");
		return ptr;
	}


	void Obj_KillDinklebot(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillDinklebot(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_DinklebotKilled(class UObject* Context);
	void ExecuteUbergraph_Mission_Async_Dinklebot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
