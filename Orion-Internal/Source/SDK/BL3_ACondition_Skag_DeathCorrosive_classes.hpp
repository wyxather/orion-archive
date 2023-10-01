#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACondition_Skag_DeathCorrosive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACondition_Skag_DeathCorrosive.ACondition_Skag_DeathCorrosive_C
// 0x0000 (0x0078 - 0x0078)
class UACondition_Skag_DeathCorrosive_C : public UGbxAction_ConditionContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACondition_Skag_DeathCorrosive.ACondition_Skag_DeathCorrosive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
