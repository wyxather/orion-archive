#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_CitizenScience_Intro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C
// 0x0018 (0x0528 - 0x0510)
class UMission_CitizenScience_Intro_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjective*                           Obj_InteractWithMachine_ObjVar;                           // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_InteractWithMachine_ObjSetVar;                        // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C");
		return ptr;
	}


	void OnDialogSequenceFinished_3();
	void Set_InteractWithMachine(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_InteractWithMachine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MissionKickoff();
	void MCE_InteractedWithMachine(class UObject* Context);
	void ExecuteUbergraph_Mission_CitizenScience_Intro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
