#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_SaurdewValley_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_SaurdewValley.Mission_SaurdewValley_C
// 0x00B0 (0x05C0 - 0x0510)
class UMission_SaurdewValley_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_FarmingTasks_ObjSetVar;                               // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_CollectEggs_ObjVar;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_GoToDaisysPen_ObjVar;                                 // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_GoToRavagerPen_ObjVar;                                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_LeadDaisy_ObjVar;                                     // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_HarvestScales_ObjVar;                                 // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_TurnInToJan_ObjSetVar;                                // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_TurnInToJan_ObjVar;                                   // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_PlaceEggs_ObjVar;                                     // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_CollectMilk_ObjVar;                                   // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_PlaceMilk_ObjVar;                                     // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_LeaveBarn_ObjVar;                                     // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_PlaceScales_ObjVar;                                   // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ReleaseDaisy_ObjVar;                                  // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_KickOff01_ObjSetVar;                                  // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_KickOff02_ObjSetVar;                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_KickOff03_ObjSetVar;                                  // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_MeleeRavager_ObjVar;                                  // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJINVIS_DaisyDoor01_ObjVar;                              // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJINVIS_DaisyDoor02_ObjVar;                              // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJINVIS_DaisyDoor03_ObjVar;                              // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_SaurdewValley.Mission_SaurdewValley_C");
		return ptr;
	}


	void OnDialogSequenceFinished_11();
	void OnDialogSequenceFinished_10();
	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OnDialogSequenceFinished_7();
	void OBJ_HarvestScales(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_LeadDaisy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_GoToRavagerPen(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_GoToDaisysPen(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_CollectEggs(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_TurnInToJan(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_TurnInToJan(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_FarmingTasks(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_PlaceEggs(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_CollectMilk(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_PlaceMilk(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_TurnInToJan(class UObject* Context);
	void Update_GoToDaisysPen(class UObject* Context);
	void Update_LeadDaisy(class UObject* Context);
	void Update_LeaveBarn(class UObject* Context);
	void Update_CollectMilk(class UObject* Context);
	void Update_PlaceMilk(class UObject* Context);
	void OBJ_LeaveBarn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_GoToRavagerPen(class UObject* Context);
	void Update_PlaceScales(class UObject* Context);
	void OBJ_PlaceScales(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_PlaceEggs(class UObject* Context);
	void OBJ_ReleaseDaisy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_ReleaseDaisy(class UObject* Context);
	void SET_KickOff01(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SET_KickOff02(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SET_KickOff03(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_MeleeRavager(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_MeleeRavager(class UObject* Context);
	void OBJINVIS_DaisyDoor01(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJINVIS_DaisyDoor02(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJINVIS_DaisyDoor03(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _OBJ_CollectEggs_Objective__PROXY();
	void _OBJ_GoToRavagerPen_Objective__PROXY_1();
	void Unpause_LeaveBarn(class UObject* Context);
	void ExecuteUbergraph_Mission_SaurdewValley(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
