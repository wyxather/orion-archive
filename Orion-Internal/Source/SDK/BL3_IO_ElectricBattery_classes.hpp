#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricBattery_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_ElectricBattery.IO_ElectricBattery_C
// 0x00D8 (0x0628 - 0x0550)
class AIO_ElectricBattery_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_Off;                                           // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_On;                                            // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Sparks;                                                // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ElementalOverlap;                                         // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavPaint;                                                 // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BatteryMeshBase;                                          // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UElementalInteractionComponent*              ElementalInteraction;                                     // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        Targetable;                                               // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URegionBalanceStateComponent*                RegionBalanceState;                                       // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UOakDamageComponent*                         OakDamage;                                                // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    GeneratorExploded;                                        // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UMaterialInterface*                          LightMaterial;                                            // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LightOffMaterial;                                         // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwisePlaybackInstance                      Audio_SparkLoopInstance;                                  // 0x05E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ReChargeTime;                                             // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_ElectricBatteryStates>            BatteryState;                                             // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	class APawn*                                       Attacker;                                                 // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    BatteryRecharged;                                         // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UGbxCondition*                               Cond_BatteryState_NewEnumerator1;                         // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_ElectricBattery.IO_ElectricBattery_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_Combat_Cauldron(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void ScriptedExplode();
	void ReceiveBeginPlay();
	void __UserState_BatteryState_1(bool bFromLoad);
	void __UserState_BatteryState_2(bool bFromLoad);
	void ExecuteUbergraph_IO_ElectricBattery(int EntryPoint);
	void BatteryRecharged__DelegateSignature();
	void GeneratorExploded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
