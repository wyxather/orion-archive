#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_PunkShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_PunkShared.BPI_PunkShared_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_PunkShared_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PunkShared.BPI_PunkShared_C");
		return ptr;
	}


	void BPI_Punk_Anointed_FakeDeath();
	void BPI_Punk_AnointedX2_Teleport();
	void BPI_Punk_Anointed_ADDHealth();
	void BPI_Punk_Anointed_Death();
	void PunkBrewHag_PickPotion();
	void BPI_Punk_Snipe_Laser_Green();
	void BPI_Punk_Snipe_Laser_Off();
	void BPI_Punk_Snipe_Fire();
	void BPI_Punk_Snipe_Laser_On();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
