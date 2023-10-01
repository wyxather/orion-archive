#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Ladder_GroundCheckParams_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ladder_GroundCheckParams.Ladder_GroundCheckParams_C
// 0x0000 (0x0048 - 0x0048)
class ULadder_GroundCheckParams_C : public UGroundCheckParams
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ladder_GroundCheckParams.Ladder_GroundCheckParams_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
