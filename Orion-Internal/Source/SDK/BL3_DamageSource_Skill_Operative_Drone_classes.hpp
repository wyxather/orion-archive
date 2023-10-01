#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageSource_Skill_Operative_Drone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageSource_Skill_Operative_Drone.DamageSource_Skill_Operative_Drone_C
// 0x0000 (0x0098 - 0x0098)
class UDamageSource_Skill_Operative_Drone_C : public UDamageSource_Skill_Operative_Device_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_Skill_Operative_Drone.DamageSource_Skill_Operative_Drone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
