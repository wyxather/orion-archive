#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIStolenProjDetector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIStolenProjDetector.AIStolenProjDetector_C
// 0x0041 (0x0861 - 0x0820)
class UAIStolenProjDetector_C : public UAIStolenProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    AIStolenProjectileUpdated;                                // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               OvercameChanceToInteract;                                 // 0x0838(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0839(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    AIStolenProjectileReturnFX;                               // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AIStolenProjectileDestroyFX;                              // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<Enum_AIThrowAtStyle>                   MyReturnStyle;                                            // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIStolenProjDetector.AIStolenProjDetector_C");
		return ptr;
	}


	void AIStolenProj_AttemptDetonate(bool* Success);
	void AIStolenProj_AttemptDisarm(bool* Success);
	void AIStolenProj_AttemptDestroy(bool* Success);
	void AIStolenProj_AttemptAttach(const struct FName& SocketName, bool* Success);
	void AIStolenProj_AttemptReturnTo(TEnumAsByte<Enum_AIThrowAtStyle> ReturnTo, const struct FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success);
	void AIStolenProj_AttemptLerpToSocket(const struct FName& SocketToLerpTo, float LerpDuration, bool* Success);
	void AIStolenProj_GetElementalTypeFromStolenProjectile(EOakElementalType* StolenProjectileElement);
	void ReceiveBeginPlay();
	void OnStolenProjectileUpdated_Event_1(class AActor* StolenProjectile);
	void OnStolenProjectileDestroyed_Event_1(class AActor* StolenProjectile);
	void OnStolenProjectileReturned_Event_1(class AActor* StolenProjectile);
	void ExecuteUbergraph_AIStolenProjDetector(int EntryPoint);
	void AIStolenProjectileDestroyFX__DelegateSignature(class AActor* MyStolenProjectile);
	void AIStolenProjectileReturnFX__DelegateSignature(class AActor* MyStolenProjectile);
	void AIStolenProjectileUpdated__DelegateSignature(class AActor* MyStolenProjectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
