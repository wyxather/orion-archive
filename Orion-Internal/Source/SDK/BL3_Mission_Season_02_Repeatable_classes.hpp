#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Season_02_Repeatable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Season_02_Repeatable.Mission_Season_02_Repeatable_C
// 0x01D0 (0x06E0 - 0x0510)
class UMission_Season_02_Repeatable_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	int                                                Cartel_ID;                                                // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LeagueObjectivesComplete;                                 // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_SetCartelID_ObjSetVar;                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SetCartelID_ObjVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ActivateCartel1_Inv_ObjVar;                           // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ActivateCartel0_Inv_ObjVar;                           // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ActivateCartel2_Inv_ObjVar;                           // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_CollectCoordinatesActual_ObjSetVar;                   // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillAssassin_ObjVar;                                  // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToLeagueMap_ObjSetVar;                              // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToLeagueMap_ObjVar;                                 // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PortalOpen_INV_ObjVar;                                // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindBoss_ObjVar;                                      // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_CollectKey_ObjSetVar;                                 // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LocateKey_ObjVar;                                     // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FindBoss_ObjSetVar;                                   // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TITLECARD_Boss_ObjSetVar;                             // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TITLECARD_Boss_ObjVar;                                // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillBoss_ObjSetVar;                                   // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBoss_ObjVar;                                      // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_LeaveLeagueMap_ObjSetVar;                             // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LeaveLeagueMap_ObjVar;                                // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TurnIn_ObjSetVar;                                     // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnIn_ObjVar;                                        // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CollectCoordinates_ObjVar;                            // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CollectKey_ObjVar;                                    // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_AdvanceToAssassin_INV_ObjVar;                         // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CheckAssassinSpawned_ObjVar;                          // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BringKeyToStatue_ObjVar;                              // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_BringKeyToStatue_ObjSetVar;                           // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseUberBoss_INV_ObjVar;                               // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OpenFirstGate_ObjVar;                                 // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_OpenFirstGate_ObjSetVar;                              // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CourtyardUnlock1_ObjVar;                              // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CourtyardUnlock2_ObjVar;                              // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CourtyardUnlock3_ObjVar;                              // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FrontGateUnlock_ObjVar;                               // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LockerWaypoint_INV_ObjVar;                            // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_VO_BeforeGate1_ObjVar;                                // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_VO_AfterGate2_ObjVar;                                 // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ActivateStairSlide_ObjVar;                            // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindBoss_Waypoint_INV_ObjVar;                         // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LockerWaypoint1_ObjVar;                               // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LockerWaypoint2_ObjVar;                               // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LockerWaypoint3_ObjVar;                               // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_EnterMansion_ObjSetVar;                               // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EnterMansion_INV_ObjVar;                              // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FindKey_Initial_ObjSetVar;                            // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ClearArea_ObjVar;                                     // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ClearArea_ObjSetVar;                                  // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EnterAreaToBeCleared_INV_ObjVar;                      // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ClearArea_LW3_Initial_ObjVar;                         // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ClearArea_FrontDoor_ObjSetVar;                        // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ClearArea_FrontDoor_ObjVar;                           // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_EnterMansion_Actual_ObjSetVar;                        // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EnterMansion_Actual_ObjVar;                           // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LocateKey_BC_1_ObjVar;                                // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PortalWaypoint_INV_ObjVar;                            // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Season_02_Repeatable.Mission_Season_02_Repeatable_C");
		return ptr;
	}


	void RandomizeAndUpdateStat(class UGameStatData* StatData);
	void RandomIntForStat(int* RandomInt);
	void OnDialogSequenceFinished_11();
	void OnDialogSequenceFinished_10();
	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OnDialogSequenceFinished_7();
	void MissionKickoff();
	void Set_CollectCoordinatesActual(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillAssassin(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_KillAssassin(class UObject* Context);
	void Set_GoToLeagueMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToLeagueMap(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_GoToLeagueMap(class UObject* Context);
	void Obj_LocateKey(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_LocateKey(class UObject* Context);
	void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_KillBoss(class UObject* Context);
	void Set_TITLECARD_Boss(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TITLECARD_Boss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_LeaveLeagueMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_LeaveLeagueMap(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_LeaveLeagueMap(class UObject* Context);
	void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_TurnIn(class UObject* Context);
	void Obj_FindBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_FindBoss(class UObject* Context);
	void Set_CollectKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PortalOpen_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_PortalOpen_INV(class UObject* Context);
	void _Obj_PortalOpen_INV_Objective__PROXY();
	void Set_FindBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ActivateCartel0_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_ActivateCartel2_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_ActivateCartel1_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_ActivateCartel0(class UObject* Context);
	void MCE_Update_ActivateCartel1(class UObject* Context);
	void MCE_Update_ActivateCartel2(class UObject* Context);
	void MCE_SetCartelID(class UObject* Context);
	void Obj_SetCartelID(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_SetCartelID(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_CollectCoordinates_Objective__PROXY_1();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_2();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_3();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_4();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_5();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_6();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_7();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_8();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_9();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_10();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_11();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_12();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_13();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_14();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_15();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_16();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_17();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_18();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_19();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_20();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_21();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_22();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_23();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_24();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_25();
	void Obj_CollectCoordinates(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CollectCoordinates(class UObject* Context);
	void Obj_CollectKey(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CollectKey(class UObject* Context);
	void Obj_AdvanceToAssassin_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_AdvanceToAssassin_INV(class UObject* Context);
	void Obj_CheckAssassinSpawned(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CheckAssassinSpawned(class UObject* Context);
	void Set_BringKeyToStatue(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_BringKeyToStatue(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_BringKeyToStatue(class UObject* Context);
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_26();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_27();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_28();
	void _Obj_PortalOpen_INV_Objective__PROXY_29();
	void _Obj_PortalOpen_INV_Objective__PROXY_30();
	void _Obj_PortalOpen_INV_Objective__PROXY_31();
	void _Obj_PortalOpen_INV_Objective__PROXY_32();
	void _Obj_PortalOpen_INV_Objective__PROXY_33();
	void Obj_UseUberBoss_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_UseUberBoss_INV(class UObject* Context);
	void Set_OpenFirstGate(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_OpenFirstGate(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_OpenFirstGate(class UObject* Context);
	void Set_EnterMansion(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_FindBoss_Objective__PROXY_34();
	void _Obj_FindBoss_Objective__PROXY_35();
	void Obj_CourtyardUnlock1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_CourtyardUnlock2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CourtyardUnlock1(class UObject* Context);
	void MCE_Update_CourtyardUnlock2(class UObject* Context);
	void Obj_CourtyardUnlock3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CourtyardUnlock3(class UObject* Context);
	void Obj_FrontGateUnlock(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_FrontGateUnlock(class UObject* Context);
	void _Obj_FrontGateUnlock_Objective__PROXY_36();
	void Obj_LockerWaypoint_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_LockerWaypoint_INV(class UObject* Context);
	void _Obj_PortalOpen_INV_Objective__PROXY_37();
	void Obj_VO_BeforeGate1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_VO_BeforeGate1(class UObject* Context);
	void Obj_VO_AfterGate2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_VO_AfterGate2(class UObject* Context);
	void Obj_ActivateStairSlide(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_ActivateStairSlide(class UObject* Context);
	void Obj_FindBoss_Waypoint_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_FindBoss_Waypoint_INV(class UObject* Context);
	void Obj_LockerWaypoint1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_LockerWaypoint2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_LockerWaypoint3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_LW1(class UObject* Context);
	void MCE_LW2(class UObject* Context);
	void MCE_LW3(class UObject* Context);
	void MCE_InvalidateObjectives(class UObject* Context);
	void _Obj_PortalOpen_INV_Objective__PROXY_38();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_39();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_40();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_41();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_42();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_43();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_44();
	void MCE_UpdateRandKeyStatToWaypoint(class UObject* Context);
	void Obj_EnterMansion_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_EnterMansion_INV(class UObject* Context);
	void Set_FindKey_Initial(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ClearArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ClearArea(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_ClearArea(class UObject* Context);
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_45();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_46();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_47();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_48();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_49();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_50();
	void _Obj_PortalOpen_INV_Objective__PROXY_51();
	void _Obj_PortalOpen_INV_Objective__PROXY_52();
	void _Obj_LockerWaypoint1_Objective__PROXY_53();
	void _Obj_LockerWaypoint2_Objective__PROXY_54();
	void _Obj_LockerWaypoint3_Objective__PROXY_55();
	void _Obj_LockerWaypoint1_Objective__PROXY_56();
	void _Obj_LockerWaypoint2_Objective__PROXY_57();
	void _Obj_LockerWaypoint3_Objective__PROXY_58();
	void Obj_EnterAreaToBeCleared_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_EnterAreaToBeCleared_INV(class UObject* Context);
	void _Obj_LockerWaypoint1_Objective__PROXY_59();
	void _Obj_LockerWaypoint2_Objective__PROXY_60();
	void _Obj_LockerWaypoint3_Objective__PROXY_61();
	void Obj_ClearArea_LW3_Initial(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_ClearArea_LW3_Initial(class UObject* Context);
	void Set_ClearArea_FrontDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_EnterMansion_Actual(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_62();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_63();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_64();
	void Obj_EnterMansion_Actual(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_EnterMansion_Actual(class UObject* Context);
	void Obj_ClearArea_FrontDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_ClearArea_FrontDoor(class UObject* Context);
	void _Obj_PortalOpen_INV_Objective__PROXY_65();
	void _Obj_ActivateCartel0_Inv_Objective__PROXY_66();
	void _Obj_ActivateCartel1_Inv_Objective__PROXY_67();
	void _Obj_ActivateCartel2_Inv_Objective__PROXY_68();
	void _Obj_FindBoss_Objective__PROXY_69();
	void Obj_LocateKey_BC_2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_LocateKeyBC_2(class UObject* Context);
	void _Obj_LocateKey_BC_1_Objective__PROXY_70();
	void _Obj_CollectKey_Objective__PROXY_71();
	void Obj_PortalWaypoint_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_PortalWaypoint_INV(class UObject* Context);
	void ExecuteUbergraph_Mission_Season_02_Repeatable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
