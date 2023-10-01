#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_PissingContest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_PissingContest.Mission_PissingContest_C
// 0x00A0 (0x05B0 - 0x0510)
class UMission_PissingContest_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_GoToArea_1_ObjSetVar;                                 // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToArea_2_ObjSetVar;                                 // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToArea_1_ObjVar;                                    // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToArea_2_ObjVar;                                    // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Breadcrumb_Camp2_ObjVar;                              // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillFirstTrooper_ObjSetVar;                           // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PickTrooperToKill_ObjVar;                             // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Optional_KillSecondTrooper_ObjVar;                    // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnToRefugee_ObjSetVar;                            // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToRefugee_ObjVar;                               // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillBothTroopers_ObjSetVar;                           // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillTrooper1_Invis_ObjVar;                            // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillTrooper2_Invis_ObjVar;                            // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBothTroopers_Invis_ObjVar;                        // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Breadcrumb_Camp_ObjVar;                               // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         Convo_MoonDoor;                                           // 0x0590(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogConversation                         Convo_TrooperRelieved;                                    // 0x059C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMissionObjective*                           Obj_TroopersHostile_ObjVar;                               // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_PissingContest.Mission_PissingContest_C");
		return ptr;
	}


	void OnDialogSequenceFinished_25();
	void OnDialogSequenceFinished_24();
	void OnDialogSequenceFinished_23();
	void OnDialogSequenceFinished_22();
	void OnDialogSequenceFinished_21();
	void OnDialogSequenceFinished_20();
	void OnDialogSequenceFinished_19();
	void OnDialogSequenceFinished_18();
	void OnDialogSequenceFinished_17();
	void OnDialogSequenceFinished_16();
	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished_14();
	void Set_GoToArea_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_GoToArea_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToArea_2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Found_FirstArea(class UObject* Context);
	void Update_Found_SecondArea(class UObject* Context);
	void Obj_GoToArea_3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_Breadcrumb_Camp2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Breadcrumb_Camp2(class UObject* Context);
	void Obj_PickTrooperToKill(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillFirstTrooper(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ReturnToRefugee(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Optional_KillSecondTrooper(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_ReturnToRefugee(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_MissionTurnedIn(class UObject* Context);
	void Set_KillBothTroopers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReturnToRefugee_Objective__PROXY();
	void Obj_KillTrooper1_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_KillTrooper2_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_KillBothTroopers_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_KillTrooper1_Invis_Objective__PROXY_1();
	void _Obj_KillTrooper2_Invis_Objective__PROXY_2();
	void _Obj_KillTrooper1_Invis_Objective__PROXY_3();
	void _Obj_KillTrooper2_Invis_Objective__PROXY_4();
	void _Obj_KillBothTroopers_Invis_Objective__PROXY_5();
	void _Obj_KillBothTroopers_Invis_Objective__PROXY_6();
	void Update_AddSecondaryTrooperObjective(class UObject* Context);
	void Obj_Breadcrumb_Camp(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Breadcrumb_Camp(class UObject* Context);
	void Update_DoMoonDoorJump(class UObject* Context);
	void MissionKickoff();
	void Update_IntroDialog(class UObject* Context);
	void Update_MoonDoor_SCREEEAAAM(class UObject* Context);
	void Update_MoonDoor_NPCSplatted(class UObject* Context);
	void Update_MoonDoor_TroopersHostile(class UObject* Context);
	void DoRemainingTrooperSpeaks(const struct FDialogConversation& PassThruConvo, bool ConvoSelector);
	void Update_MoonDoor_BreakTroopersOut(class UObject* Context);
	void Obj_TroopersHostile(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_Mission_PissingContest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
