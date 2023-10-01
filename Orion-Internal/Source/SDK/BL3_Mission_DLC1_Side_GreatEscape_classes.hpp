#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_DLC1_Side_GreatEscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_DLC1_Side_GreatEscape.Mission_DLC1_Side_GreatEscape_C
// 0x00D8 (0x05E8 - 0x0510)
class UMission_DLC1_Side_GreatEscape_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_ReachMaxSky_ObjSetVar;                                // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReachMaxSky_ObjVar;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_StartCountdown_ObjSetVar;                             // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartCountdown_ObjVar;                                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReachDock_ObjSetVar;                                  // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReachDock_ObjVar;                                     // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ClearDock_ObjSetVar;                                  // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ClearDock_ObjVar;                                     // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KeyLaVarlope_ObjSetVar;                               // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KeyLaVarlope_ObjVar;                                  // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillRudy_ObjSetVar;                                   // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillRudy_ObjVar;                                      // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FindBoombox_ObjSetVar;                                // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindBoombox_ObjVar;                                   // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnToMaxSky_ObjSetVar;                             // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToMaxSky_ObjVar;                                // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_StartCountdown_2_ObjSetVar;                           // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartCountdown_2_ObjVar;                              // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Blastoff_ObjSetVar;                                   // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Blastoff_ObjVar;                                      // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INV_OpenedRewardCrate_ObjVar;                         // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindRudy_ObjVar;                                      // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_PlaceStereo_ObjSetVar;                                // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceStereo_ObjVar;                                   // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_WaitCountdown_ObjVar;                                 // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_ClearDock_Precheck_ObjVar;                        // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_DLC1_Side_GreatEscape.Mission_DLC1_Side_GreatEscape_C");
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
	void MCE_ReachedDock(class UObject* Context);
	void Set_ClearDock(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ClearDock(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ClearedDock(class UObject* Context);
	void Set_KeyLaVarlope(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KeyLaVarlope(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_KeyedLaVarlope(class UObject* Context);
	void Set_KillRudy(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillRudy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_KilledRudy(class UObject* Context);
	void Set_FindBoombox(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FindBoombox(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_FoundBoombox(class UObject* Context);
	void Set_ReturnToMaxSky(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReturnToMaxSky(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ReturnedToMaxSky(class UObject* Context);
	void Set_StartCountdown_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_StartCountdown_3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_StartedCountdown_3(class UObject* Context);
	void Obj_Blastoff(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Blastoffed(class UObject* Context);
	void Set_Blastoff(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReachDock(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_INV_OpenedRewardCrate(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_FindRudy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_FindRudy_Objective__PROXY();
	void _Obj_FindRudy_Objective__PROXY_1();
	void Set_PlaceStereo(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PlaceStereo(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlacedStereo(class UObject* Context);
	void MissionKickoff();
	void Set_ReachDock(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_StartCountdown(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_StartCountdown(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_ReachedMaxSky(class UObject* Context);
	void Obj_WaitCountdown(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_Obj_ClearDock_Precheck(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ReachedCountdown(class UObject* Context);
	void Obj_ReachMaxSky(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_ReachMaxSky(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ExecuteUbergraph_Mission_DLC1_Side_GreatEscape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
