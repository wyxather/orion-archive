#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PlayerEnemyInteractions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_PlayerEnemyInteractions_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C");
		return ptr;
	}


	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void Enemy_OnThoughtLockStop();
	void Enemy_OnThoughtLockStart();
	void Enemy_OnPhaseLockStop();
	void Enemy_OnPhaseLockStart();
	void Player_HealthDepleted(class AOakCharacter* Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
