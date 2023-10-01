#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Dodge_Ape_Bullet_MovingFL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dodge_Ape_Bullet_MovingFL.Dodge_Ape_Bullet_MovingFL_C
// 0x0000 (0x0218 - 0x0218)
class UDodge_Ape_Bullet_MovingFL_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_Ape_Bullet_MovingFL.Dodge_Ape_Bullet_MovingFL_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
