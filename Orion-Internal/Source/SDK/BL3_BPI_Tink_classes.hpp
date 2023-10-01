#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Tink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Tink.BPI_Tink_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Tink_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Tink.BPI_Tink_C");
		return ptr;
	}


	void Tink_StartSuicideAttempt();
	void Tink_VomitStop();
	void Tink_VomitStart();
	void Tink_TargetChanged(class AActor* TargetActor);
	void Tink_SuicideBombDetonated();
	void Tink_Anointed_Death();
	void Tink_GetElement(EOakElementalType* CurrentElement);
	void Tink_SetTinkBallAnimInstance();
	void Tink_GetMyDamageCauser(class AActor** WhoDamagedTink);
	void Tink_SetNewWeapon(class AWeapon* WeaponToPass);
	void Tink_StartGyroCannonAttack();
	void Get_TinkIsFlying(bool* TinkIsFlying);
	void Tink_TinkPileXform();
	void TinkBaddass_StartMeleeConvert();
	void Get_TinkMyAttachedTo(class AActor** WhatIsTinkAttachedTo);
	void Tink_SetGoonChildMati(class UMaterialInterface* GoonTinkMati);
	void Get_TinkIsAttached(bool* TinkAttachedState);
	void Tink_BallTinkSpawned();
	void Tink_Mourn(class AActor* WhoToMourn);
	void Tink_Explosive();
	void Get_TinkWhatToBuild(TEnumAsByte<Enum_TinkBuildSelection>* WhatShouldTheTinkBuild);
	void Tink_HideWeapon();
	void Tink_ShowWeapon();
	void Get_TinkMeleeWeapon(class AActor** TinkMeleeWeapon);
	void Tink_MeleeWeapon();
	void TinkDetachFromMount(bool bEjected, class AActor* DamageCauser, const struct FVector& HitDirection);
	void Set_TinkIsAttached(bool TinkAttachedState);
	void Set_TinkMyAttachedTo(class AActor* WhatIsTinkAttachedTo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
