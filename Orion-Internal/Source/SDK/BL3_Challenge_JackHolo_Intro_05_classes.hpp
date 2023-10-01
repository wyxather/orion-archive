#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_JackHolo_Intro_05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_JackHolo_Intro_05.Challenge_JackHolo_Intro_05_C
// 0x0000 (0x0270 - 0x0270)
class UChallenge_JackHolo_Intro_05_C : public UChallenge_JackHolo_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_JackHolo_Intro_05.Challenge_JackHolo_Intro_05_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
