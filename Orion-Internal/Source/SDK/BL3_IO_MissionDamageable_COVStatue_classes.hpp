#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionDamageable_COVStatue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionDamageable_COVStatue.IO_MissionDamageable_COVStatue_C
// 0x002D (0x0755 - 0x0728)
class AIO_MissionDamageable_COVStatue_C : public AIO_MissionDamageable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0728(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TemporaryPlaceableLocation;                               // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AIO_MissionPlaceable_Static_C*               MyPlaceableStatue;                                        // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     SavedPlaceableMeshLocation;                               // 0x0748(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageableByDefault;                                      // 0x0754(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionDamageable_COVStatue.IO_MissionDamageable_COVStatue_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayFeedback_Destroying();
	void PlayFeedback_Destroyed();
	void PlayFeedback_Default();
	void PlayFeedback_Damageable();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_IO_MissionDamageable_COVStatue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
