#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Tink_Turret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Tink_Turret.BPI_Tink_Turret_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Tink_Turret_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Tink_Turret.BPI_Tink_Turret_C");
		return ptr;
	}


	void TinkTurret_TrackingLaserCheckOFF();
	void TinkTurret_TrackingLaserCheckON(class AActor* TrackingLaserTarget);
	void TinkTurret_TrackingAudio(bool On);
	void TInkTurret_SetPileSpawnerComp(class USpawnerComponent* MyPileSpawnerComp);
	void TinkTurret_DeathHide();
	void TinkTurret_DeathCleanUp();
	void TinkTurret_PerformLaunch();
	void TurretTargetableOff();
	void TurretTargetableOn();
	void TurretGodModeOff();
	void TurretGodModeOn();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
