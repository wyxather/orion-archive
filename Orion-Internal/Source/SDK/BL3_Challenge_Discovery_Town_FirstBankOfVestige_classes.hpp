#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Discovery_Town_FirstBankOfVestige_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Discovery_Town_FirstBankOfVestige.Challenge_Discovery_Town_FirstBankOfVestige_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Discovery_Town_FirstBankOfVestige_C : public UChallenge_Discovery_Geranium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Discovery_Town_FirstBankOfVestige.Challenge_Discovery_Town_FirstBankOfVestige_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
