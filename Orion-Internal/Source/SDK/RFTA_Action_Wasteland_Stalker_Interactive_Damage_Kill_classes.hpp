#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Wasteland_Stalker_Interactive_Damage_Kill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Wasteland_Stalker_Interactive_Damage_Kill.Action_Wasteland_Stalker_Interactive_Damage_Kill_C
// 0x0000 (0x024C - 0x024C)
class UAction_Wasteland_Stalker_Interactive_Damage_Kill_C : public UAction_Interactive_Damage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Wasteland_Stalker_Interactive_Damage_Kill.Action_Wasteland_Stalker_Interactive_Damage_Kill_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
