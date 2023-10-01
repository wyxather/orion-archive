#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_StrongBones_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_SM_StrongBones.ALI_SM_StrongBones_C
// 0x0028 (0x0520 - 0x04F8)
class UALI_SM_StrongBones_C : public UOakMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_DrinkYourMilk_ObjSetVar;                              // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DrinkYourMilk_1_ObjVar;                               // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DrinkYourMilk_2_ObjVar;                               // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DrinkYourMilk_3_ObjVar;                               // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_StrongBones.ALI_SM_StrongBones_C");
		return ptr;
	}


	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OnDialogSequenceFinished_7();
	void OnDialogSequenceFinished_6();
	void MCE_DrinkYourMilk_2(class UObject* Context);
	void Obj_DrinkYourMilk_2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_DrinkYourMilk(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void Obj_DrinkYourMilk_3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_DrinkYourMilk_3(class UObject* Context);
	void Obj_DrinkYourMilk_4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_DrinkYourMilk_4(class UObject* Context);
	void ExecuteUbergraph_ALI_SM_StrongBones(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
