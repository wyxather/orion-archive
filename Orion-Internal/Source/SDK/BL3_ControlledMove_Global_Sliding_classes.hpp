#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Global_Sliding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C
// 0x0048 (0x08F0 - 0x08A8)
class UControlledMove_Global_Sliding_C : public UOakControlledMove
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (Transient, DuplicateTransient)
	class APlayerController*                           PlayerController;                                         // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x08B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideTime;                                                // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlideOffLedgeMaxDuration;                                 // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class UClass*                                      ArtifactSlideDamageType;                                  // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABPChar_Player_C*                            BPChar_Player;                                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideDistance;                                            // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DamageScaleCurve;                                         // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C");
		return ptr;
	}


	void OnStart(float* MoveDuration, class AActor** TargetActor);
	void OnStop(bool* bInterrupted);
	void OnHitTargetable(class AActor** HitActor, struct FVector* HitNormal);
	void OnHitWorld(class AActor** HitActor, struct FVector* HitNormal);
	void SlideDuration();
	void MovementChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void OnHitDamageable(class AActor* HitActor, const struct FVector& HitNormal);
	void OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator);
	void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnServerStop(bool* bInterrupted);
	void ExecuteUbergraph_ControlledMove_Global_Sliding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
