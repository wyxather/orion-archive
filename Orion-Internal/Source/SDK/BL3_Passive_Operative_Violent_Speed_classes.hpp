#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Operative_Violent_Speed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Operative_Violent_Speed.Passive_Operative_Violent_Speed_C
// 0x0000 (0x01E0 - 0x01E0)
class UPassive_Operative_Violent_Speed_C : public UPassiveSkill_Operative_KillSkillParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Operative_Violent_Speed.Passive_Operative_Violent_Speed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
