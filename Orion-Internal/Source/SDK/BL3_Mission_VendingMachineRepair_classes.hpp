#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_VendingMachineRepair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_VendingMachineRepair.Mission_VendingMachineRepair_C
// 0x00B1 (0x05C1 - 0x0510)
class UMission_VendingMachineRepair_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_VendingMachineInteraction_ObjSetVar;                  // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetSkagSpine_ObjVar;                                  // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetCoVSpine_ObjVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseCOVSpine_ObjSetVar;                                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseCoVSpine_ObjVar;                                   // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Obj_CollectedHumanSpineButNotSkag_ObjSetVar;              // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Obj_CollectedSkagSpineButNotHuman_ObjSetVar;              // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_CollectSpines_ObjSetVar;                              // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindTheProblem_ObjVar;                                // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         Conversation;                                             // 0x0560(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	class UMissionObjective*                           Obj_FakeCoVSpineUsedSkagSpineNotCollected_ObjVar;         // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GetSkagSpineSingle_ObjSetVar;                         // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseSkageSpine_ObjSetVar;                              // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_MissionComplete_ObjSetVar;                            // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CompleteMarcusVendingMachine_ObjVar;                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ShowSkagSpineObj_ObjSetVar;                           // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_CompleteGoSeeSecretArea_ObjSetVar;                    // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoSeeSecretArea_ObjVar;                               // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseSkagSpine_ObjVar;                                  // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseSkagSpine_ObjSetVar;                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoTalking;                                                // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_VendingMachineRepair.Mission_VendingMachineRepair_C");
		return ptr;
	}


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
	void OnDialogSequenceFinished_13();
	void MCE_UsedHumanSpineOnMachine(class UObject* Context);
	void _Obj_GetSkagSpine_Objective__PROXY();
	void _Obj_UseCoVSpine_Objective__PROXY_1();
	void _Obj_GetCoVSpine_Objective__PROXY_2();
	void _Obj_UseSkagSpine_Objective__PROXY_3();
	void Update_MissionDeliverySpeak(class UObject* Context);
	void Set_CollectSpines(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FindTheProblem(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Advance_FindTheProblem(class UObject* Context);
	void Obj_CollectedSkagSpineButNotHuman(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void CE_KeepSecretDoorOpen();
	void Obj_FakeCoVSpineUsedSkagSpineNotCollected(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Advance_FakeCoVSpineUsedSkagSpineNotCollected(class UObject* Context);
	void Set_GetSkagSpineSingle(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_GetSkagSpine_Objective__PROXY_4();
	void Obj_CollectedHumanSpineButNotSkag(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_UseSkageSpine(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_UseSkagSpine_Objective__PROXY_5();
	void Obj_UseCoVSpine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_MissionComplete(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_CompleteMarcusVendingMachine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_UseCOVSpine(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ShowSkagSpineObj(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_GetSkagSpine_Objective__PROXY_6();
	void Obj_GetCoVSpine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_GetSkagSpine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_GoSeeSecretArea(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_CompleteGoSeeSecretArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Advance_GoSeeSecretArea(class UObject* Context);
	void Set_VendingMachineInteraction(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_UseSkagSpine(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_UseSkagSpine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_UsedSkagSpineOnMachine(class UObject* Context);
	void ExecuteUbergraph_Mission_VendingMachineRepair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
