#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_FineDining_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_FineDining.Mission_FineDining_C
// 0x0100 (0x0610 - 0x0510)
class UMission_FineDining_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_PickupGunGift_ObjSetVar;                              // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PickupGunGift_ObjVar;                                 // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FindCactusArea_ObjSetVar;                             // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindCactusArea_ObjVar;                                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Breadcrumb_FindCactusArea_ObjVar;                     // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        ObjSet_GetCactusFruit_ObjSetVar;                          // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetCactusFruit_ObjVar;                                // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        ObjSet_KillSkags_ObjSetVar;                               // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillTrainedSkags_ObjVar;                              // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroyCactus1_Invis_ObjVar;                          // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroyCactus3_Invis_ObjVar;                          // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroyCactus2_Invis_ObjVar;                          // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroyCactus4_Invis_ObjVar;                          // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroyCactus5_Invis_ObjVar;                          // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        ObjSet_KillAlphaSkag_ObjSetVar;                           // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillAlphaSkag_ObjVar;                                 // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        ObjSet_KillMincemeat_ObjSetVar;                           // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillMincemeat_ObjVar;                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBadassSkags_ObjVar;                               // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBadassSkags_Invis_ObjVar;                         // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MincemeatObjTracker_Invis_ObjVar;                     // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        ObjSet_IngedientDropOff_ObjSetVar;                        // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_IngedientDropOff_ObjVar;                              // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToBanditCamp_Invis_ObjVar;                          // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         Convo_IntroToSucc;                                        // 0x05D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	class UMissionObjectiveSet*                        ObjSet_PickupAlphaSkagMeat_ObjSetVar;                     // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PickupAlphaSkagMeat_ObjVar;                           // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        ObjSet_CollectFinalMeat_ObjSetVar;                        // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj__CollectFinalMeat_ObjVar;                             // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillAlphaSkagWithSucc_Invis_ObjVar;                   // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_FineDining.Mission_FineDining_C");
		return ptr;
	}


	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished_14();
	void OnDialogSequenceFinished_13();
	void OnDialogSequenceFinished_12();
	void OnDialogSequenceFinished_11();
	void OnDialogSequenceFinished_10();
	void OnDialogSequenceFinished_9();
	void Obj_PickupGunGift(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_PickupGunGift(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_FindCactusArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FindCactusArea(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_FindCactusArea(class UObject* Context);
	void Obj_Breadcrumb_FindCactusArea(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_FindCactusArea_Breadcrumb(class UObject* Context);
	void ObjSet_GetCactusFruit(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GetCactusFruit(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ObjSet_KillSkags(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_GetCactusFruit_Objective__PROXY();
	void Obj_KillTrainedSkags(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_DestroyCactus1_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_DestroyCactus1_Invis(class UObject* Context);
	void SpawnSuccSkags();
	void _Obj_DestroyCactus2_Invis_Objective__PROXY_1();
	void _Obj_DestroyCactus1_Invis_Objective__PROXY_2();
	void Obj_DestroyCactus2_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_DestroyCactus3_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_DestroyCactus4_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_DestroyCactus2_Invis(class UObject* Context);
	void Update_DestroyCactus3_Invis(class UObject* Context);
	void Update_DestroyCactus4_Invis(class UObject* Context);
	void Update_DestroyCactus5_Invis(class UObject* Context);
	void Obj_DestroyCactus5_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_DestroyCactus3_Invis_Objective__PROXY_3();
	void _Obj_DestroyCactus4_Invis_Objective__PROXY_4();
	void _Obj_DestroyCactus5_Invis_Objective__PROXY_5();
	void Obj_KillAlphaSkag(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ObjSet_KillAlphaSkag(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ObjSet_KillMincemeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillMincemeat(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_KillBadassSkags(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_KillBadassSkags_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_MincemeatObjTracker_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ObjSet_IngedientDropOff(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_IngedientDropOff(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_AdvanceObj_KillBadassSkags(class UObject* Context);
	void Obj_GoToBanditCamp_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_IngredientDropOff(class UObject* Context);
	void Update_SuccSkagKilled(class UObject* Context);
	void Update_EnterGunArea(class UObject* Context);
	void FirstFruitPickedUp();
	void Update_TrySpawnSuccSkags(class UObject* Context);
	void Obj_PickupAlphaSkagMeat(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ObjSet_PickupAlphaSkagMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_KillAlphaSkag_Objective__PROXY_6();
	void Update_ApproachMincemeatCamp(class UObject* Context);
	void Obj__CollectFinalMeat(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ObjSet_CollectFinalMeat(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_KillBadassSkags_Objective__PROXY_7();
	void _Obj_KillMincemeat_Objective__PROXY_8();
	void Obj_KillAlphaSkagWithSucc_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_Mission_FineDining(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
