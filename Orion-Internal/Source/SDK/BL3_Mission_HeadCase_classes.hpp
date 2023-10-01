#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_HeadCase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_HeadCase.Mission_HeadCase_C
// 0x00B8 (0x05C8 - 0x0510)
class UMission_HeadCase_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_EnterVRWorld_ObjSetVar;                               // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_RescueNPC_ObjSetVar;                                  // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EnterVRWorld_ObjVar;                                  // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindNPC_ObjVar;                                       // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillTheInterrogator_ObjSetVar;                        // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ExitTheSimulation_ObjSetVar;                          // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_HeadCase_TurnIn_ObjSetVar;                            // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillTheInterrogator_ObjVar;                           // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ExitTheSimulation_ObjVar;                             // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnIn_ObjVar;                                        // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_PickUpTheHead_ObjSetVar;                              // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PickUpTheHead_ObjVar;                                 // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMissionObjectiveEvent                             ObjStatus_FindNPC;                                        // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	class UMissionObjectiveSet*                        Set_PlugIn_ObjSetVar;                                     // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlugIn_ObjVar;                                        // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CollectMemoryFragments_ObjVar;                        // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MemFrag1_ObjVar;                                      // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MemFrag2_ObjVar;                                      // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MemFrag3_ObjVar;                                      // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MemFrag4_ObjVar;                                      // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionObjectiveStatus>               ObjStatus_OptionalObj;                                    // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	int                                                ObjCount_MemoryFrags;                                     // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_HeadHider_ObjVar;                                     // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_HeadCase.Mission_HeadCase_C");
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
	void MCE_Update_KillTheInterrogator(class UObject* Context);
	void Set_PickUpTheHead(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PickUpTheHead(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_PickUpTheHead(class UObject* Context);
	void _Obj_EnterVRWorld_Objective__PROXY_2();
	void Set_PlugIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PlugIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_PlugIn(class UObject* Context);
	void Obj_CollectMemoryFragments(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CollectMemoryFragments(class UObject* Context);
	void _Obj_CollectMemoryFragments_Objective__PROXY_3();
	void _Obj_CollectMemoryFragments_Objective__PROXY_4();
	void Obj_MemFrag1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_MemFrag2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_MemFrag3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_MemFrag4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_TurnIn(class UObject* Context);
	void MCE_Update_ExitTheSimulation(class UObject* Context);
	void MCE_Update_FindNPC(class UObject* Context);
	void MCE_Update_EnterVRWorld(class UObject* Context);
	void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_MemFrag1_Objective__PROXY_5();
	void _Obj_MemFrag3_Objective__PROXY_6();
	void _Obj_MemFrag2_Objective__PROXY_7();
	void _Obj_MemFrag4_Objective__PROXY_8();
	void _Obj_MemFrag1_Objective__PROXY_9();
	void _Obj_MemFrag3_Objective__PROXY_10();
	void _Obj_MemFrag2_Objective__PROXY_11();
	void _Obj_MemFrag4_Objective__PROXY_12();
	void MCE_VRSwitch(class UObject* Context);
	void MCE_CheckIfFinalFragment(class UObject* Context);
	void Obj_ExitTheSimulation(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MissionKickoff();
	void _Obj_EnterVRWorld_Objective__PROXY_1();
	void Obj_HeadHider(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_HeadHider(class UObject* Context);
	void Obj_KillTheInterrogator(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_HeadCase_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ExitTheSimulation(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_KillTheInterrogator(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FindNPC(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_EnterVRWorld(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_RescueNPC(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_EnterVRWorld_Objective__PROXY();
	void Set_EnterVRWorld(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ExecuteUbergraph_Mission_HeadCase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
