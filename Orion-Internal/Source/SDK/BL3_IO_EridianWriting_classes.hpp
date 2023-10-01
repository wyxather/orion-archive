#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_EridianWriting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_EridianWriting.IO_EridianWriting_C
// 0x0090 (0x05E0 - 0x0550)
class AIO_EridianWriting_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        EridianWritings_AudioComponent;                           // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            UsableNoAnalyzer;                                         // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UseBox;                                                   // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_Reading;                                   // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_SlabActivated_9A20F7EA423C9EDE0173A589BA1AD80B;// 0x0588(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_9A20F7EA423C9EDE0173A589BA1AD80B;   // 0x058C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Challenge_Anaylzer;                                       // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Challenge_EridianWriting;                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    WritingRevealed;                                          // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EnumState_EridianWriting>              EridianWritingState;                                      // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	class UEchoLogData*                                EchoLog;                                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    NewVar_1;                                                 // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_EridianWritingState_NewEnumerator1;                  // 0x05D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_EridianWritingState_NewEnumerator2;                  // 0x05D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_EridianWriting.IO_EridianWriting_C");
		return ptr;
	}


	void ChallengeCompleted(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass);
	void EvaluateState();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnAnimEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5();
	void OnEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5(EGbxActionEndState EndState, class AActor* Actor);
	void __UserState_EridianWritingState_1(bool bFromLoad);
	void __UserState_EridianWritingState_2(bool bFromLoad);
	void __UserState_EridianWritingState_3(bool bFromLoad);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_UNIX1551725399(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void ReceiveBeginPlay();
	void EchoLogFinished();
	void BndEvt__Usable1_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void ExecuteUbergraph_IO_EridianWriting(int EntryPoint);
	void WritingRevealed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
