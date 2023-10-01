#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_JustAPrick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_JustAPrick.Mission_JustAPrick_C
// 0x0030 (0x0540 - 0x0510)
class UMission_JustAPrick_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_CollectHypo_ObjSetVar;                                // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CollectHypo_ObjVar;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TurnIn_ObjSetVar;                                     // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnIn_ObjVar;                                        // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_Hidden_SteamJetActivated_ObjVar;                      // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_JustAPrick.Mission_JustAPrick_C");
		return ptr;
	}


	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OnDialogSequenceFinished_7();
	void OnDialogSequenceFinished_6();
	void Set_CollectHypo(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_CollectHypo(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_BringHyposBack(class UObject* Context);
	void MCE_PlayerCollectedHypo(class UObject* Context);
	void OBJ_Hidden_SteamJetActivated(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_SteamJetActivated(class UObject* Context);
	void MissionKickoff();
	void ExecuteUbergraph_Mission_JustAPrick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
