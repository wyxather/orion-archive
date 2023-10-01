#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Enemy_Maliwan_RobotDog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Enemy_Maliwan_RobotDog.Challenge_Enemy_Maliwan_RobotDog_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Enemy_Maliwan_RobotDog_C : public UChallenge_Enemy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Enemy_Maliwan_RobotDog.Challenge_Enemy_Maliwan_RobotDog_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
