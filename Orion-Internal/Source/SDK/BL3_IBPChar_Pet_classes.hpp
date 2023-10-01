#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Pet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IBPChar_Pet.IBPChar_Pet_C
// 0x0000 (0x0028 - 0x0028)
class UIBPChar_Pet_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_Pet.IBPChar_Pet_C");
		return ptr;
	}


	void GetPetJabberIngenuityBarrel(class AActor** Barrel);
	void PetSucceededRevive();
	void PetJabbermon_BarrelDrop();
	void PetJabbermon_BarrelThrow();
	void PetJabbermon_BarrelSet(class AActor* NewBarrel);
	void PetJabbermon_BarrelAlign(class AActor* NewBarrel);
	void SetEnraged(bool bIsEnraged);
	void GetPetEvolutionType(EOakActionAbilityPetEvolutionType* EvolutionType);
	void DoAttackCommand(class UObject* EnemyObject);
	void BeginAttackCommand();
	void GetPetType(EOakActionAbilityPetType* PetType);
	void PetJabbermon_FireRocket();
	void PetJabbermon_ChangeLauncherVis(bool NewVisibility);
	void PetJabbermon_ChangeGunVis(bool NewVisibility);
	void PetJabbermon_Poop_Hide();
	void PetJabbermon_Poop_Show();
	void PetJabbermon_ChangeMeleeVis(bool NewWeapVisibility);
	void OnPetReleased(bool bForced, EPetReleaseReason Reason);
	void MatchesPetProfile(class UOakPlayerCharacterAugmentData_Pet* InAugment, bool* res);
	void PetSpawnTrapProjectile();
	void GetBeastmasterOwner(class AOakCharacter_Player** Beastmaster);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
