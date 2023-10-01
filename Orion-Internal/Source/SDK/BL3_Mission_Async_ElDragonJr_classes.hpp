#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Async_ElDragonJr_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C
// 0x0018 (0x0530 - 0x0518)
class UMission_Async_ElDragonJr_C : public UOakMissionRareSpawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_KillElDragonJr_ObjSetVar;                             // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillElDragonJr_ObjVar;                                // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_ElDragonJr.Mission_Async_ElDragonJr_C");
		return ptr;
	}


	void Obj_KillElDragonJr(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillElDragonJr(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_ElDragonJrKilled(class UObject* Context);
	void ExecuteUbergraph_Mission_Async_ElDragonJr(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
