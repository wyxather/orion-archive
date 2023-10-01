#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_BuffFilmBuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_BuffFilmBuff.Mission_BuffFilmBuff_C
// 0x0148 (0x0658 - 0x0510)
class UMission_BuffFilmBuff_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_FindHardDrive_ObjSetVar;                              // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SearchTrashPiles_Counter_ObjVar;                      // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FindProjectorRoom_ObjSetVar;                          // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_AttachHardDrive_ObjSetVar;                            // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillMiniBoss_ObjSetVar;                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TakeLightBulb_ObjSetVar;                              // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReplaceLightBulb_ObjSetVar;                           // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TurnIn_ObjSetVar;                                     // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindProjectorRoom_ObjVar;                             // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_AttachHardDrive_ObjVar;                               // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillMiniBoss_ObjVar;                                  // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TakeLightBulb_ObjVar;                                 // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReplaceLightBulb_ObjVar;                              // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnIn_ObjVar;                                        // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GetHardDrive_ObjSetVar;                               // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetHardDrive_ObjVar;                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     InstigatorPlayer;                                         // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_PreMission_ObjSetVar;                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PreMission_ObjVar;                                    // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SearchTrash_ObjVar;                                   // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Trash1_ObjVar;                                        // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Trash3_ObjVar;                                        // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Trash2_ObjVar;                                        // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ProjectorPlaysBuffMovieFake_ObjSetVar;                // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BuffMovieFake_Inv_ObjVar;                             // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_COVVideo_Inv_ObjVar;                                  // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BuffMovieReal_Inv_ObjVar;                             // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_WalkIntoCamp_ObjSetVar;                               // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_WalkIntoCamp_Video_Inv_ObjVar;                        // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ProjectorBlewUp_ObjSetVar;                            // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ProjectorBlewUp_Inv_ObjVar;                           // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BuffCampDoor_ObjVar;                                  // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToBulbStash_ObjSetVar;                              // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToBulbStash_ObjVar;                                 // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LightbulbAreaWaypoint_Inv_ObjVar;                     // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BulbHolder_Inv_ObjVar;                                // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Int_CompleteECHOObjective;                                // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x063C(0x0004) MISSED OFFSET
	class UMissionObjectiveSet*                        Set_TurnOffProjector_ObjSetVar;                           // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnOffProjector_ObjVar;                              // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SpawnGoliathVO_ObjVar;                                // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_BuffFilmBuff.Mission_BuffFilmBuff_C");
		return ptr;
	}


	void OnDialogSequenceFinished_19();
	void OnDialogSequenceFinished_18();
	void OnDialogSequenceFinished_17();
	void OnDialogSequenceFinished_16();
	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished_14();
	void OnDialogSequenceFinished_13();
	void OnDialogSequenceFinished_12();
	void OnDialogSequenceFinished_11();
	void MCE_FindProjectorRoom(class UObject* Context);
	void Set_PreMission(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_SpeakBuffIntro(class UObject* Context);
	void Obj_GetHardDrive(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GetHardDrive(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_FindHardDrives(class UObject* Context);
	void Obj_PreMission(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_TurnIn(class UObject* Context);
	void MCE_ReplaceLightBulb(class UObject* Context);
	void MCE_KillMiniBoss(class UObject* Context);
	void MCE_PlaceHardDrive(class UObject* Context);
	void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_ReplaceLightBulb(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_TakeLightBulb(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_KillMiniBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_AttachHardDrive(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_FindProjectorRoom(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ReplaceLightBulb(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_TakeLightBulb(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_KillMiniBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_AttachHardDrive(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_FindProjectorRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_FindHardDrive(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_SearchTrashPiles_Counter(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_SearchTrash(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_SearchTrash(class UObject* Context);
	void Obj_Trash1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_Trash2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_Trash3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_Trash1(class UObject* Context);
	void MCE_Update_Trash2(class UObject* Context);
	void MCE_Update_Trash3(class UObject* Context);
	void MCE_Update_TakeLightBulb(class UObject* Context);
	void Set_ProjectorPlaysBuffMovieFake(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_BuffMovieFake_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_COVVideo_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_COVVideo_Inv_Objective__PROXY();
	void _Obj_COVVideo_Inv_Objective__PROXY_1();
	void _Obj_COVVideo_Inv_Objective__PROXY_2();
	void Obj_BuffMovieReal_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_BuffMovieFake(class UObject* Context);
	void Set_WalkIntoCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_COVVideo_Inv_Objective__PROXY_3();
	void _Obj_SearchTrash_Objective__PROXY_4();
	void _Obj_SearchTrashPiles_Counter_Objective__PROXY_5();
	void _Obj_Trash1_Objective__PROXY_6();
	void _Obj_Trash2_Objective__PROXY_7();
	void _Obj_Trash3_Objective__PROXY_8();
	void MCE_EnterCamp_PlayVideo(class UObject* Context);
	void Obj_WalkIntoCamp_Video_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_ProjectorBlewUp(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ProjectorBlewUp_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_BuffCampDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_BuffCampDoor(class UObject* Context);
	void _Obj_BuffCampDoor_Objective__PROXY_9();
	void Set_GoToBulbStash(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToBulbStash(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_GoToBulbStash(class UObject* Context);
	void Obj_LightbulbAreaWaypoint_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_LightbulbAreaWaypoint_Inv(class UObject* Context);
	void _Obj_TakeLightBulb_Objective__PROXY_10();
	void Obj_BulbHolder_Inv(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_FinishPickupDialog(class UObject* Context);
	void MCE_MovieFinished(class UObject* Context);
	void Set_TurnOffProjector(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TurnOffProjector(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_TurnOffProjector(class UObject* Context);
	void MCE_ProjectorBroke(class UObject* Context);
	void Obj_SpawnGoliathVO(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_SpawnGoliathVO(class UObject* Context);
	void _Obj_AttachHardDrive_Objective__PROXY_11();
	void _Obj_AttachHardDrive_Objective__PROXY_12();
	void _Obj_AttachHardDrive_Objective__PROXY_13();
	void MCE_FirstViedoFinished(class UObject* Context);
	void MCE_SecondVideoFinished(class UObject* Context);
	void MCE_BuffVideoFinished(class UObject* Context);
	void ExecuteUbergraph_Mission_BuffFilmBuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
