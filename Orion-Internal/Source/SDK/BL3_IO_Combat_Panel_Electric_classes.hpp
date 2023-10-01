#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Combat_Panel_Electric_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C
// 0x0068 (0x05B8 - 0x0550)
class AIO_Combat_Panel_Electric_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UElementalInteractionComponent*              ElementalInteraction;                                     // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ElectricityOverlap;                                       // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Shocked;                                               // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnElectrifiedStart;                                       // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnElectrifiedStop;                                        // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               StartElectrified;                                         // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class ABP_IO_Switch_Parent_V1_C*                   Switch;                                                   // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AIO_ElectricalSystem_C*                      ElectricalPiece;                                          // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C");
		return ptr;
	}


	void SetElectricalPanelState(bool Electrified);
	void UserConstructionScript();
	void StopElectrifiedFeedback();
	void StartElectrifiedFeedback();
	void ReceiveBeginPlay();
	void OnDisabled();
	void OnEnabled();
	void BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric(class UElementalInteractionData* State, bool bIsInitialState);
	void PowerOn();
	void PowerOff();
	void SwitchOn(class AActor* LastActorToUseSwitch);
	void SwitchOff(class AActor* LastActorToUseSwitch);
	void ExecuteUbergraph_IO_Combat_Panel_Electric(int EntryPoint);
	void OnElectrifiedStop__DelegateSignature();
	void OnElectrifiedStart__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
