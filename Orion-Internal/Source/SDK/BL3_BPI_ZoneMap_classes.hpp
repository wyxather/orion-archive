#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_ZoneMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_ZoneMap.BPI_ZoneMap_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_ZoneMap_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ZoneMap.BPI_ZoneMap_C");
		return ptr;
	}


	void Activate_POI();
	void End_Zone_Map_Cursor_Over();
	void Begin_Zone_Map_Cursor_Over();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
