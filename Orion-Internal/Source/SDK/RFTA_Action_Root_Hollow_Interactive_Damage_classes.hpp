#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Root_Hollow_Interactive_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Root_Hollow_Interactive_Damage.Action_Root_Hollow_Interactive_Damage_C
// 0x0000 (0x024C - 0x024C)
class UAction_Root_Hollow_Interactive_Damage_C : public UAction_Interactive_Damage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Root_Hollow_Interactive_Damage.Action_Root_Hollow_Interactive_Damage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
