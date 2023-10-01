#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CombatClass_NoMaxWeight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CombatClass_NoMaxWeight.CombatClass_NoMaxWeight_C
// 0x0000 (0x0068 - 0x0068)
class UCombatClass_NoMaxWeight_C : public UCombatClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CombatClass_NoMaxWeight.CombatClass_NoMaxWeight_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
