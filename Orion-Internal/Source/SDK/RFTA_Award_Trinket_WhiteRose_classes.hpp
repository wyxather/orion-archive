#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Award_Trinket_WhiteRose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Award_Trinket_WhiteRose.Award_Trinket_WhiteRose_C
// 0x0000 (0x0060 - 0x0060)
class UAward_Trinket_WhiteRose_C : public UItemAward
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Award_Trinket_WhiteRose.Award_Trinket_WhiteRose_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
