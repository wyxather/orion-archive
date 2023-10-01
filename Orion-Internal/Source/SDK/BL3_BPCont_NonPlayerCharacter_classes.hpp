#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_NonPlayerCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C
// 0x00AB (0x081C - 0x0771)
class ABPCont_NonPlayerCharacter_C : public ABPCont_AI_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0778(0x0008) (Transient, DuplicateTransient)
	class UOakNpcGreetingComponent*                    OakNpcGreeting;                                           // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAttributeEffectData                        DamageScaleModifier0;                                     // 0x0788(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeEffectData                        DamageScaleReset;                                         // 0x07D0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ActivateNerfHealthPercent;                                // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void TargetHealthCheck();
	void TargetTakesDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void TargetDies(class AActor* DamageReceiver, class AActor* DamageCauser);
	void BndEvt__Targeting_K2Node_ComponentBoundEvent_6_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_NonPlayerCharacter(class UTargetingComponent* TargetingComponent);
	void ExecuteUbergraph_BPCont_NonPlayerCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
