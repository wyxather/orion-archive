#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_JackHolo_AllDone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_JackHolo_AllDone.Challenge_JackHolo_AllDone_C
// 0x0000 (0x0278 - 0x0278)
class UChallenge_JackHolo_AllDone_C : public UChallenge_JackHolo_StatMaster_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_JackHolo_AllDone.Challenge_JackHolo_AllDone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
