#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_Cryptolith_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Cryptolith.BPI_Cryptolith_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Cryptolith_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Cryptolith.BPI_Cryptolith_C");
		return ptr;
	}


	void SetPhase(int* NewPhase);
	void GetPhase(int* Out);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
