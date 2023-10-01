#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_RustlerBaby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_RustlerBaby.Mission_RustlerBaby_C
// 0x00B0 (0x05C0 - 0x0510)
class UMission_RustlerBaby_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_ClearRanch_ObjSetVar;                                 // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ClearRanch_ObjVar;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_TalkToJan_ObjSetVar;                                  // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_TalkToJan_ObjVar;                                     // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_FollowTrail_ObjSetVar;                                // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_FollowTrail_ObjVar;                                   // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_FollowTrail_Breadcrumb01_ObjVar;                      // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_FollowTrail_Breadcrumb02_ObjVar;                      // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_FollowTrail_Breadcrumb03_ObjVar;                      // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ClearCamp_ObjSetVar;                                  // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ClearCamp_ObjVar;                                     // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_FreeGrog_ObjSetVar;                                   // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_FreeGrog_ObjVar;                                      // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_INVISFreeGrog1_ObjVar;                                // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_INVISFreeGrog2_ObjVar;                                // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_INVISFreeGrog3_ObjVar;                                // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_INVISFreeGrog4_ObjVar;                                // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ReturnToJan_ObjSetVar;                                // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ReturnToJan_ObjVar;                                   // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_BreakBarricade_ObjSetVar;                             // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_BreakBaricade_ObjVar;                                 // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_RustlerBaby.Mission_RustlerBaby_C");
		return ptr;
	}


	void OnDialogSequenceFinished_21();
	void OnDialogSequenceFinished_20();
	void OnDialogSequenceFinished_19();
	void OnDialogSequenceFinished_18();
	void OnDialogSequenceFinished_17();
	void OnDialogSequenceFinished_16();
	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished_14();
	void OnDialogSequenceFinished_13();
	void OnDialogSequenceFinished_12();
	void SET_FollowTrail(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_FollowTrail(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_ClearCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_ClearCamp(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_TalkToJan(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_TalkToJan(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SET_FreeGrog(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_FreeGrog(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_ReturnToJan(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_ReturnToJan(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_ClearRanch(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_ClearRanch(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void Update_ClearRanch(class UObject* Context);
	void Update_TalkToJan(class UObject* Context);
	void Update_ClearCamp(class UObject* Context);
	void Update_FreeGrog1(class UObject* Context);
	void Update_ReturnToJan(class UObject* Context);
	void OBJ_INVISFreeGrog1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_INVISFreeGrog2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_INVISFreeGrog3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_FreeGrog2(class UObject* Context);
	void Update_FreeGrog3(class UObject* Context);
	void Update_FreeGrog4(class UObject* Context);
	void OBJ_INVISFreeGrog4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_FollowTrail_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_FollowTrail_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_FollowTrail_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_TrailBreadCrumb01(class UObject* Context);
	void Update_TrailBreadCrumb02(class UObject* Context);
	void Update_TrailBreadCrumb03(class UObject* Context);
	void SET_BreakBarricade(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_BreakBaricade(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_BreakBarricade(class UObject* Context);
	void ExecuteUbergraph_Mission_RustlerBaby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
