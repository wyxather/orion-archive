#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkAnointed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TinkAnointed.BPI_TinkAnointed_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TinkAnointed_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TinkAnointed.BPI_TinkAnointed_C");
		return ptr;
	}


	void GiganticToNormal();
	void ADDHealth();
	void CannotLaunch();
	void CanLaunch();
	void ShrunktoGrow();
	void Gigantic();
	void Normal();
	void Grow();
	void Shrink();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
