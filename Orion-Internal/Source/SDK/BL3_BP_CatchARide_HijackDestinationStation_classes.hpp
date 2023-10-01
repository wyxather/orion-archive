#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_HijackDestinationStation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C
// 0x0020 (0x0570 - 0x0550)
class ABP_CatchARide_HijackDestinationStation_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOakCharacter*                               OwningCharacter;                                          // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnteredVehicle(class UPawnAttachSlotComponent* PawnAttachSlotComponent);
	void ExitedVehicle(class UPawnAttachSlotComponent* PawnAttachSlotComponent);
	void OnEnabled();
	void OnDisabled();
	void SetupForCharacter(class AGbxCharacter* NewCharacter);
	void ExecuteUbergraph_BP_CatchARide_HijackDestinationStation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
