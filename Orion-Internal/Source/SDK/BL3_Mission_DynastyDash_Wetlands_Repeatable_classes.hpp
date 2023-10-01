#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_DynastyDash_Wetlands_Repeatable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_DynastyDash_Wetlands_Repeatable.Mission_DynastyDash_Wetlands_Repeatable_C
// 0x006B (0x057B - 0x0510)
class UMission_DynastyDash_Wetlands_Repeatable_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	int                                                TimerSecondsRemaining;                                    // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TimerSecondsInitial;                                      // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TimerSecondsComputedTime;                                 // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class UMissionObjectiveSet*                        SET_AcquireBurgers_ObjSetVar;                             // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_AcquireBurgers_ObjVar;                                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_DeliverBurgers_ObjSetVar;                             // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_DeliverBurgers_ObjVar;                                // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_CompleteDeliveryFast_ObjVar;                          // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_CompleteDeliveryMed_ObjVar;                           // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_CompleteDeliverySlow_ObjVar;                          // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_SignTest_ObjVar;                                      // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ReturnToStart_ObjSetVar;                              // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ReturnToStart_ObjVar;                                 // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FastAchieved;                                             // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MediumAchieved;                                           // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SlowAchieved;                                             // 0x057A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_DynastyDash_Wetlands_Repeatable.Mission_DynastyDash_Wetlands_Repeatable_C");
		return ptr;
	}


	void OnDialogSequenceFinished_13();
	void OnDialogSequenceFinished_12();
	void OnDialogSequenceFinished_11();
	void OnDialogSequenceFinished_10();
	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OBJ_AcquireBurgers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_AcquireBurgers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SET_DeliverBurgers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_DeliverBurgers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_DeliverBurgers(class UObject* Context);
	void SET_ReturnToStart(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_CompleteDeliveryFast(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_CompleteDeliveryMed(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_CompleteDeliverySlow(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _OBJ_CompleteDeliveryFast_Objective__PROXY();
	void _OBJ_CompleteDeliveryMed_Objective__PROXY_1();
	void _OBJ_CompleteDeliverySlow_Objective__PROXY_2();
	void MCE_AcquireBurgers(class UObject* Context);
	void OBJ_ReturnToStart(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ReturnToStart(class UObject* Context);
	void MCE_DetermineResults(class UObject* Context);
	void OBJ_SignTest(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ShotSign(class UObject* Context);
	void MissionKickoff();
	void ExecuteUbergraph_Mission_DynastyDash_Wetlands_Repeatable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
