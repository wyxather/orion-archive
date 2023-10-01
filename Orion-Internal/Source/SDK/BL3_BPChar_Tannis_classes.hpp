#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tannis_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Tannis.BPChar_Tannis_C
// 0x0042 (0x25D2 - 0x2590)
class ABPChar_Tannis_C : public ABPChar_NonPlayerCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2590(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Vault_Key;                                             // 0x2598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   VaultKeySwitch;                                           // 0x25A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DefaultAudioComponent;                                    // 0x25A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Wings;                                                    // 0x25B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPNPCFightForYourLifeComponent_C*           BPNPCFightForYourLifeComponent;                           // 0x25B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFaceFXComponent*                            FaceFX;                                                   // 0x25C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x25C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WingsOn;                                                  // 0x25D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BloodOn;                                                  // 0x25D1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Tannis.BPChar_Tannis_C");
		return ptr;
	}


	void OnRep_BloodOn();
	void OnRep_NewVar_1();
	void UserConstructionScript();
	void TannisTakeKey();
	void TannisBeginTakeKey();
	void HideKey();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_UNIX1559058710();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ToggleWings(bool ShowWings);
	void TryToTakeSomethingElse();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Tannis(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void DisableMissionBrain();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558430371(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1558430371();
	void ReceiveBeginPlay();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_UNIX1555086662(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void TannisBloodMatOn();
	void ExecuteUbergraph_BPChar_Tannis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
