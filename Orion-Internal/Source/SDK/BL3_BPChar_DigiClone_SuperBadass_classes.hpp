#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_DigiClone_SuperBadass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_DigiClone_SuperBadass.BPChar_DigiClone_SuperBadass_C
// 0x0000 (0x2510 - 0x2510)
class ABPChar_DigiClone_SuperBadass_C : public ABPChar_DigiClone_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_DigiClone_SuperBadass.BPChar_DigiClone_SuperBadass_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
