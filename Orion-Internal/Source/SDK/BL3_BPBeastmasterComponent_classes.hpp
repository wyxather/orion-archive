#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPBeastmasterComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPBeastmasterComponent.BPBeastmasterComponent_C
// 0x00C0 (0x04D0 - 0x0410)
class UBPBeastmasterComponent_C : public UBeastmasterCharacterComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FEnvQueryParams                             PetSpawnLocationEQS;                                      // 0x0418(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPBeastmasterComponent.BPBeastmasterComponent_C");
		return ptr;
	}


	bool ValidateCurrentPetAugment(class UOakPlayerCharacterAugmentData_Pet** PetAugment);
	float GetPetCooldownRefundPercent(EPetRespawnCooldownRefundType* RefundType);
	struct FVector GetFallbackPetSpawnLocation();
	void CheckForSpawnCollisions(const struct FVector& SpawnLocation, bool* bCollisionsDetected);
	void GetPetSpawnClass(class UOakPlayerCharacterAugmentData_Pet* InAugment, class UClass** res);
	class AOakCharacter* SpawnNewPet(class UOakPlayerCharacterAugmentData_Pet** PetAugment, struct FVector* SpawnLocation);
	void OnReleasedPet(bool* bForced, EPetReleaseReason* ReleaseReason);
	void ReceiveBeginPlay();
	void TryOrderPetAttack();
	void ExecuteUbergraph_BPBeastmasterComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
