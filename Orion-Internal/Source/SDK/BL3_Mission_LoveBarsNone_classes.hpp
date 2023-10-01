#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_LoveBarsNone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_LoveBarsNone.Mission_LoveBarsNone_C
// 0x01A8 (0x06B8 - 0x0510)
class UMission_LoveBarsNone_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_KillBandits_ObjSetVar;                                // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_KillBandits_ObjVar;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_Interrogation_ObjSetVar;                              // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_Interrogation_ObjVar;                                 // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_LocateTreasurePit_ObjSetVar;                          // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_LocateTreasurePit_ObjVar;                             // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_TalkToBossKeen_ObjSetVar;                             // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_TalkToBossKeen_ObjVar;                                // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ConvinceOrTake_ObjSetVar;                             // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ConvinceSally_ObjVar;                                 // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_TakeRing_ObjVar;                                      // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ReturnToHusband_ObjSetVar;                            // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ReturnToHusband_ObjVar;                               // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_DefendYourself_ObjSetVar;                             // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DefendYourself_ObjVar;                                // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_FindAWayIn_ObjSetVar;                                 // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_FindAWayIn_ObjVar;                                    // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ClearLab_ObjSetVar;                                   // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ClearLab_ObjVar;                                      // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OpenDoor_ObjVar;                                      // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         BabyDevilConvo;                                           // 0x05B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	class UMissionObjectiveSet*                        SET_FollowCecilia_ObjSetVar;                              // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_FollowCecilia_ObjVar;                                 // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_AtDigiline_ObjVar;                                    // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CompleteMission_ObjVar;                               // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_CompleteMissionGrieve_ObjSetVar;                      // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_CompleteMissionGrieve_ObjVar;                         // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_GiveRingToHusband_ObjVar;                             // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_KilledAllEnemiesLabEntrance_ObjVar;                   // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_WayInShortcut_ObjVar;                                 // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         DrEnforcerEntrance;                                       // 0x0610(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	class UMissionObjectiveSet*                        SET_KillDoctors_ObjSetVar;                                // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillDoctors_ObjVar;                                   // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_KilledDoctors_ObjVar;                                 // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_KillBossKeem_ObjVar;                                  // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_TalkObj1_ObjSetVar;                                   // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_TalkObj1_ObjVar;                                      // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_OpenFrontDoor_ObjVar;                                 // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_GetToLab_ObjSetVar;                                   // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_GetToLab_ObjVar;                                      // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_CarolinaTalk1_ObjVar;                                 // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_CarolinaTalk2_ObjVar;                                 // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         LoudspeakerTalk;                                          // 0x0678(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	class UMissionObjective*                           OBJ_OpenKeemDoor_ObjVar;                                  // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         Loudspeaker1;                                             // 0x0690(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogConversation                         Louspeaker2;                                              // 0x069C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMissionObjective*                           OBJ_ChangeName_ObjVar;                                    // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_WeaselCower_ObjVar;                                   // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_LoveBarsNone.Mission_LoveBarsNone_C");
		return ptr;
	}


	void OnDialogSequenceFinished_37();
	void OnDialogSequenceFinished_36();
	void OnDialogSequenceFinished_35();
	void OnDialogSequenceFinished_34();
	void OnDialogSequenceFinished_33();
	void OnDialogSequenceFinished_32();
	void OnDialogSequenceFinished_31();
	void OnDialogSequenceFinished_30();
	void OnDialogSequenceFinished_29();
	void OnDialogSequenceFinished_28();
	void OnDialogSequenceFinished_27();
	void OnDialogSequenceFinished_26();
	void OnDialogSequenceFinished_25();
	void OnDialogSequenceFinished_24();
	void OnDialogSequenceFinished_23();
	void OnDialogSequenceFinished_22();
	void OnDialogSequenceFinished_21();
	void OnDialogSequenceFinished_20();
	void OBJ_ConvinceSally(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_TakeRing(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_ReturnToHusband(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_ReturnToHusband(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MissionKickoff();
	void Update_CampCleared(class UObject* Context);
	void Update_InterrogationComplete(class UObject* Context);
	void Update_LocatedTreasurePit(class UObject* Context);
	void Update_TalkedToBoss(class UObject* Context);
	void Update_ConvincedSally(class UObject* Context);
	void Update_TookRing(class UObject* Context);
	void Update_ReturnedToHusband(class UObject* Context);
	void OBJ_FindAWayIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_DefendYourself(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SET_FindAWayIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DefendYourself(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_ClearLab(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_ClearLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_DefendedYourself(class UObject* Context);
	void Update_FoundWayIn(class UObject* Context);
	void Update_ClearedLab(class UObject* Context);
	void Obj_OpenDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OpenDoor(class UObject* Context);
	void SET_ConvinceOrTake(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_TalkToBossKeen(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_FollowCecilia(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_FollowCecilia(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_FollowedCecilia(class UObject* Context);
	void OBJ_AtDigiline(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_AtDigiline(class UObject* Context);
	void Obj_CompleteMission(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_CompleteMission(class UObject* Context);
	void SET_CompleteMissionGrieve(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_CompleteMissionGrieve(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_CompleteMissionGrieve(class UObject* Context);
	void OBJ_GiveRingToHusband(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_GiveRing(class UObject* Context);
	void OBJ_KilledAllEnemiesLabEntrance(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_EnemyGroupKilledLabFront(class UObject* Context);
	void _OBJ_KilledAllEnemiesLabEntrance_Objective__PROXY();
	void OBJ_WayInShortcut(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_WayInShortcut(class UObject* Context);
	void _OBJ_WayInShortcut_Objective__PROXY_1();
	void OBJ_KillDoctors(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_KillDoctors(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_KilledDoctors(class UObject* Context);
	void OBJ_KilledDoctors(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_AllDocEnforcersKilled(class UObject* Context);
	void SET_Interrogation(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_KillBandits(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_KillBossKeem(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _OBJ_KillBossKeem_Objective__PROXY_2();
	void _OBJ_KillBossKeem_Objective__PROXY_3();
	void _OBJ_KillBossKeem_Objective__PROXY_4();
	void _OBJ_KillBossKeem_Objective__PROXY_5();
	void _OBJ_KillBossKeem_Objective__PROXY_6();
	void SET_TalkObj1(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_TalkObj1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _OBJ_KillBandits_Objective__PROXY_7();
	void OBJ_OpenFrontDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _OBJ_KillBossKeem_Objective__PROXY_8();
	void SET_GetToLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_GetToLab(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_GotToLab(class UObject* Context);
	void OBJ_CarolinaTalk1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SPEAK_CarolinaTalk(class UObject* Context);
	void OBJ_CarolinaTalk2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SPEAK_CarolinaTalk2(class UObject* Context);
	void _OBJ_CarolinaTalk1_Objective__PROXY_9();
	void SET_TalkToBossKeen(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_LocateTreasurePit(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_OpenKeemDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_OpenKeemDoor(class UObject* Context);
	void _OBJ_OpenKeemDoor_Objective__PROXY_10();
	void SET_LocateTreasurePit(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_Interrogation(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_ChangeName(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_WeaselCower(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_WeaselCowering(class UObject* Context);
	void _OBJ_OpenDoor_Objective__PROXY_11();
	void SET_KillBandits(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ExecuteUbergraph_Mission_LoveBarsNone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
