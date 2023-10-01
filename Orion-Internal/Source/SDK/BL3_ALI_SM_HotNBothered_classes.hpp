#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_HotNBothered_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_SM_HotNBothered.ALI_SM_HotNBothered_C
// 0x0018 (0x0510 - 0x04F8)
class UALI_SM_HotNBothered_C : public UOakMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_TurnHeatOn_ObjSetVar;                                 // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnHeatOn_ObjVar;                                    // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_HotNBothered.ALI_SM_HotNBothered_C");
		return ptr;
	}


	void OnDialogSequenceFinished_7();
	void OnDialogSequenceFinished_6();
	void OnDialogSequenceFinished_5();
	void MissionKickoff();
	void Obj_TurnHeatOn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_TurnedHeatOn(class UObject* Context);
	void SET_TurnHeatOn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ExecuteUbergraph_ALI_SM_HotNBothered(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
