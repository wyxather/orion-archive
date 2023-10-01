#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Ep22_TheMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Ep22_TheMachine.Mission_Ep22_TheMachine_C
// 0x0228 (0x0738 - 0x0510)
class UMission_Ep22_TheMachine_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_GoToTheCryptEntrance_ObjSetVar;                       // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToTheCryptEntrance_ObjVar;                          // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FindEridianControlConsole_ObjSetVar;                  // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindEridianControlConsole_ObjVar;                     // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GivePandoraVaultKeyToTannis_ObjSetVar;                // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GivePandoraVaultKeyToTannis_ObjVar;                   // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToPrometheaActivator1_ObjSetVar;                    // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToPrometheaActivator1_ObjVar;                       // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UsePrometheaVaultKey_ObjSetVar;                       // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UsePrometheaVaultKey_ObjVar;                          // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FollowTyphonToMantleArea_ObjSetVar;                   // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FollowTyphonToMantleArea_ObjVar;                      // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseEridianSwitchMantlingON_ObjSetVar;                 // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseEridianSwitchMantlingON_ObjVar;                    // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_MantleToNextLevel_ObjSetVar;                          // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MantleToNextLevel_ObjVar;                             // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToEden_6Activator2_ObjSetVar;                       // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToEden_6Activator2_ObjVar;                          // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseEden_6VaultKey_ObjSetVar;                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseEden_6VaultKey_ObjVar;                             // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToSwitches_ObjSetVar;                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToSwitches_ObjVar;                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseDoubleSwitch_ObjSetVar;                            // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseDoubleSwitch_ObjVar;                               // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GotoJumpSection_ObjSetVar;                            // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToJumpSection_ObjVar;                               // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToNekrotafeyoActivator3_ObjSetVar;                  // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToNekrotafeyoActivator3_ObjVar;                     // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseNekrotafeyoVaultKey_ObjSetVar;                     // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseNekrotafeyoVaultKey_ObjVar;                        // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TalkToTannisPreFinalFight_ObjSetVar;                  // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TalkToTannisPreFinalFight_ObjVar;                     // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ProtectTannis_ObjSetVar;                              // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ProtectTannis_ObjVar;                                 // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseNeckroVaultKeyToEnterCrypt_ObjSetVar;              // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseNeckroVaultKeyToEnterCrypt_ObjVar;                 // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_EnterTheCrypt_ObjSetVar;                              // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EnterTheCrypt_ObjVar;                                 // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_CryptCutScene_ObjSetVar;                              // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CryptCutScene_ObjVar;                                 // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_MissionComplete_ObjSetVar;                            // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MissionComplete_ObjVar;                               // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnToSanc_3_TheMachine_ObjSetVar;                  // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GiveNeckroVaultKeyToTannis_ObjVar;                    // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ArrivedAtSanc_3_TheMachine_ObjVar;                    // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PauseBeforeOpeningPath_ObjVar;                        // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TakeNeckroVaultKeyFromAva_ObjSetVar;                  // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TakeNeckroVaultKeyFromAva_ObjVar;                     // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GuardiansSpottedActivator1_ObjVar;                    // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoThruJumpSection_ObjSetVar;                          // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoThruJumpSection_ObjVar;                             // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MantleAreaEridianDoor_ObjVar;                         // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Activator2EridianDoor_ObjVar;                         // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Activator3EridianDoor_ObjVar;                         // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INV_CrossTheBridge_ObjVar;                            // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ArrivedAtSanc_3Lab_ObjVar;                            // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GiveNeckroVaultKeyToTannis_ObjSetVar;                 // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnToDesolate_TheMachine_ObjSetVar;                // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToDesolate_TheMachine_ObjVar;                   // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EridianDoorControlConsole_INV_ObjVar;                 // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TannisMoveToConsole_INV_ObjVar;                       // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EridianDoorDoubleSwitch_ObjVar;                       // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GotoFirstGeyser_ObjVar;                               // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TyphonMoveToMantleArea_ObjVar;                        // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PauseBeforeCombatForVO_ObjVar;                        // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ConsoleCrystalOFF_ObjVar;                             // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_NekrotafeyoVaultKeyDoor_ObjVar;                       // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ContinueToEden_6Activator2_ObjVar;                    // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Ep22_TheMachine.Mission_Ep22_TheMachine_C");
		return ptr;
	}


	void OnDialogSequenceFinished_35();
	void OnDialogSequenceFinished_34();
	void OnDialogSequenceFinished_33();
	void OnDialogSequenceFinished_32();
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
	void Obj_GoToSwitches(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToSwitches(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_UseDoubleSwitch(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_UseDoubleSwitch(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Double_Switch(class UObject* Context);
	void Update_Use_Eden_6_Vault_Key(class UObject* Context);
	void Set_GoToJumpSection(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToJumpSection(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Go_To_Jump_Section(class UObject* Context);
	void Obj_UseEden_6VaultKey(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToNekrotafeyoActivator3(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToNekrotafeyoActivator3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Go_To_Nekrotafeyo_Activator_3(class UObject* Context);
	void Set_UseEden_6VaultKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_UseNekrotafeyoVaultKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_UseNekrotafeyoVaultKey(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Use_Nekrotafeyo_Vault_Key(class UObject* Context);
	void Update_Go_To_Eden_6_Activator_2(class UObject* Context);
	void Set_TalkToTannisPreFinalFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TalkToTannisPreFinalFight(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Talk_To_Tannis_Pre_Final_Fight(class UObject* Context);
	void Obj_GoToEden_6Activator2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToEden_6Activator2(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ProtectTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ProtectTannis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Protect_Tannis(class UObject* Context);
	void Update_Mantle_To_Next_Level(class UObject* Context);
	void Set_UseNeckroVaultKeyToEnterCrypt(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_UseNeckroVaultKeyToEnterCrypt(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Use_Neckro_Vault_Key_To_Enter_Crypt(class UObject* Context);
	void Obj_MantleToNextLevel(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_EnterTheCrypt(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_EnterTheCrypt(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Enter_The_Crypt(class UObject* Context);
	void Set_MantleToNextLevel(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_CryptCutScene(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_CryptCutScene(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_MissionComplete(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_MissionComplete(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Use_Eridian_Switch_Mantling_ON(class UObject* Context);
	void Obj_UseEridianSwitchMantlingON(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_ReturnToSanc_3_TheMachine(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GiveNeckroVaultKeyToTannis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Give_Neckro_Vault_Key_To_Tannis(class UObject* Context);
	void Set_UseEridianSwitchMantlingON(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_Take_Neckro_Vault_Key_From_Ava(class UObject* Context);
	void Update_Follow_Typhon_To_Mantle_Area(class UObject* Context);
	void Set_GivePandoraVaultKeyToTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ArrivedAtSanc_3_TheMachine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Arrived_At_Sanc_3(class UObject* Context);
	void Obj_FollowTyphonToMantleArea(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_PauseBeforeOpeningPath(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Pause_Before_Opening_Path(class UObject* Context);
	void Set_TakeNeckroVaultKeyFromAva(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TakeNeckroVaultKeyFromAva(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_FollowTyphonToMantleArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GuardiansSpottedActivator1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Guardians_Spotted_Activator_1(class UObject* Context);
	void Update_Arrived_At_Switches(class UObject* Context);
	void Update_Use_Promethea_Vault_Key(class UObject* Context);
	void Update_Tyreen_Firehawks_In_CoV(class UObject* Context);
	void Obj_UsePrometheaVaultKey(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_UsePrometheaVaultKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_GoThruJumpSection(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoThruJumpSection(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Go_Thru_Jump_Section(class UObject* Context);
	void Update_Typhon_At_Switches(class UObject* Context);
	void Update_Mantle_Area_Eridian_Door(class UObject* Context);
	void Obj_MantleAreaEridianDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Activator_2_Eridian_Door(class UObject* Context);
	void Obj_Activator2EridianDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Activator_3_Eridian_Door(class UObject* Context);
	void Obj_Activator3EridianDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_INV_CrossTheBridge(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_CrossedTheBridge(class UObject* Context);
	void Update_Arrived_At_Sanc_3_Lab(class UObject* Context);
	void Obj_ArrivedAtSanc_3Lab(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Go_To_Promethea_Activator_1(class UObject* Context);
	void Set_GiveNeckroVaultKeyToTannis(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToPrometheaActivator1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_ReturnToDesolate_TheMachine(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_Return_To_Desolate_The_Machine(class UObject* Context);
	void Obj_ReturnToDesolate_TheMachine(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToPrometheaActivator1(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_Eridian_Door_Control_Console(class UObject* Context);
	void Obj_EridianDoorControlConsole_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Tannis_Move_To_Console(class UObject* Context);
	void Obj_TannisMoveToConsole_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_EridianDoorDoubleSwitch(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Eridian_Door_Double_Switch(class UObject* Context);
	void Obj_GoToFirstGeyser(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Go_To_First_Geyser(class UObject* Context);
	void Update_Typhon_Move_To_Mantle_Area(class UObject* Context);
	void Obj_TyphonMoveToMantleArea(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Give_Pandora_Vault_Key_To_Tannis(class UObject* Context);
	void Obj_GivePandoraVaultKeyToTannis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_PauseBeforeCombatForVO(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Pause_Before_Combat_For_VO(class UObject* Context);
	void Update_Find_Eridian_Control_Console(class UObject* Context);
	void Obj_ConsoleCrystalOFF(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Console_Crystal_OFF(class UObject* Context);
	void Obj_NekrotafeyoVaultKeyDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Nekrotafeyo_Vault_Key_Door(class UObject* Context);
	void Obj_ContinueToEden_6Activator2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Continue_To_Eden_6_Activator_2(class UObject* Context);
	void AdvanceTo_ReturnToDesolate(class UObject* Context);
	void Obj_FindEridianControlConsole(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_FindEridianControlConsole(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_Go_To_The_Crypt_Entrance(class UObject* Context);
	void Obj_GoToTheCryptEntrance(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToTheCryptEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ExecuteUbergraph_Mission_Ep22_TheMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
