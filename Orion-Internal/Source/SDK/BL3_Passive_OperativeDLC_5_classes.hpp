#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_OperativeDLC_5.Passive_OperativeDLC_4_C
// 0x0000 (0x01E0 - 0x01E0)
class UPassive_OperativeDLC_4_C : public UPassiveSkill_Operative_KillSkillParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_OperativeDLC_5.Passive_OperativeDLC_4_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
