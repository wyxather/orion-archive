#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ResurrectTravelStationObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ResurrectTravelStationObject.ResurrectTravelStationObject_C
// 0x00D1 (0x06A1 - 0x05D0)
class AResurrectTravelStationObject_C : public ACheckpointTravelStationObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            StandinSocket;                                            // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDialogComponent*                         GbxDialog;                                                // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavBoxComponent*                         GbxNavBox;                                                // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationVehicleSpawnPointComponent*    TravelStationVehicleSpawnPoint1;                          // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationVehicleSpawnPointComponent*    TravelStationVehicleSpawnPoint3;                          // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationVehicleSpawnPointComponent*    TravelStationVehicleSpawnPoint2;                          // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationVehicleSpawnPointComponent*    TravelStationVehicleSpawnPoint;                           // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxAreaComponent*                           ActivationArea;                                           // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Projector_Main_Eye;                                    // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTravelStationResurrectComponent_C*       OakTravelStationResurrectComponent;                       // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTravelStationSpawnPointComponent*           TravelStationSpawnPoint4;                                 // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationSpawnPointComponent*           TravelStationSpawnPoint3;                                 // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationSpawnPointComponent*           TravelStationSpawnPoint2;                                 // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationSpawnPointComponent*           TravelStationSpawnPoint1;                                 // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayerSpawned;                                            // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FWwisePlaybackInstance                      Audio_TravelStationLoop;                                  // 0x0678(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                                 Audio_Activate;                                           // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Audio_Deactivate;                                         // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LockVisuals;                                              // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResurrectTravelStationObject.ResurrectTravelStationObject_C");
		return ptr;
	}


	void ActivateResurrectStation(class AActor* ActivatingActor);
	void UserConstructionScript();
	void BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_5_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject(class AActor* OtherStation);
	void FX_Open();
	void FX_Close();
	void TraveledTo(class AActor* SpawnedActor);
	void BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_4_TravelStationResurrectChanged__DelegateSignature_ResurrectTravelStationObject(class AActor* OtherStation);
	void ReceiveBeginPlay();
	void OnDisabling();
	void OnEnabling();
	void BndEvt__OakTravelStationResurrectComponent_K2Node_ComponentBoundEvent_0_TravelStationCharacterResurrected__DelegateSignature_ResurrectTravelStationObject(class APawn* ResurrectedCharacter);
	void OnEnabled();
	void OnDisabled();
	void ExecuteUbergraph_ResurrectTravelStationObject(int EntryPoint);
	void PlayerSpawned__DelegateSignature(class AOakCharacter_Player* Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
