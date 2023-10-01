#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Claptrap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Claptrap.BPI_Claptrap_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Claptrap_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Claptrap.BPI_Claptrap_C");
		return ptr;
	}


	void EnableClaptrapAntenna();
	void DisableClaptrapAntenna();
	void ForceClaptrapDownstate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
