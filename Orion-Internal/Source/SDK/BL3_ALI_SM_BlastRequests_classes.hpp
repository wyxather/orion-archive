#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_BlastRequests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_SM_BlastRequests.ALI_SM_BlastRequests_C
// 0x0048 (0x0540 - 0x04F8)
class UALI_SM_BlastRequests_C : public UOakMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_Stay_ObjSetVar;                                       // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Stay_ObjVar;                                          // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_Respawned_ObjVar;                                 // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ReachOut_ObjSetVar;                                   // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReachOut_ObjVar;                                      // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_KriegReadyToBlowUp_Stay_ObjVar;                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_ReadyToRespawn_ObjVar;                            // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_ReadyToDespawnAtEnd_ObjVar;                       // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_BlastRequests.ALI_SM_BlastRequests_C");
		return ptr;
	}


	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OnDialogSequenceFinished_7();
	void OnDialogSequenceFinished_6();
	void SET_Stay(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Stay(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Stayed(class UObject* Context);
	void MissionKickoff();
	void INV_Obj_Respawned(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Respawned(class UObject* Context);
	void SET_ReachOut(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReachOut(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ReachedOut(class UObject* Context);
	void INV_Obj_KriegReadyToBlowUp_Stay(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_Obj_ReadyToRespawn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _INV_Obj_ReadyToRespawn_Objective__PROXY();
	void _INV_Obj_Respawned_Objective__PROXY_1();
	void MCE_ReadytoRespawn(class UObject* Context);
	void INV_Obj_ReadyToDespawnAtEnd(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_ALI_SM_BlastRequests(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
