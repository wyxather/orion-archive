#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tink_TurretBasicPile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Tink_TurretBasicPile.BPChar_Tink_TurretBasicPile_C
// 0x0000 (0x2410 - 0x2410)
class ABPChar_Tink_TurretBasicPile_C : public ABPChar_Tink_TurretBasic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Tink_TurretBasicPile.BPChar_Tink_TurretBasicPile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
