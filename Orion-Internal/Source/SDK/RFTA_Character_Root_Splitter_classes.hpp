#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Splitter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Root_Splitter.Character_Root_Splitter_C
// 0x0050 (0x0D40 - 0x0CF0)
class ACharacter_Root_Splitter_C : public ACharacter_Root_Broken_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Visual_Shield;                                            // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Heal_Loop;                                            // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Root_Replicant_Heartbeat_Idle_Loop_SC;                    // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              HeartbeatTimeline_EmisBrightness_ADB6E4D7449C705342E76BBA3940082B;// 0x0D10(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    HeartbeatTimeline__Direction_ADB6E4D7449C705342E76BBA3940082B;// 0x0D14(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D15(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HeartbeatTimeline;                                        // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthValue;                                              // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D24(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ReplicantGlow;                                            // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TweenInt;                                                 // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0D34(0x0004) MISSED OFFSET
	class AActor*                                      SpawnedShockwave;                                         // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Splitter.Character_Root_Splitter_C");
		return ptr;
	}


	void HeartbeatTimeline__FinishedFunc();
	void HeartbeatTimeline__UpdateFunc();
	void OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void Leech();
	void LeaveDormant();
	void EmisOff();
	void EmisOn();
	void BndEvt__Tween_K2Node_ComponentBoundEvent_0_TweenCompleteDelegate__DelegateSignature(class UTweenComponent** TweenComponent, int* ID);
	void SplitterShockwave();
	void DelayedSetState(float* Delay, struct FName* Name, bool* OnlyIfValid);
	void SplitterHeal();
	void SFX_HeartLoop_On();
	void SFX_HeartLoop_Off();
	void OnHealStartVFX();
	void ReceiveBeginPlay();
	void GainShield();
	void SplitterEndHeal();
	void OnSplitRight();
	void DoHealPulse();
	void ExecuteUbergraph_Character_Root_Splitter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
