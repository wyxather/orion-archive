#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_DoorSmall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C
// 0x00E8 (0x05E0 - 0x04F8)
class ASpawnMesh_DoorSmall_C : public ABP_SpawnMesh_Skeletal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class URigidBodyComponent*                         Barricade;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<Enum_SpawnMesh_DoorSmallAnimStyle>     DoorAnimType;                                             // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowArtStyleSelection;                                  // 0x0509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_SpawnMesh_DoorSmall>              DoorArtStyle;                                             // 0x050A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x050B(0x0005) MISSED OFFSET
	TMap<TEnumAsByte<Enum_SpawnMesh_DoorSmall>, TSoftObjectPtr<class UObject>> DoorArtStyleMap;                                          // 0x0510(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAllowBarricadeSelection;                                 // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_SpawnMesh_DoorSmallBarricades>    BarricadeArtStyle;                                        // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<Enum_SpawnMesh_DoorSmallBarricades>, TSoftObjectPtr<class UObject>> BarricadeStyleMap;                                        // 0x0568(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class USkeletalMesh>                ClothMesh;                                                // 0x05B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C");
		return ptr;
	}


	void SetBarricadeArtStyle(TEnumAsByte<Enum_SpawnMesh_DoorSmallBarricades> BarricadeArtStyle);
	void SetDoorArtStyle(TEnumAsByte<Enum_SpawnMesh_DoorSmall> DoorArtStyle);
	void InitByAnimType(TEnumAsByte<Enum_SpawnMesh_DoorSmallAnimStyle> DoorAnimType);
	void UserConstructionScript();
	void BndEvt__Barricade_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_SpawnMesh_DoorSmall(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
	void SpawnMesh_TriggerDestruction();
	void ExecuteUbergraph_SpawnMesh_DoorSmall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
