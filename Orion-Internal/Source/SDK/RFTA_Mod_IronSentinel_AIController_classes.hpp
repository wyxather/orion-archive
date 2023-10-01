#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_IronSentinel_AIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_IronSentinel_AIController.Mod_IronSentinel_AIController_C
// 0x0000 (0x05C0 - 0x05C0)
class AMod_IronSentinel_AIController_C : public ACharacter_Base_AIController_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_IronSentinel_AIController.Mod_IronSentinel_AIController_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
