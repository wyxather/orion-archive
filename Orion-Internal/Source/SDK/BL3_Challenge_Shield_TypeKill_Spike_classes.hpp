#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Shield_TypeKill_Spike_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Shield_TypeKill_Spike.Challenge_Shield_TypeKill_Spike_C
// 0x0000 (0x0268 - 0x0268)
class UChallenge_Shield_TypeKill_Spike_C : public UChallenge_Shield_TypeKill_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Shield_TypeKill_Spike.Challenge_Shield_TypeKill_Spike_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
