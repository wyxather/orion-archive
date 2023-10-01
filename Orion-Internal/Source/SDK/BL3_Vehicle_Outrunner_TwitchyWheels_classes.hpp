#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Vehicle_Outrunner_TwitchyWheels_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Vehicle_Outrunner_TwitchyWheels.Vehicle_Outrunner_TwitchyWheels_C
// 0x0000 (0x150C - 0x150C)
class AVehicle_Outrunner_TwitchyWheels_C : public AVehicle_Outrunner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vehicle_Outrunner_TwitchyWheels.Vehicle_Outrunner_TwitchyWheels_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
