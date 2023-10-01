#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SideMission_DLC2_WeSlassPart1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C
// 0x0078 (0x0588 - 0x0510)
class USideMission_DLC2_WeSlassPart1_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_FindFlowers_ObjSetVar;                                // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindFlowers_ObjVar;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_GiveFlowers_ObjSetVar;                                // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BringFlowers_ObjVar;                                  // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_FightEista_ObjSetVar;                                 // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FightEista_ObjVar;                                    // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReviveEista_ObjSetVar;                                // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReviveEista_ObjVar;                                   // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FollowEista_ObjSetVar;                                // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FollowEista_ObjVar;                                   // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnToEista_ObjSetVar;                              // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToEista_ObjVar;                                 // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToArmory_ObjSetVar;                                 // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToArmory_ObjVar;                                    // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SideMission_DLC2_WeSlassPart1.SideMission_DLC2_WeSlassPart1_C");
		return ptr;
	}


	void OnDialogSequenceFinished_11();
	void OnDialogSequenceFinished_10();
	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OnDialogSequenceFinished_7();
	void SET_FightEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FightEista(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_EistaDowned(class UObject* Context);
	void MCE_FlowersGiven(class UObject* Context);
	void Set_ReviveEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReviveEista(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_EistaRevived(class UObject* Context);
	void Obj_BringFlowers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_GiveFlowers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_FollowEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FollowEista(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_EistaFollowed(class UObject* Context);
	void Set_ReturnToEista(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void Obj_ReturnToEista(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerReturned(class UObject* Context);
	void MCE_FlowerFounded(class UObject* Context);
	void Set_FindFlowers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_GoToArmory(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToArmory(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_GoToArmory(class UObject* Context);
	void Obj_FindFlowers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_SideMission_DLC2_WeSlassPart1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
