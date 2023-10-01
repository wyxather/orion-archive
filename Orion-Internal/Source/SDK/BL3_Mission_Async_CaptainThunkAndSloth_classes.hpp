#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_CaptainThunkAndSloth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C
// 0x0018 (0x0530 - 0x0518)
class UMission_Async_CaptainThunkAndSloth_C : public UOakMissionRareSpawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_KillCaptainThunkAndSloth_ObjSetVar;                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillCaptainThunkAndSloth_ObjVar;                      // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_CaptainThunkAndSloth.Mission_Async_CaptainThunkAndSloth_C");
		return ptr;
	}


	void Obj_KillCaptainThunkAndSloth(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillCaptainThunkAndSloth(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_CaptainThunkAndSlothKilled(class UObject* Context);
	void ExecuteUbergraph_Mission_Async_CaptainThunkAndSloth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
