#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageSource_Bullet_Spirit_Of_Maya_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageSource_Bullet_Spirit_Of_Maya.DamageSource_Bullet_Spirit_Of_Maya_C
// 0x0000 (0x0098 - 0x0098)
class UDamageSource_Bullet_Spirit_Of_Maya_C : public UDamageSource_Bullet_Pistol_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_Bullet_Spirit_Of_Maya.DamageSource_Bullet_Spirit_Of_Maya_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
