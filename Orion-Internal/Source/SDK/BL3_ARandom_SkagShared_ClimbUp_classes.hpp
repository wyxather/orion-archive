#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_SkagShared_ClimbUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_SkagShared_ClimbUp.ARandom_SkagShared_ClimbUp_C
// 0x0000 (0x0070 - 0x0070)
class UARandom_SkagShared_ClimbUp_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_SkagShared_ClimbUp.ARandom_SkagShared_ClimbUp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
