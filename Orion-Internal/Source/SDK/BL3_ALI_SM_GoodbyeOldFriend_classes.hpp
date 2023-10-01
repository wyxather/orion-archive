#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_SM_GoodbyeOldFriend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_SM_GoodbyeOldFriend.ALI_SM_GoodbyeOldFriend_C
// 0x0090 (0x0588 - 0x04F8)
class UALI_SM_GoodbyeOldFriend_C : public UOakMission
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        SET_TakeAxe_ObjSetVar;                                    // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetAxe_ObjVar;                                        // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_LayBuzzAxeToRest_ObjSetVar;                           // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceBuzzAxe_ObjVar;                                  // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_EulogizeBuzzAxe_ObjSetVar;                            // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EulogizeBuzzAxe_ObjVar;                               // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_ReadyForAxeToWakeUp_ObjVar;                       // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_DoSomething_ObjSetVar;                                // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DoSomething_ObjVar;                                   // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_FinishEulogy_ObjSetVar;                               // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Ob_FinishEulogy_ObjVar;                                   // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_KreigsEulogy_ObjSetVar;                               // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Ob_KriegsEulogy_ObjVar;                                   // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_BuryAxe_ObjSetVar;                                    // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Ob_BuryAxe_ObjVar;                                        // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_RealKillBuzzaxeCheck_ObjVar;                          // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_MoundInUse_ObjVar;                                    // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_GoodbyeOldFriend.ALI_SM_GoodbyeOldFriend_C");
		return ptr;
	}


	void OnDialogSequenceFinished_21();
	void OnDialogSequenceFinished_20();
	void OnDialogSequenceFinished_19();
	void OnDialogSequenceFinished_18();
	void OnDialogSequenceFinished_17();
	void OnDialogSequenceFinished_16();
	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished_14();
	void OnDialogSequenceFinished_13();
	void OnDialogSequenceFinished_12();
	void Obj_GetAxe(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_GotAxe(class UObject* Context);
	void SET_TakeAxe(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SET_LayBuzzAxeToRest(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PlaceBuzzAxe(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlaceBuzzAxe(class UObject* Context);
	void MissionKickoff();
	void Obj_EulogizeBuzzAxe(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_EulogizeBuzzAxe(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void INV_Obj_ReadyForAxeToWakeUp(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_DoSomething(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_DoSomething(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_KilledBuzzAxe(class UObject* Context);
	void SET_FinishEulogy(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Ob_FinishEulogy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_KreigsEulogy(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Ob_KriegsEulogy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_BuryAxe(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Ob_BuryAxe(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_RealKillBuzzaxeCheck(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_BuriedAxe(class UObject* Context);
	void INV_MoundInUse(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_SetMoundNotInUse(class UObject* Context);
	void Nag();
	void ExecuteUbergraph_ALI_SM_GoodbyeOldFriend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
