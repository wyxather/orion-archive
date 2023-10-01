#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_ElementalProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_ElementalProjectile.BPI_ElementalProjectile_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_ElementalProjectile_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ElementalProjectile.BPI_ElementalProjectile_C");
		return ptr;
	}


	void InitializeElement(EOakElementalType ElementType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
