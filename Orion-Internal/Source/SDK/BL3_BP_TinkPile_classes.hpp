#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TinkPile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TinkPile.BP_TinkPile_C
// 0x0048 (0x05D0 - 0x0588)
class ABP_TinkPile_C : public ATinkPile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Smoke;                                                    // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   DeathFX;                                                  // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cone;                                                     // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         ApeInteractRadius;                                        // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Dust_Junk;                                                // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   BuildFX;                                                  // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         GoonInteractRadius;                                       // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         TinkJumpInRadius;                                         // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TinkPile.BP_TinkPile_C");
		return ptr;
	}


	void UserConstructionScript();
	void TinkPile_MyUserEnteredPile(TEnumAsByte<Enum_TinkBuildSelection> WhatToBuild, class AActor* User);
	void TinkPile_MyUserBuiltObject();
	void BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_0_SpawnEvent__DelegateSignature_BP_TinkPile(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
	void BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_1_SpawnEvent__DelegateSignature_BP_TinkPile(class USpawnerComponent* SpawnerComponent, class AActor* Actor);
	void TinkPile_MyUserExitedPile();
	void SmartObject_TinkPile_GoonInteract_Begin(class APawn* User);
	void SmartObject_TinkPile_GoonInteract_Interrupt(class APawn* User);
	void SmartObject_TinkPile_GoonInteract_Success(class APawn* User);
	void OnTinkPileUseStarted();
	void OnTinkPileUseFinished();
	void TinkPile_EnablePile();
	void TinkPIle_DisablePile();
	void SmartObject_TinkPile_ApeInteract_Begin(class APawn* User);
	void SmartObject_TinkPile_ApeInteract_Success(class APawn* User);
	void SmartObject_TinkPile_ApeInteract_Interrupt(class APawn* User);
	void ExecuteUbergraph_BP_TinkPile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
