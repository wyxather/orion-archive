#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_DesertVault_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Sabotage_DesertVault.Challenge_Sabotage_DesertVault_C
// 0x0000 (0x0340 - 0x0340)
class UChallenge_Sabotage_DesertVault_C : public UChallenge_Sabotage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Sabotage_DesertVault.Challenge_Sabotage_DesertVault_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
