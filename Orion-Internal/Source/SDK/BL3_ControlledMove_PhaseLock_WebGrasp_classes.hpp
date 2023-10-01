#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_WebGrasp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C
// 0x007C (0x0B60 - 0x0AE4)
class UControlledMove_PhaseLock_WebGrasp_C : public UControlledMove_PhaseLock_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE8(0x0008) (Transient, DuplicateTransient)
	struct FStatusEffectInstanceReference              StatusEffectRef;                                          // 0x0AF0(0x0018) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FDataTableValueHandle                       GraspDamagePerSecond;                                     // 0x0B08(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPhaseTranceActivationComboData             ComboData;                                                // 0x0B20(0x0018) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	float                                              StoredDamage;                                             // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B3C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    SlamEmitter;                                              // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDataTableValueHandle                       EssenceGraspDurationIncrease;                             // 0x0B48(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C");
		return ptr;
	}


	void PlayFeedback();
	void SetGraspTimerRunning(bool bRes);
	void GraspFinishLeech();
	void OnGraspLeechTarget(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void DoPhaseTranceEffects();
	void DispatchGraspTargetDiedEvent(class AGbxCharacter* Killer);
	void UnpackComboData();
	void ConfigureEmitters();
	void DispatchGraspedEvent();
	void RemoveElementalEffect();
	void ApplyElementalEffect();
	void OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator);
	void OnServerStop(bool* bInterrupted);
	void ConfigurePhaseLockProperties();
	void OnControlledCharacterDied(class AActor* Receiver, class AActor* Causer);
	void ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
