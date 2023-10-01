#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionPlaceable_Static_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionPlaceable_Static.IO_MissionPlaceable_Static_C
// 0x0068 (0x0798 - 0x0730)
class AIO_MissionPlaceable_Static_C : public AIO_MissionUsable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             PlacedParticleScene;                                      // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AdditionalUsableCollision;                                // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Placeable_Mesh;                                           // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PreviewMesh;                                              // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  PostUseMaterialArray;                                     // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterial*                                   GreenGhostMaterial;                                       // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UIOData_MissionPlaceable_Static_C*           DataAsset;                                                // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   SkeletalPlaceable;                                        // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                ActionArrayCurrentInt;                                    // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class UMeshComponent*                              PlaceableMeshComponent;                                   // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     GameplayTasksComponent;                                   // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionPlaceable_Static.IO_MissionPlaceable_Static_C");
		return ptr;
	}


	void CreateGameplayTasksComponent();
	void UserConstructionScript();
	void OnAnimEnd_3E77AB8645B4BAD8B6DA3C86FEC231A7();
	void OnEnd_3E77AB8645B4BAD8B6DA3C86FEC231A7(EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_9105A98E446429F27D878DB48398DA32();
	void OnEnd_9105A98E446429F27D878DB48398DA32(EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_783AB9244D47EDA770F96E952AC91F92();
	void OnEnd_783AB9244D47EDA770F96E952AC91F92(EGbxActionEndState EndState, class AActor* Actor);
	void Play_Feedback_PlaceableDefault();
	void Play_Feedback_Placeable();
	void Play_Feedback_Placing();
	void Play_Feedback_Placed();
	void Play_Feedback_UsableDefault();
	void Play_Feedback_Usable();
	void Play_Feedback_Used();
	void Play_Feedback_InUse();
	void CreateGameplayTaskComponentIfNeccessary();
	void ExecuteUbergraph_IO_MissionPlaceable_Static(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
