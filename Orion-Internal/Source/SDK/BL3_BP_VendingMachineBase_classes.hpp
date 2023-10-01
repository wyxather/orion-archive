#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachineBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VendingMachineBase.BP_VendingMachineBase_C
// 0x0040 (0x0708 - 0x06C8)
class ABP_VendingMachineBase_C : public AVendingMachine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavBoxComponent*                         NavBox;                                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDialogComponent*                         GbxDialog;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UsableCollision;                                          // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TouchBox;                                                 // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VendingMachineBase.BP_VendingMachineBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPlayerStopInteraction(class AOakPlayerController** Player);
	void K2_OnSoldSomething(class AActor** InventoryActor);
	void K2_OnSoldAllJunk();
	void OnPlayerBeginInteraction(class AOakPlayerController** Player);
	void K2_OnShelfStablySelected(EVendingMachineTrayTileType* Type, class AActor** InventoryActor);
	void K2_OnBoughtSomething(EVendingMachineBuyType* Type, class AActor** InventoryActor);
	void ExecuteUbergraph_BP_VendingMachineBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
