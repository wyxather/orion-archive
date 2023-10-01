#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Lilith_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Lilith.BPChar_Lilith_C
// 0x0040 (0x2620 - 0x25E0)
class ABPChar_Lilith_C : public ABPChar_NonPlayerCharacter_Combat_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x25E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x25E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Lilith_Phoenix_Wings;                                  // 0x25F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   SirenWings;                                               // 0x25F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAICloakComponent*                           AICloak;                                                  // 0x2600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIExplosiveSpawningComponent_C*             AIExplosiveSpawningComponent;                             // 0x2608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFaceFXComponent*                            FaceFX;                                                   // 0x2610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x2618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Lilith.BPChar_Lilith_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnAnimEnd_498C0BCB4003EDBE1E37BB92883040A1();
	void OnEnd_498C0BCB4003EDBE1E37BB92883040A1(EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_98BFF701491B942886E78893B6A2A693();
	void OnEnd_98BFF701491B942886E78893B6A2A693(EGbxActionEndState EndState, class AActor* Actor);
	void LilithPhaseTeleportTo(class AActor* TeleportToActor);
	void LilithSpecialDownstate();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController** UserController, class UPrimitiveComponent** UsedComponent);
	void BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Lilith();
	void DisableMissionBrain();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1554481954(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554481954();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554972557();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558081896(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void LilithWingsOn();
	void LilithWingsOff();
	void ExecuteUbergraph_BPChar_Lilith(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
