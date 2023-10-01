#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_Ep02_Sacrifice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_M_Ep02_Sacrifice.Prologue_M_Ep02_Sacrifice_C
// 0x0068 (0x04E0 - 0x0478)
class APrologue_M_Ep02_Sacrifice_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      VehicleOne;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      VehicleThree;                                             // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      VehicleTwo;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                HijackedVehicleCount;                                     // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class AActor*                                      PlayerOccupiedVehicle;                                    // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AIO_MissionDamageable_GetWrecked_VaughnChain_C* IO_MissionDamageable_GetWrecked_VaughnChain_1344_ExecuteUbergraph_Prologue_M_Ep02_Sacrifice_RefProperty;// 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_VaughnEscort_12_ExecuteUbergraph_Prologue_M_Ep02_Sacrifice_RefProperty;// 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_LilithToHerOffice_4_ExecuteUbergraph_Prologue_M_Ep02_Sacrifice_RefProperty;// 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_ClaptrapToFinalSpotInZone_5_ExecuteUbergraph_Prologue_M_Ep02_Sacrifice_RefProperty;// 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_VaughnEscort_24_ExecuteUbergraph_Prologue_M_Ep02_Sacrifice_RefProperty;// 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_VaughnEscort_13_ExecuteUbergraph_Prologue_M_Ep02_Sacrifice_RefProperty;// 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_Lilith_ExecuteUbergraph_Prologue_M_Ep02_Sacrifice_RefProperty;// 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_M_Ep02_Sacrifice.Prologue_M_Ep02_Sacrifice_C");
		return ptr;
	}


	void OnDialogSequenceFinished_3();
	void OnCompleted_90C517F0445920D4982277997EC43F5F();
	void OnAborted_90C517F0445920D4982277997EC43F5F();
	void OnCompleted_8D4C450B4A4D577F0742BF866A1FF371();
	void OnAborted_8D4C450B4A4D577F0742BF866A1FF371();
	void OnCompleted_AE65A8DA458A12C8FB0B9B9154DE77D4();
	void OnAborted_AE65A8DA458A12C8FB0B9B9154DE77D4();
	void OnCompleted_6D1BC6144F441053F4B941AAB06D355F();
	void OnAborted_6D1BC6144F441053F4B941AAB06D355F();
	void CE_VaughnUpsidedownChatter();
	void CE_StopVaughnUpsideDownChatter();
	void BndEvt__OakTriggerCapsule_VaughnScreamsForHelp_K2Node_ActorBoundEvent_50_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_VaughnScreamsForHelp_K2Node_ActorBoundEvent_51_OakUnTouchedTriggerDelegate__DelegateSignature(class AActor* LeavingActor, bool bIsPlayer);
	void MRE_StopVaughnUpsideDownChatter();
	void MRE_VaughnLeadingPlayer();
	void MRE_VaughnBeeLineItToLiliths();
	void BndEvt__OakTriggerVolume_ArriveWithVaughnOnSkagRidge_K2Node_ActorBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_Prologue_Mission2_UNIX1547671407();
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_Prologue_Mission3b_UNIX1547672453();
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_Prologue_Mission2_UNIX1547672478();
	void MRE_MakeVaughnsShoesDamageable();
	void BndEvt__OakTriggerVolume_M_E02_LilithSpeaksAboutSunsmashers_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_LilithVOG_Rambling_K2Node_ActorBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_3_K2Node_ActorBoundEvent_4_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_5_K2Node_ActorBoundEvent_5_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MRE_VaughnLooksAtLilithandLilithLooksAtVaughn();
	void MRE_StopLookingAtEachOtherVaughnAndLilith();
	void MRE_GoldenCalves_VaughnPose();
	void MRE_ResetLilithSpawner();
	void DestroyLilith();
	void ExecuteUbergraph_Prologue_M_Ep02_Sacrifice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
