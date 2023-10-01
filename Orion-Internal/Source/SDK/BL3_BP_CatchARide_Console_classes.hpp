#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_Console_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CatchARide_Console.BP_CatchARide_Console_C
// 0x00D8 (0x0810 - 0x0738)
class ABP_CatchARide_Console_C : public ACatchARide
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Vehicle_Collision;                                        // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDialogComponent*                         GbxDialog;                                                // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxComponent4;                                            // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxComponent3;                                            // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxComponent2;                                            // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxComponent;                                             // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UsableCollision3;                                         // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UsableCollision2;                                         // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UsableCollision;                                          // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TouchBox;                                                 // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMissionObjectiveReference                  Mission_OvercomeBlocade_Use;                              // 0x07B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMissionObjectiveReference                  Mission_OvercomeBlocade_Reboot;                           // 0x07E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CatchARide_Console.BP_CatchARide_Console_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnNewBodyEquipped(class UOakCARVehicleData** VehicleData);
	void OnNewPartEquipped(ECARPartType* PartType, class UOakCARVehiclePartData** PartData);
	void OnVehicleDeployedFromMenu();
	void BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_CatchARide_Console(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void OnIStateInteractive();
	void OnIStateNonInteractive();
	void ExecuteUbergraph_BP_CatchARide_Console(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
