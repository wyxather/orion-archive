#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_DLC1_Side_HeartOfGold_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_DLC1_Side_HeartOfGold.Mission_DLC1_Side_HeartOfGold_C
// 0x00A0 (0x05B0 - 0x0510)
class UMission_DLC1_Side_HeartOfGold_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_GetIngredients_ObjSetVar;                             // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetBlanket_ObjVar;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetBasket_ObjVar;                                     // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetFood_ObjVar;                                       // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetRootBeers_ObjVar;                                  // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetUmbrella_ObjVar;                                   // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnToJoy_ObjSetVar;                                // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToJoy_ObjVar;                                   // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToPicnic_ObjSetVar;                                 // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToPicnic_ObjVar;                                    // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_SetupPicnic_ObjSetVar;                                // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INV_SetupPicnic_ObjVar;                               // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INV_HeartoOfGold_ObjVar;                              // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SetupPicnic_ObjVar;                                   // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAnyItemCollected;                                       // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class UMissionObjectiveSet*                        Set_StayWithJoy_ObjSetVar;                                // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StayWithJoy_ObjVar;                                   // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INV_EndedVO_ObjVar;                                   // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_PLayerNearJoy_ObjVar;                             // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_DLC1_Side_HeartOfGold.Mission_DLC1_Side_HeartOfGold_C");
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
	void Obj_GetBasket(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_GetFood(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_GetRootBeers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_GetUmbrella(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_ReturnToJoy(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReturnToJoy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToPicnic(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToPicnic(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_SetupPicnic(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_INV_SetupPicnic(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ReturnedToJoy(class UObject* Context);
	void MCE_WentToPicnic(class UObject* Context);
	void MCE_SetuppedPicnic(class UObject* Context);
	void Obj_INV_HeartoOfGold(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_SetupPicnic(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MissionKickoff();
	void Obj_GetBlanket(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_StayWithJoy(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_StayWithJoy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_JoyFinishedHisScript(class UObject* Context);
	void Obj_INV_EndedVO(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_Obj_PLayerNearJoy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerNearJoy(class UObject* Context);
	void Set_GetIngredients(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ExecuteUbergraph_Mission_DLC1_Side_HeartOfGold(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
