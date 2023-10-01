#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C
// 0x007C (0x0AE4 - 0x0A68)
class UControlledMove_PhaseLock_Base_C : public UOakControlledMove_PhaseLock
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PhaseLockEmitter;                                         // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PhaseLockStartEmitter;                                    // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FWwisePlaybackInstance                      BubbleSound;                                              // 0x0A80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             PhaseLock_Start_Emitter_Template;                         // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PhaseLock_Emitter_Template;                               // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Phaselock_End_Emitter_Template;                           // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PhaseLock_Idle_Audio;                                     // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PhaseLock_End_Audio;                                      // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleScale;                                            // 0x0AC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleLocation;                                         // 0x0ACC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ParticleRotation;                                         // 0x0AD8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C");
		return ptr;
	}


	void PlayDetach();
	void ConfigurePhaseLockProperties();
	void TryDestroyComponent(class UParticleSystemComponent* Comp);
	void OnStart(float* MoveDuration, class AActor** TargetActor);
	void OnStop(bool* bInterrupted);
	void OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator);
	void OnServerStop(bool* bInterrupted);
	void ExecuteUbergraph_ControlledMove_PhaseLock_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
