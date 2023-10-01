#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DeathGib_SpiderantLarge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeathGib_SpiderantLarge.DeathGib_SpiderantLarge_C
// 0x0000 (0x08F0 - 0x08F0)
class UDeathGib_SpiderantLarge_C : public UOakAction_Gib
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeathGib_SpiderantLarge.DeathGib_SpiderantLarge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
