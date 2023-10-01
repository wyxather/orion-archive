#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricGenerator_GroundSwitch_Combat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_ElectricGenerator_GroundSwitch_Combat.IO_ElectricGenerator_GroundSwitch_Combat_C
// 0x00C0 (0x0640 - 0x0580)
class AIO_ElectricGenerator_GroundSwitch_Combat_C : public AIO_ElectricalSystem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TargetBoxRight;                                           // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDamageComponent*                         OakDamage;                                                // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TargetBoxLeft;                                            // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UElementalInteractionComponent*              ElementalInteraction;                                     // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavPaintBox;                                              // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Generator_TopShocks1;                                  // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Generator_Smoke1;                                      // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_TargetSwitch_Target;                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lever_Handle;                                          // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ElectricalConductionAndDamageBox;                         // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Generator_Tall;                                        // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_ArmMovement_877CACDC4D482A72DC2D8888BB44C12E;  // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_TargetRotation_877CACDC4D482A72DC2D8888BB44C12E;// 0x05F4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_877CACDC4D482A72DC2D8888BB44C12E;   // 0x05F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Transition_ArmMovement_6B513A3347626005084FF483B87A85DD;// 0x0608(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Transition_TargetRotation_6B513A3347626005084FF483B87A85DD;// 0x060C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Transition__Direction_6B513A3347626005084FF483B87A85DD;// 0x0610(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0611(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Transition;                                      // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<Enum_ElectricSwitchVisibility>         Switch_Visibilty;                                         // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_ElectricState>                    SwitchState;                                              // 0x0621(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Starts_On;                                                // 0x0622(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0623(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicEmissive;                                          // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxCondition*                               Cond_Switch_Visibilty_NewEnumerator1;                     // 0x0630(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_SwitchState_NewEnumerator0;                          // 0x0638(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_ElectricGenerator_GroundSwitch_Combat.IO_ElectricGenerator_GroundSwitch_Combat_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_Transition__FinishedFunc();
	void Timeline_Transition__UpdateFunc();
	void ElecticityPresentation(bool On);
	void __UserState_SwitchState_2(bool bFromLoad);
	void __UserState_SwitchState_1(bool bFromLoad);
	void ReceiveBeginPlay();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_ElectricGenerator_GroundSwitch_Combat(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void HitLeft();
	void HitRight();
	void AudioHitSwitch();
	void ExecuteUbergraph_IO_ElectricGenerator_GroundSwitch_Combat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
