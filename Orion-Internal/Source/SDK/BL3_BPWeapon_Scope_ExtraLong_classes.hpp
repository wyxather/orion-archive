#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapon_Scope_ExtraLong_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeapon_Scope_ExtraLong.BPWeapon_Scope_ExtraLong_C
// 0x0000 (0x03F0 - 0x03F0)
class UBPWeapon_Scope_ExtraLong_C : public UWeaponScopeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapon_Scope_ExtraLong.BPWeapon_Scope_ExtraLong_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
