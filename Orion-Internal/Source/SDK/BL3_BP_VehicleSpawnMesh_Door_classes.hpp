#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VehicleSpawnMesh_Door_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C
// 0x00FD (0x067D - 0x0580)
class ABP_VehicleSpawnMesh_Door_C : public ABP_VehicleSpawnMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BlackFogPlane;                                            // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_Collision;                                            // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMesh;                                          // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<Enum_VehicleSpawnMesh_DoorStyle>       DoorArtStyle;                                             // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<Enum_VehicleSpawnMesh_DoorStyle>, TSoftObjectPtr<class USkeletalMesh>> VehicleSpawnMeshMap;                                      // 0x05A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       AttachSocket;                                             // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AOakVehicle*                                 LastSpawnVehicle;                                         // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpulseAtEnd;                                             // 0x0608(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<Enum_VehicleSpawnMesh_DoorStyle>, class UGbxAnimSet*> VehicleAnimSetMap;                                        // 0x0618(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BoostOnSpawn;                                             // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        BlackFog_Plane;                                           // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BlackFogDepth;                                            // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_BlackFog_Plane;                                       // 0x067C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleSpawnMesh_Door.BP_VehicleSpawnMesh_Door_C");
		return ptr;
	}


	void SetArtStyle(TEnumAsByte<Enum_VehicleSpawnMesh_DoorStyle> VehicleSpawnMeshStyle);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnActorSpawned_Event_1(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void BndEvt__GbxAction_K2Node_ComponentBoundEvent_0_ActionComponentStopDelegate__DelegateSignature_BP_VehicleSpawnMesh_Door(class UClass* Action, EGbxActionEndState EndState);
	void ReleaseVehicle();
	void ExecuteUbergraph_BP_VehicleSpawnMesh_Door(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
