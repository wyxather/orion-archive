#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Raid1Intro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Raid1Intro.Mission_Raid1Intro_C
// 0x0050 (0x0560 - 0x0510)
class UMission_Raid1Intro_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_Navigate_Raid1Planet_ObjSetVar;                       // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Navigate_Raid1Planet_ObjVar;                          // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseDropPod_ObjSetVar;                                 // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_PlanetTitleCard_ObjSetVar;                            // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_MissionEnd_ObjSetVar;                                 // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReNavigate_Raid1Planet_ObjVar;                        // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseDropPod_ObjVar;                                    // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TITLECARD_RAIDPLANET_ObjVar;                          // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MissionEnd_ObjVar;                                    // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Raid1Intro.Mission_Raid1Intro_C");
		return ptr;
	}


	void OnDialogSequenceFinished_5();
	void OnDialogSequenceFinished_4();
	void Set_Navigate_Raid1Planet(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Navigate_Raid1Planet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_Navigate_Raid1Planet(class UObject* Context);
	void ADVANCE_Navigate_Raid1Planet(class UObject* Context);
	void Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_PlanetTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_MissionEnd(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReNavigate_Raid1Planet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_ReNavigate_Raid1Planet(class UObject* Context);
	void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_TITLECARD_RAIDPLANET(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_MissionEnd(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MissionKickoff();
	void AdvanceTo_PlanetTitleCard(class UObject* Context);
	void ExecuteUbergraph_Mission_Raid1Intro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
