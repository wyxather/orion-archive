#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_WhenItRains_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_SM_WhenItRains.ALI_SM_WhenItRains_C
// 0x0028 (0x0520 - 0x04F8)
class UALI_SM_WhenItRains_C : public UOakMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_FindUmbrella_ObjSetVar;                               // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindUmbrella_ObjVar;                                  // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_GiveUmbrella_ObjSetVar;                               // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GiveUmbrella_ObjVar;                                  // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_WhenItRains.ALI_SM_WhenItRains_C");
		return ptr;
	}


	void OnDialogSequenceFinished_5();
	void OnDialogSequenceFinished_4();
	void MCE_FindUmbrella(class UObject* Context);
	void Obj_FindUmbrella(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_GiveUmbrella(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GiveUmbrella(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_GiveUmbrella(class UObject* Context);
	void SET_FindUmbrella(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void ExecuteUbergraph_ALI_SM_WhenItRains(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
