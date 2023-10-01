#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LevelTravelStationObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LevelTravelStationObject.LevelTravelStationObject_C
// 0x0100 (0x06D0 - 0x05D0)
class ALevelTravelStationObject_C : public ATravelStationObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	class UUsableComponent*                            Usable_Unavailable;                                       // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_Leave;                                     // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_Approach;                                  // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            StandinSocket;                                            // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               InteractPromptFX;                                         // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CollisionAndTraceBox;                                     // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ArrowMesh;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TransitionArrowAdjustments;                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOutOfMapWaypointComponent*                  OutOfMapWaypoint1;                                        // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationVehicleSpawnPointComponent*    TravelStationVehicleSpawnPoint1;                          // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationVehicleSpawnPointComponent*    TravelStationVehicleSpawnPoint3;                          // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationVehicleSpawnPointComponent*    TravelStationVehicleSpawnPoint2;                          // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationVehicleSpawnPointComponent*    TravelStationVehicleSpawnPoint;                           // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxAreaComponent*                           GbxArea;                                                  // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULevelTravelStationBillboard_C*              LevelTravelStationBillboard;                              // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULevelTravelStationComponent*                LevelTravelStation;                                       // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UOakTravelStationResurrectComponent_C*       OakTravelStationResurrectComponent;                       // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationSpawnPointComponent*           TravelStationSpawnPoint4;                                 // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationSpawnPointComponent*           TravelStationSpawnPoint3;                                 // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationSpawnPointComponent*           TravelStationSpawnPoint2;                                 // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTravelStationSpawnPointComponent*           TravelStationSpawnPoint1;                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               InteractFX;                                               // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              NearbyCharacters;                                         // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<Enum_LevelTravelStationObject>         LevelTravel;                                              // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class UGbxCondition*                               Cond_LevelTravel_NewEnumerator2;                          // 0x06C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LevelTravelStationObject.LevelTravelStationObject_C");
		return ptr;
	}


	void IsInAnOverlappingVehicle(class AOakCharacter_Player* PlayerChar, bool* PlayerIsInOverlappingVehicle);
	void SetLevelNameTextRender(class UTravelStationData** TravelData);
	void UserConstructionScript();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_LevelTravelStationObject(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_LevelTravelStationObject(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__InteractPromptFX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_LevelTravelStationObject(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__LevelTravelStation_K2Node_ComponentBoundEvent_0_LevelTravelOnDestinationForTextRenderChanged__DelegateSignature_LevelTravelStationObject(class ULevelTravelStationData* Destination);
	void ReceiveBeginPlay();
	void __UserState_LevelTravel_1(bool bFromLoad);
	void __UserState_LevelTravel_2(bool bFromLoad);
	void SetLevelTravelVisibilityState(TEnumAsByte<Enum_LevelTravelStationObject> VisiblilityState);
	void ExecuteUbergraph_LevelTravelStationObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
