#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Combat_ExplodingGasTank_Incendiary_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Combat_ExplodingGasTank_Incendiary_Large.IO_Combat_ExplodingGasTank_Incendiary_Large_C
// 0x0000 (0x0658 - 0x0658)
class AIO_Combat_ExplodingGasTank_Incendiary_Large_C : public ABP_ExplodingObject_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Combat_ExplodingGasTank_Incendiary_Large.IO_Combat_ExplodingGasTank_Incendiary_Large_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
