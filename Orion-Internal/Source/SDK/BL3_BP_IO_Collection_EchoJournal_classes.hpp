#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_Collection_EchoJournal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C
// 0x0088 (0x05D8 - 0x0550)
class ABP_IO_Collection_EchoJournal_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UBP_CrewChallengeComponent_Collection_C*     BP_CrewChallengeComponent_Collection;                     // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDialogComponent*                         GbxDialog;                                                // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        JournalMesh;                                              // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavBox;                                                   // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UsableCollision;                                          // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      JournalChallenge;                                         // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEchoLogData*                                EchoLog;                                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EJournalEchoState>                     JournalState;                                             // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	float                                              EchoLength;                                               // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               Cond_JournalState_NewEnumerator1;                         // 0x05D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IO_Collection_EchoJournal.BP_IO_Collection_EchoJournal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__BP_CrewChallengeComponent_Collection_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_Collection_EchoJournal(class UChallengesComponent* PlayerChallenges);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_Collection_EchoJournal(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void EchoLogDone();
	void __UserState_JournalState_2(bool bFromLoad);
	void __UserState_JournalState_1(bool bFromLoad);
	void PlayFeedback();
	void ExecuteUbergraph_BP_IO_Collection_EchoJournal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
