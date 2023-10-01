#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Incinerator_GroundDOT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_Incinerator_GroundDOT.Action_Mod_Incinerator_GroundDOT_C
// 0x0000 (0x02FC - 0x02FC)
class UAction_Mod_Incinerator_GroundDOT_C : public UAction_DOT_Fire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Incinerator_GroundDOT.Action_Mod_Incinerator_GroundDOT_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
