#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Homestead_Part3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Homestead_Part3.Mission_Homestead_Part3_C
// 0x00E0 (0x05F0 - 0x0510)
class UMission_Homestead_Part3_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_StartDefenseMachine_ObjSetVar;                        // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartDefenseMachine_ObjVar;                           // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Fuel_Valve_First_ObjSetVar;                           // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Fuel_Valve_First_ObjVar;                              // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Defend_ObjSetVar;                                     // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Defend_ObjVar;                                        // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnToPa_ObjSetVar;                                 // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToPa_ObjVar;                                    // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Roof_ObjSetVar;                                       // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Roof_ObjVar;                                          // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_RoofSwitch_ObjVar;                                    // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FollowPaToBArn_ObjSetVar;                             // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FollowPaToBarn_ObjVar;                                // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_PlayerMustReachBarn_ObjVar;                           // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Fuel_Valve_Second_ObjSetVar;                          // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Fuel_Valve_Second_ObjVar;                             // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Fuel_Valve_Third_ObjSetVar;                           // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Fuel_Valve_Third_ObjVar;                              // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Fuel_Valve_Fourth_ObjSetVar;                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Fuel_Valve_Fourth_ObjVar;                             // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_Ladder_ObjVar;                                    // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_PaMovedToRoof_ObjVar;                             // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_PaMustReachBarn_ObjVar;                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_OlBessie_Sequencer_ObjVar;                        // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_OlBessie_Sequencer_Undeploy_ObjVar;               // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Activate_ObjSetVar;                                   // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DefendWaves_ObjVar;                                   // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Homestead_Part3.Mission_Homestead_Part3_C");
		return ptr;
	}


	void OnDialogSequenceFinished_31();
	void OnDialogSequenceFinished_30();
	void OnDialogSequenceFinished_29();
	void OnDialogSequenceFinished_28();
	void OnDialogSequenceFinished_27();
	void OnDialogSequenceFinished_26();
	void OnDialogSequenceFinished_25();
	void OnDialogSequenceFinished_24();
	void OnDialogSequenceFinished_23();
	void OnDialogSequenceFinished_22();
	void OnDialogSequenceFinished_21();
	void OnDialogSequenceFinished_20();
	void OnDialogSequenceFinished_19();
	void OnDialogSequenceFinished_18();
	void OnDialogSequenceFinished_17();
	void Set_ReturnToPa(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReturnToPa(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerReturnsToPa(class UObject* Context);
	void Set_Roof(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Roof(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_RoofSwitch(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerReachRoof(class UObject* Context);
	void ME_PlayerUseRoofSwitch(class UObject* Context);
	void ME_PlayerFlipFuelSwitch(class UObject* Context);
	void Obj_Defend(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_Defend(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Fuel_Valve_First(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_FollowPaToBarn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FollowPaToBarn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerNearBarn(class UObject* Context);
	void Set_Fuel_Valve_First(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ME_BarnIsOpened(class UObject* Context);
	void INV_PlayerMustReachBarn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_Fuel_Valve_Second(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Fuel_Valve_Second(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_Fuel_Valve_Third(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_Fuel_Valve_Third(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Fuel_Valve_Fourth(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_Fuel_Valve_Fourth(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void PlayerHitWrenchValve(class UObject* Context);
	void PlayerTurnedFirstValve(class UObject* Context);
	void PlayerTurnedSecondValve(class UObject* Context);
	void PlayerShotLastValve(class UObject* Context);
	void Obj_StartDefenseMachine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_StartDefenseMachine(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void INV_Obj_Ladder(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_LadderWentDown(class UObject* Context);
	void INV_Obj_PaMovedToRoof(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PaEntersHouse(class UObject* Context);
	void INV_PaMustReachBarn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PaNearBarn(class UObject* Context);
	void INV_Obj_OlBessie_Sequencer(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_TurretSequencer(class UObject* Context);
	void INV_Obj_OlBessie_Sequencer_Undeploy(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_OlBessieUndeployed(class UObject* Context);
	void Set_Activate(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_RoofSwitch_Objective__PROXY();
	void _INV_Obj_PaMovedToRoof_Objective__PROXY_1();
	void Obj_DefendWaves(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_DefendWaves(class UObject* Context);
	void ExecuteUbergraph_Mission_Homestead_Part3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
