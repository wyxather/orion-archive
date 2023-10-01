#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_WitchesBrew_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_WitchesBrew.Mission_WitchesBrew_C
// 0x012C (0x063C - 0x0510)
class UMission_WitchesBrew_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_SeeWitch_ObjSetVar;                                   // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SeeWitch_ObjVar;                                      // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FollowPygmimus_ObjSetVar;                             // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FollowSaurian_ObjVar;                                 // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GatherBloom_Green_ObjVar;                             // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TakeBloomBack_ObjSetVar;                              // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReturnToAzalea_ObjVar;                                // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillBloomTinks_ObjSetVar;                             // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBloomTinks_ObjVar;                                // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GatherBloom_ObjSetVar;                                // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_SpeaktoCleotus_ObjSetVar;                             // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SpeaktoCleotus_ObjVar;                                // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_DepositRedBloom_ObjSetVar;                            // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DepositRedBloom_ObjVar;                               // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TakeGrenade_ObjSetVar;                                // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TakeGrenade_ObjVar;                                   // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_DestroyTheVat_ObjSetVar;                              // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroyTheVat_ObjVar;                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_DestroyAllTheVats_ObjSetVar;                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroyAllTheVats_ObjVar;                             // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillWitch_ObjSetVar;                                  // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillWitch_ObjVar;                                     // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TurnInCleotus_ObjSetVar;                              // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnInCleotus_ObjVar;                                 // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KilledFirstSaurus_ObjVar;                             // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_WitchYell_ObjVar;                                     // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GatherBloomd_Red_ObjVar;                              // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FollowSaurian_Invis_ObjVar;                           // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_GatherBloom_Red_ObjSetVar;                            // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GatherBloom_Invis_ObjVar;                             // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TinkOpensGate_Invis_ObjVar;                           // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FinishDialog_MurlIntro_ObjVar;                        // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DepositBloom_Green_ObjVar;                            // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_DepositGreenBloom_ObjSetVar;                          // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_WieldMissionWeapon_ObjVar;                            // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         Convo_PlayItCool;                                         // 0x0630(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_WitchesBrew.Mission_WitchesBrew_C");
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
	void Set_SeeWitch(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_SeeWitch(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_FollowPygmimus(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FollowSaurian(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_GatherBloom_Green(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_TakeBloomBack(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReturnToAzalea(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillBloomTinks(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillBloomTinks(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GatherBloom(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ME_TalkedToWitch(class UObject* Context);
	void ME_DepositBloom_Green(class UObject* Context);
	void Set_SpeaktoCleotus(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_SpeaktoCleotus(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_DepositRedBloom(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DepositRedBloom(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_TakeGrenade(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TakeGrenade(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_DestroyTheVat(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DestroyTheVat(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_DestroyAllTheVats(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DestroyAllTheVats(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillWitch(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillWitch(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_TurnInCleotus(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TurnInCleotus(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_ReachedCaves(class UObject* Context);
	void ME_TalkedToTowny(class UObject* Context);
	void ME_MissionTurnedIn(class UObject* Context);
	void ME_SwampBloomDeposited(class UObject* Context);
	void ME_PlayerTakesGrenade(class UObject* Context);
	void ME_TinkGateCrash(class UObject* Context);
	void Obj_KilledFirstSaurus(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_DepositBloom_Green(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_ReturnedToAzalea(class UObject* Context);
	void Obj_WitchYell(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void WitchYell(class UObject* Context);
	void Obj_GatherBloomd_Red(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_FollowSaurian_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_FollowSaurian_Objective__PROXY();
	void Set_GatherBloom_Red(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_GatherBloom_Green_Objective__PROXY_1();
	void _Obj_FollowSaurian_Objective__PROXY_2();
	void Obj_GatherBloom_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UpdateObjective_GatherBloomInvis();
	void ME_ReachedBridge(class UObject* Context);
	void _Obj_GatherBloom_Green_Objective__PROXY_3();
	void _Obj_GatherBloom_Invis_Objective__PROXY_4();
	void ME_ReachedDigSite(class UObject* Context);
	void ME_Vat_InitialVatDestroyed(class UObject* Context);
	void Obj_TinkOpensGate_Invis(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_FinishDialog_MurlIntro(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_DepositGreenBloom(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void PlaySequencedVatDialog();
	void MissionKickoff();
	void Obj_WieldMissionWeapon(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_WieldMissionWeapon_Objective__PROXY_5();
	void Update_DestroyVat(class UObject* Context);
	void ME_ReachWitch|Area(class UObject* Context);
	void BlockTriggerVolume_Bridge();
	void BlockTriggerVolume_Caves();
	void ExecuteUbergraph_Mission_WitchesBrew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
