#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_VeryGoodBoy_AIcontroller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Wasteland_VeryGoodBoy_AIcontroller.Character_Wasteland_VeryGoodBoy_AIcontroller_C
// 0x0000 (0x05C0 - 0x05C0)
class ACharacter_Wasteland_VeryGoodBoy_AIcontroller_C : public ACharacter_Base_AIController_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_VeryGoodBoy_AIcontroller.Character_Wasteland_VeryGoodBoy_AIcontroller_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
