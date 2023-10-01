#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACondition_Skag_DeathRadiation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACondition_Skag_DeathRadiation.ACondition_Skag_DeathRadiation_C
// 0x0000 (0x0078 - 0x0078)
class UACondition_Skag_DeathRadiation_C : public UGbxAction_ConditionContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACondition_Skag_DeathRadiation.ACondition_Skag_DeathRadiation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
