#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Beastmaster_Miss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Melee_Beastmaster_Miss.Action_Melee_Beastmaster_Miss_C
// 0x0000 (0x0238 - 0x0238)
class UAction_Melee_Beastmaster_Miss_C : public UAction_Melee_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Melee_Beastmaster_Miss.Action_Melee_Beastmaster_Miss_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
