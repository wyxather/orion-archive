#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_ParadeHarpoon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C
// 0x0038 (0x0530 - 0x04F8)
class UALI_SM_ParadeHarpoon_C : public UOakMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_FindHarpoon_ObjSetVar;                                // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindHarpoon_ObjVar;                                   // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_TakeHarpoon_ObjSetVar;                                // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TakeHarpoon_ObjVar;                                   // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_GiveHarpoon_ObjSetVar;                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GiveHarpoon_ObjVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C");
		return ptr;
	}


	void OnDialogSequenceFinished_7();
	void OnDialogSequenceFinished_6();
	void OnDialogSequenceFinished_5();
	void SET_TakeHarpoon(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TakeHarpoon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_TakeHarpoon(class UObject* Context);
	void MCE_FindHarpoon(class UObject* Context);
	void Obj_FindHarpoon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_GiveHarpoon(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GiveHarpoon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_GiveHarpoon(class UObject* Context);
	void SET_FindHarpoon(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void ExecuteUbergraph_ALI_SM_ParadeHarpoon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
