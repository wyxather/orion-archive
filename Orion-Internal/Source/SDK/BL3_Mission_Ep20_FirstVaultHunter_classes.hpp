#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Ep20_FirstVaultHunter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Ep20_FirstVaultHunter.Mission_Ep20_FirstVaultHunter_C
// 0x01E8 (0x06F8 - 0x0510)
class UMission_Ep20_FirstVaultHunter_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	int                                                Crystal_Grabbed;                                          // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Crystal_Placed;                                           // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Weapon_Crystal_Grabbed;                                   // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Weapon_Crystal_Placed;                                    // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_PlanetTitleCard_ObjSetVar;                            // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlanetTitleCard_ObjVar;                               // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TyphonTitleCard_ObjSetVar;                            // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           obj_TyphonTitleCard_ObjVar;                               // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_PlaceVaultKeys_Start_ObjSetVar;                       // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceVaultKey_Desert_ObjVar;                          // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MeetTyphon_ObjVar;                                    // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EnterCave_ObjVar;                                     // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToCoordinates_PreCamp_ObjSetVar;                    // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToCoordiantes_ObjVar;                               // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_EnterCave_ObjSetVar;                                  // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToCoordiantesPreCamp_BC1_ObjVar;                    // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToCoordiantes_BC2_ObjVar;                           // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToCoordiantes_BC3_ObjVar;                           // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToCoordiantes_BC4_ObjVar;                           // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToBridge_ObjSetVar;                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToSancBridge_ObjVar;                                // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillBugs_ObjSetVar;                                   // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBugs_ObjVar;                                      // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SwitchPower_ObjVar;                                   // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToCoordinates_PostCamp_ObjSetVar;                   // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToCoordiantesPreCamp_BC2_ObjVar;                    // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ActivatePowerAndMeleeVines_ObjSetVar;                 // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FollowFinchToResearchCenter_ObjVar;                   // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FollowFinch_ObjSetVar;                                // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_GoToTyphon_ObjVar;                                // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FollowBotsToTyphon_ObjSetVar;                         // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_MeetTyphonComplete_ObjSetVar;                         // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceVaultKey_Wetlands_ObjVar;                        // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceVaultKey_City_ObjVar;                            // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_WelcomeDialogDone_ObjVar;                         // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_GoToCoordnatesInitial_ObjVar;                     // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Navigate_NewPlanet_ObjSetVar;                         // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_Navigate_Nekrotafayo_ObjVar;                          // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_UseDropPodOnSanctuary_ObjSetVar;                      // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_ReNavigate_Nekro_ObjVar;                              // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseDropPod_ObjVar;                                    // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_UseDropPod_OnPlanet_ObjSetVar;                        // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FollowTyphon_ObjSetVar;                               // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FollowTyphon_ObjVar;                                  // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_TyphonArrivedAtKeys_ObjVar;                           // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_TyphonDoneDemonstratingFabricator_ObjVar;             // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_TyphonArrivedAtWhipSpot_ObjVar;                       // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_PlayeArrivedAtWhipSpot_ObjVar;                        // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToCoordiantes_TannisFillerVO_01_ObjVar;             // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToCoordiantes_TannisFillerVO_02_ObjVar;             // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DoneFiringFinalFabricator_ObjVar;                     // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FireFinalFabricator_ObjSetVar;                        // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_StartConvo_NekroIntro_ObjVar;                     // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_Convo_NekroIntro_ObjVar;                          // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ReturnToSanctuary_ObjSetVar;                          // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToSanctuary_ObjVar;                             // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GoToLab_ObjSetVar;                                    // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToLab_ObjVar;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_AnalyzeSlab_ObjVar;                                   // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_AnalyzeSlab_ObjSetVar;                                // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceKeys_ObjVar;                                     // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DiscoverMaliwan_ObjVar;                               // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Ep20_FirstVaultHunter.Mission_Ep20_FirstVaultHunter_C");
		return ptr;
	}


	void OnDialogSequenceFinished_37();
	void OnDialogSequenceFinished_36();
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
	void MCE_PlayerWentToCoordinates_BC4(class UObject* Context);
	void Obj_GoToCoordiantes_BC4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToBridge(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToSancBridge(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerReachedBridge(class UObject* Context);
	void Set_KillBugs(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_PlayerKilledAllBugs(class UObject* Context);
	void Obj_KillBugs(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Player_Placed_Vault_Key_Desert(class UObject* Context);
	void Obj_PlaceVaultKey_Desert(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerSwitchedPower(class UObject* Context);
	void Obj_SwitchPower(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToCoordinates_PostCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_PlayerWentToCoordinatesPreCamp_BC2(class UObject* Context);
	void Obj_GoToCoordiantesPreCamp_BC2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_ActivatePowerAndMeleeVines(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_GoToCoordiantes_Objective__PROXY();
	void Obj_FollowFinchToResearchCenter(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerArrivedAtResearchCenter(class UObject* Context);
	void Set_FollowFinch(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_PlaceVaultKeys_Start(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToCoordiantes_BC3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerWentToCoordinates_BC3(class UObject* Context);
	void Obj_GoToCoordiantes_BC2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_Obj_GoToTyphon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerArrivedAtTyphon(class UObject* Context);
	void Set_FollowBotsToTyphon(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_MeetTyphon_Objective__PROXY_1();
	void _Obj_MeetTyphon_Objective__PROXY_2();
	void Set_MeetTyphonComplete(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_PlayerWentToCoordinates_BC2(class UObject* Context);
	void Obj_PlaceVaultKey_Wetlands(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Player_Placed_Vault_Key_Wetlands(class UObject* Context);
	void Obj_PlaceVaultKey_City(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Player_Placed_Vault_Key_City(class UObject* Context);
	void obj_TyphonTitleCard(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_Obj_WelcomeDialogDone(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_TyphonTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_PlayerWentToCoordinatesPreVines(class UObject* Context);
	void INV_Obj_GoToCoordnatesInitial(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_GoToCoordiantesPreCamp_BC1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void OBJ_Navigate_Nekrotafayo(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_Navigate_NewPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_Navigate_NewPlanet(class UObject* Context);
	void MCE_PlayerWentToCoordinatesPreCamp_BC1(class UObject* Context);
	void Advance_Navigate_NewPlanet(class UObject* Context);
	void OBJ_ReNavigate_Nekro(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_UseDropPodOnSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_MeetTyphon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_ReNavigate_NewPlanet(class UObject* Context);
	void AdvanceToNekroTitleCard(class UObject* Context);
	void Set_PlanetTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_UseDropPod_OnPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _OBJ_UseDropPod_Objective__PROXY_3();
	void Set_FollowTyphon(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FollowTyphon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Player_FollowedTyphon(class UObject* Context);
	void INV_TyphonArrivedAtKeys(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_TyphonDoneDemonstratingFabricator(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_TyphonArrivedAtWhipSpot(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_TyphonArrivedAtWhipSpot(class UObject* Context);
	void INV_PlayeArrivedAtWhipSpot(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerArrivedAtWhipSpot(class UObject* Context);
	void MCE_PlayerMetTyphon(class UObject* Context);
	void MCE_TriggerTannisFillerVO_2(class UObject* Context);
	void Obj_GoToCoordiantes_TannisFillerVO_01(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_PlanetTitleCard(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_TriggerTannisFillerVO_3(class UObject* Context);
	void Obj_GoToCoordiantes_TannisFillerVO_02(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_EnterCave(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_TyphonDoneDemonstratingFabricator(class UObject* Context);
	void Obj_DoneFiringFinalFabricator(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_TyphonDoneFiringFinalFabricator(class UObject* Context);
	void Set_FireFinalFabricator(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void INV_Obj_StartConvo_NekroIntro(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_Obj_Convo_NekroIntro(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ConvoStart_ClaptrapPanic(class UObject* Context);
	void Set_ReturnToSanctuary(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReturnToSanctuary(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ReturnedToSancuary(class UObject* Context);
	void MCE_AdvanceToLab(class UObject* Context);
	void Set_GoToLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToLab(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_EnteredLab(class UObject* Context);
	void Obj_AnalyzeSlab(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_AnalyzedSlab(class UObject* Context);
	void Set_AnalyzeSlab(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_AdvanceNekroIntro(class UObject* Context);
	void MCE_CompleteTravelToNekro(class UObject* Context);
	void Update_TyphonAtKeys(class UObject* Context);
	void Obj_PlaceKeys(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_PlaceVaultKey_Desert_Objective__PROXY_4();
	void _Obj_PlaceVaultKey_Wetlands_Objective__PROXY_5();
	void _Obj_PlaceVaultKey_City_Objective__PROXY_6();
	void Obj_DiscoverMaliwan(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_DiscoverMaliwan(class UObject* Context);
	void Obj_GoToCoordiantes(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToCoordinates_PreCamp(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_PlayerEnteredCave(class UObject* Context);
	void CE_PlayEridianWritingIntro();
	void Obj_EnterCave(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerWentToCoordinates(class UObject* Context);
	void ExecuteUbergraph_Mission_Ep20_FirstVaultHunter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
