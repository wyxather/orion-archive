#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_BrokenVendingMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionScripted_BrokenVendingMachine.IO_MissionScripted_BrokenVendingMachine_C
// 0x0089 (0x0749 - 0x06C0)
class AIO_MissionScripted_BrokenVendingMachine_C : public AIO_MissionScripted_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (Transient, DuplicateTransient)
	class URegionBalanceStateComponent*                RegionBalanceState;                                       // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_UseMe_Close_End_Fade;                                  // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_UseMe_Start_And_Loop;                                  // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavBox;                                                   // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_FX_VendingMachine_Glass;                               // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DarkBackground;                                           // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionDirectorComponent*                OakMissionDirector;                                       // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMesh;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MissionToGive;                                            // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    MissionGrant;                                             // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      VendingMachineToSpawn;                                    // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_IO_VendingMachine>                VendingMachineType;                                       // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionScripted_BrokenVendingMachine.IO_MissionScripted_BrokenVendingMachine_C");
		return ptr;
	}


	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_A01730AF4E04B056BB8034899237011D(class AActor* Actor, int InstanceIndex);
	void BndEvt__OakMissionDirector_K2Node_ComponentBoundEvent_1_MissionDirectorDisabled__DelegateSignature_IO_MissionUsable_GrowingPains_WaterPurifier();
	void BndEvt__OakMissionDirector_K2Node_ComponentBoundEvent_2_MissionDirectorEnabled__DelegateSignature_IO_MissionUsable_GrowingPains_WaterPurifier();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_MissionGiver_Single(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void Play_Feedback_ScriptedActionStarted();
	void Play_Feedback_ScriptedActionFinished();
	void ReceiveBeginPlay();
	void Multicast_Used();
	void ExecuteUbergraph_IO_MissionScripted_BrokenVendingMachine(int EntryPoint);
	void MissionGrant__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
